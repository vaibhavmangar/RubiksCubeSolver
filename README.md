

# Rubik's Cube Solver
-----------

This project implements a Rubik's Cube solver using various algorithms, including the IDA* solver suggested in Korf's research paper. The project also includes different representations of the Rubik's Cube and utilizes a corner pattern database for efficient state evaluation.

## Features

### 1. Rubik's Cube Representations

The project implements multiple representations of the Rubik's Cube:

- **3D Representation**: The cube is modeled as a 6x3x3 structure where each face contains 9 colored squares.
- **1D Representation**: The 3D cube is flattened into a 1D array using the formula `(ind * 9) + (row * 3) + col`.
- **Bit Representation**: The cube state is represented using bitboards for efficient manipulation and comparison.

### 2. Solvers

The project includes various solvers for finding the solution to the Rubik's Cube:

- **Breadth-First Search (BFS) Solver**: Uses a maximum depth concept to explore all possible states level by level.
- **Depth-First Search (DFS) Solver**: Implements DFS with a maximum depth limit and uses a visited map to avoid re-exploring states.
- **Iterative Deepening Depth-First Search (IDDFS) Solver**: Combines the benefits of DFS and BFS by gradually increasing the depth limit.
- **Iterative Deepening A* (IDA*) Solver**: The IDA* solver is based on Korf's research paper and uses the corner pattern database for heuristic evaluation.

### 3. Corner Pattern Database

- **Serial Indexing**: The corner pattern database is implemented to access the permuted state of the cube in O(1) time. This is crucial for the efficiency of the IDA* solver.

### 4. Custom Implementations

The project also includes custom implementations of the following:

- **Hasher Class**: A custom hash function for Rubik's Cube objects.
- **Comparison Operators**: Custom comparison operators for Rubik's Cube objects.
- **Assignment Operators**: Custom assignment operators for Rubik's Cube objects.

## How to Run the Project

### Prerequisites

- **IDE**: Use CLion as the development environment.
- **CMake**: Ensure CMake is properly configured in CLion for building the project.

### Steps to Run

1. **Clone the Repository**:
   ```
   git clone <repository-url>
   cd <repository-directory>
   ```

2. **Open the Project in CLion**:
   - Open the project directory in CLion.

3. **Configure and Run**:
   - Locate the `main.cpp` file in the project.
   - Uncomment the required test cases and include the corresponding header files based on the solver or representation you want to test.
   - Build and run the project using CLion.

4. **Testing Different Solvers**:
   - The `main.cpp` file contains various test cases for the implemented solvers. Uncomment the relevant sections to test different solvers or Rubik's Cube representations.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- The IDA* solver is based on the algorithm suggested in Richard Korf's research paper on Rubik's Cube solving.
