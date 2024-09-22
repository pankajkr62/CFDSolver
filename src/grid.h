//
// Created by Pankaj Kumar on 21/09/24.
//

#ifndef CFD_GPROF_SAMPLE_GRID_H
#define CFD_GPROF_SAMPLE_GRID_H

#include <vector>

class Grid {
public:
    Grid(int width, int height);
    double& operator()(int i, int j);
    const double& operator()(int i, int j) const;
    int getWidth() const;
    int getHeight() const;

private:
    int width, height;
    std::vector<std::vector<double>> data;
};

#endif //CFD_GPROF_SAMPLE_GRID_H
