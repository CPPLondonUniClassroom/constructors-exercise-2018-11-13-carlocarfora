//
// Created by Tristan Brindle on 24/07/2018.
//

#include "line.hpp"

#include <cmath>

line::line(point start_, point end_)
{
    start = start_;
    end = end_;
}

double line::length() const
{
    return std::hypot(end.x - start.x, end.y - start.y);
}


std::ostream& operator<<(std::ostream& os, const line& l)
{
    os << "Line from " << l.start << " to " << l.end;
    return os;
}