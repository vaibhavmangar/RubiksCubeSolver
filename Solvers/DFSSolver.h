//
// Created by Vaibhav on 15/08/24.
//
#include "../Models/RubiksCube.h"

// Typename T: RubiksCube Representation used (3d, 1d, Bitboard)
// Typename H: Corresponding Hash function

template<typename T, typename H>
class DFSSolver {
private:

    vector<RubiksCube::MOVE> moves;
    int max_search_depth;
    //    DFS code to find the solution (helper function)
    bool dfs(int dep) {
        //base case
        if (rubiksCube.isSolved()) return true;
        //pruning
        if (dep > max_search_depth) return false;
        //visit all its neighbours
        for (int i = 0; i < 18; i++) {
            rubiksCube.move(RubiksCube::MOVE(i));//make move
            moves.push_back(RubiksCube::MOVE(i));//add move
            if (dfs(dep + 1)) return true;//
            moves.pop_back();//backtrack
            rubiksCube.invert(RubiksCube::MOVE(i));//backtrack the move just called prime of move
        }
        return false;
    }

public:
    T rubiksCube;

    DFSSolver(T _rubiksCube, int _max_search_depth = 8) {//we can set max depth till 13
        rubiksCube = _rubiksCube;
        max_search_depth = _max_search_depth;
    }

    vector<RubiksCube::MOVE> solve() {
        dfs(1);
        return moves;
    }
};
