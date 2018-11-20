//
// Created by Tristan Brindle on 24/07/2018.
//

#ifndef WEEK13_POINTS_AND_LINES_LINE_HPP
#define WEEK13_POINTS_AND_LINES_LINE_HPP

#include "point.hpp"

#include <ostream>

struct line {

    line() = default;

    line(point start, point end);

    point start = point{};
    point end{0, 0}; // or just {}

    double length() const;
};

std::ostream& operator<<(std::ostream& os, const line& l);

#endif //WEEK13_POINTS_AND_LINES_LINE_HPP
