//
// Created by Tristan Brindle on 24/07/2018.
//

#ifndef WEEK13_POINTS_AND_LINES_LINE_HPP
#define WEEK13_POINTS_AND_LINES_LINE_HPP

#include "point.hpp"

#include <ostream>

struct line {
    line() = default;
    //    line(){
//        start = {0,0};
//        end = {0,0};
//    };

    line(point s, point e);

    double length();

    point start;
    point end;
};

std::ostream& operator<<(std::ostream& os, const line& l);
bool operator==(const line& lhs, const line& rhs);

#endif //WEEK13_POINTS_AND_LINES_LINE_HPP
