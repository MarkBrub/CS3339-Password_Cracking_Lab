#include "crack.hpp"

int main(int argc, char const* argv[]) {
    std::cout << "The last password is: " << std::flush;

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