//
// Created by Tristan Brindle on 24/07/2018.
//

#include "line.hpp"
#include <cmath>

std::ostream& operator<<(std::ostream& os, const line& l)
{
    os << "Line from " << l.start << " to " << l.end;
    return os;
}

bool operator==(const line& lhs, const line& rhs)
{
    return lhs.start == rhs.start &&
           lhs.end == rhs.end;
}

line::line(point s, point e) {
    start = s;
    end = e;
}

double line::length() {
    double out = sqrt(((end.x - start.x) * (end.x - start.x)) + ((end.y - start.y) * (end.x - start.x)));
    return out;
}
