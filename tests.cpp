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

TEST_CASE("Task C: Velocity and Motion")
{
    Coord3D pos1 = {0, 0, 100.0};
    Coord3D vel1 = {1, -5, 0.2};
    move(&pos1, &vel1, 2.0);
    CHECK(pos1.x == 2);
    CHECK(pos1.y == -10);
    CHECK(pos1.z == 100.4);

    Coord3D pos2 = {-85, -1, 1};
    Coord3D vel2 = {-5, 0, 30};
    move(&pos2, &vel2, 6.5);
    CHECK(pos2.x == -117.5);
    CHECK(pos2.y == -1);
    CHECK(pos2.z == 196);
}

TEST_CASE("Task E: Create Coord3D Object")
{
    Coord3D *pointF = createCoord3D(4, 5 ,32);
    CHECK((*pointF).x == 4);
    CHECK((*pointF).y == 5);
    CHECK((*pointF).z == 32);

    Coord3D *pointG = createCoord3D(-523, 89723 , 0.0003);
    CHECK((*pointG).x == -523);
    CHECK((*pointG).y == 89723);
    CHECK((*pointG).z == 0.0003);

    deleteCoord3D(pointF);
    deleteCoord3D(pointG);
}