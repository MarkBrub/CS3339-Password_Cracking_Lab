#include "crack.hpp"

int main(int argc, char const* argv[]) {
    crack solver;

    solver.findLastHash();

    return 0;

    solver.createThreads();
    solver.joinThreads();
    solver.removeDuplicates();
    solver.printResults();
    solver.printStats();

    return 0;
}