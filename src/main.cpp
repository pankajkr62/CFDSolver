//
// Created by Pankaj Kumar on 21/09/24.
//


// src/main.cpp
#include <iostream>
#include "solver.h"

int main() {
    int width = 100;
    int height = 100;
    double alpha = 0.01;
    double dt = 0.1;
    double dx = 1.0;
    int steps = 1000;

    Solver solver(width, height, alpha, dt, dx);

    std::cout << "Running CFD simulation..." << std::endl;

    for (int step = 0; step < steps; ++step) {
        solver.step();
    }

    std::cout << "Simulation complete!" << std::endl;

    return 0;
}
