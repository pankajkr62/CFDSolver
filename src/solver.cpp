//
// Created by Pankaj Kumar on 21/09/24.
//

#include "solver.h"
#include <iostream>

Solver::Solver(int width, int height, double alpha, double dt, double dx)
        : width(width), height(height), alpha(alpha), dt(dt), dx(dx),
          current(width, height), next(width, height) {
    // Initialize the temperature field
    for (int i = 0; i < width; ++i) {
        for (int j = 0; j < height; ++j) {
            current(i, j) = 0.0;
        }
    }

    // Set a heat source in the center
    current(width / 2, height / 2) = 100.0;
}

void Solver::step() {
    double alpha_dt_dx2 = alpha * dt / (dx * dx);

    for (int i = 1; i < width - 1; ++i) {
        for (int j = 1; j < height - 1; ++j) {
            next(i, j) = current(i, j) + alpha_dt_dx2 * (
                    current(i + 1, j) + current(i - 1, j) +
                    current(i, j + 1) + current(i, j - 1) -
                    4 * current(i, j)
            );
        }
    }

    // Swap grids
    current = next;
}

const Grid& Solver::getGrid() const {
    return current;
}
