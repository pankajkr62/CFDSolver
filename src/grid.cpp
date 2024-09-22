//
// Created by Pankaj Kumar on 21/09/24.
//
// src/grid.cpp
#include "grid.h"
#include <vector>
#include <stdexcept>

Grid::Grid(int width, int height) : width(width), height(height), data(width, std::vector<double>(height, 0.0)) {}

double& Grid::operator()(int i, int j) {
    if (i < 0 || i >= width || j < 0 || j >= height) {
        throw std::out_of_range("Grid index out of bounds");
    }
    return data[i][j];
}

const double& Grid::operator()(int i, int j) const {
    if (i < 0 || i >= width || j < 0 || j >= height) {
        throw std::out_of_range("Grid index out of bounds");
    }
    return data[i][j];
}

int Grid::getWidth() const {
    return width;
}

int Grid::getHeight() const {
    return height;
}