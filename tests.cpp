#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "coord3d.h"

TEST_CASE("Task A: Length of 3D")
{
    Coord3D case1 = {10, 20, 30};
    Coord3D case2 = {-69, 32, 94};
    Coord3D case3 = {0, 4, 222};
    Coord3D case4 = {92346, 902734, 2986};

    CHECK(length(&case1) - 37.4166 < 0.01);
    CHECK(length(&case2) - 120.917 < 0.01);
    CHECK(length(&case3) - 222.036 < 0.01);
    CHECK(length(&case4) - 907450 < 0.01);
}

TEST_CASE("Task B: Farther From Origin")
{
    Coord3D point1a = {10, 20, 30};
    Coord3D point2a = {-20, 21, -22};
    CHECK(fartherFromOrigin(&point1a, &point2a) == &point1a);
    Coord3D point1b = {-69, 32, 94};
    Coord3D point2b = {92346, 902734, 2986};
    CHECK(fartherFromOrigin(&point1b, &point2b) == &point2b);
    Coord3D point1c = {13, 13, 1588};
    Coord3D point2c = {-25, -64, 15}; 
    CHECK(fartherFromOrigin(&point1c, &point2c) == &point1c);
}