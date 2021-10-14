#include "crack.hpp"

int main(int argc, char const* argv[]) {
    crack solver;

    solver.createThreads();
    solver.joinThreads();
    solver.removeDuplicates();
    solver.printResults();
    solver.printStats();

    return 0;
}