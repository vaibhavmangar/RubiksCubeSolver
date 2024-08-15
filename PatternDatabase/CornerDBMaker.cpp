//
// Created by Vaibhav on 16/08/24.
//

#include "CornerDBMaker.h"
using namespace std;

CornerDBMaker::CornerDBMaker(string _fileName) {
    fileName = _fileName;
}

CornerDBMaker::CornerDBMaker(string _fileName, uint8_t init_val) {
    fileName = _fileName;
    cornerDB = CornerPatternDatabase(init_val);
}

bool CornerDBMaker::bfsAndStore() {
    RubiksCubeBitboard cube;
    queue<RubiksCubeBitboard> q;
    q.push(cube);
    cornerDB.setNumMoves(cube, 0);//solved cube se start kar rahe hai
    int curr_depth = 0;
    while (!q.empty()) {
        int n = q.size();
        curr_depth++;
        if (curr_depth == 6) break;//max depth tak hi huristic lenge
        for (int counter = 0; counter < n; counter++) {
            RubiksCubeBitboard node = q.front();
            q.pop();
            for (int i = 0; i < 18; i++) {
                auto curr_move = RubiksCube::MOVE(i);
                node.move(curr_move);
                if ((int) cornerDB.getNumMoves(node) > curr_depth) {
                    cornerDB.setNumMoves(node, curr_depth);
                    q.push(node);
                }
                node.invert(curr_move);
            }
        }
    }

    cornerDB.toFile(fileName);
    return true;
}