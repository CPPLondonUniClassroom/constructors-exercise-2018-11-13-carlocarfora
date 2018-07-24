
# Week 13 special member functions exercise #

This is a slightly expanded version of the "point" example we
used last week.

The file `line.hpp` contains the definition of a `line` struct.
A line is defined as two `point`s, the start and the end.

## Exercise 1 ##

 * Write a constructor for `line` taking two `point`s as arguments.
   Use the given points to initialise the `start` and `end` members of `line`
   
   You should write the declaration of the constructor in `line.hpp`, and the
   definition in `line.cpp`
   
 * Add a default constructor to `line` which sets both members to the point
   (0, 0)
   
 * In `main.cpp`, add assertions to `test_line()` to ensure your constructors
   are working correctly.
   
 * Experiment with marking your constructors as `= default` or `= delete` (you
   will need to comment out the constructor definitions while you do this). What
   error messages, if any, did you see? Is this what you expected?
   
 * (Optional, slightly harder): add a `length()` member function to `line` which
   returns the distance from the start point to the end point.