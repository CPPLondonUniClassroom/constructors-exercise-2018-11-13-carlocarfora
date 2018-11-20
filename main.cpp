
#include "point.hpp"
#include "line.hpp"

#include <cassert>
#include <sstream>
#include <iostream>

void test_point()
{
    // Test operator==
    {
        const point p1{1, 2};
        const point p2 = p1;
        const point p3{3, 4};

        assert(p1 == p2);
        assert(!(p1 == p3));
    }

    // Test operator!=
    {
        const point p1{1, 2};
        const point p2 = {3, 4};
        const point p3 = p1;

        assert(p1 != p2);
        assert(!(p1 != p3));
    }

    // Test operator+
    {
        const point p1{1, 2};
        const point p2{3, 4};
        const point p3{4, 6};

        assert(p1 + p2 == p3);
    }

    // Test operator-
    {
        const point p1{3, 4};
        const point p2{1, 2};
        const point p3{2, 2};

        assert(p1 - p2 == p3);
    }

    // Test operator+=
    {
        point p1{1, 2};
        const point p2{3, 4};
        const point result{4, 6};

        p1 += p2;

        assert(p1 == result);
    }

    // Test operator-=
    {
        point p1{3, 4};
        const point p2{1, 2};
        const point result{2, 2};

        p1 -= p2;

        assert(p1 == result);
    }

    // Test output streaming
    {
        std::ostringstream ss;
        ss << point{3, 4} << '\n';
        assert(ss.str() == "(3, 4)\n");
    }
}

void test_line()
{
    // Add your test code in here
    point p1{1,1};
    point p2{1,1};
    point p3{0,0};
    line l1{p1,p1};
    line l2{};
    line l3{p3,p3};
    assert(l2 == l3);
    assert(l1 == line(p1,p2));

    point p4{3,3};
    point p5{5,5};
    line l4(p4,p5);
    assert(l4.length() == 2.8284271247461903);
}

int main()
{
    test_point();
    test_line();
}