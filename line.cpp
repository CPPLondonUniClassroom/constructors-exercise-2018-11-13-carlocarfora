//
// Created by Tristan Brindle on 24/07/2018.
//

#include "line.hpp"


std::ostream& operator<<(std::ostream& os, const line& l)
{
    os << "Line from " << l.start << " to " << l.end;
    return os;
}