cmake_minimum_required(VERSION 3.29)
project(RubiksCubeSolver)

set(CMAKE_CXX_STANDARD 20)

add_executable(RubiksCubeSolver main.cpp
        Models/RubiksCube.cpp
        Models/RubiksCube.h
        Models/RubiksCube3DArray.cpp
        Models/RubiksCube1DArray.cpp
        Models/RubiksCubeBitBoard.cpp
        Solvers/DFSSolver.h
        Solvers/BFSSolver.h
        Solvers/IDDFSSolver.h
        Models/PatternDatabase/PatternDatabase.h
        Solvers/IDAstarSolver.h
        PatternDatabase/math.h
        PatternDatabase/math.cpp
        PatternDatabase/PermutationIndexer.h
        PatternDatabase/CornerPatternDatabase.cpp
        PatternDatabase/CornerPatternDatabase.h
        PatternDatabase/PatternDatabase.cpp
        PatternDatabase/PatternDatabase.h
        PatternDatabase/NibbleArray.cpp
        PatternDatabase/NibbleArray.h
        PatternDatabase/CornerDBMaker.cpp
        PatternDatabase/CornerDBMaker.h
)
