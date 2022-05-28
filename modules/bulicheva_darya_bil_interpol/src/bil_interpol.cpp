// Copyright 2022 Bulicheva Darya

#include <vector>

#include "include/bil_interpol.h"

bilen_interpol::bilen_interpol() {
    std::vector<double> vect(4, 10);
    arr = vect;
}

bilen_interpol::bilen_interpol(std::vector<double> _arr) {
    arr = _arr;
}

double bilen_interpol::interpolate() {
    double r;
    double r1;
    double r2;
    double x = 10;
    double x1 = 20;
    double x2 = 30;
    double y2 = 30;
    double y1 = 20;
    double y = 10;
    r1 = arr[0] + (x1 - x) * ((arr[1] - arr[0]) / (x2 - x));
    r2 = arr[2] + (x1 - x) * ((arr[3] - arr[2]) / (x2 - x));
    r = r1 + (y1 - y2) * ((r2 - r1) / (y - y2));
    return r;
}

bilen_interpol::~bilen_interpol() {
    arr.clear();
}
