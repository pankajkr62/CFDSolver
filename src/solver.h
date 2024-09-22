//
// Created by Pankaj Kumar on 21/09/24.
//

#ifndef CFD_GPROF_SAMPLE_SOLVER_H
#define CFD_GPROF_SAMPLE_SOLVER_H

#include "grid.h"

class Solver {

public:
    Solver(int width, int height, double alpha, double dt, double dx);
    void step();
    const Grid& getGrid() const;

private:
    double alpha, dt, dx;
    Grid current, next;
    int width, height;


};


#endif //CFD_GPROF_SAMPLE_SOLVER_H
