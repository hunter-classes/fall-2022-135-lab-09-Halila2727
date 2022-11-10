/*
  Author: Halil Akca
  Course: CSCI-135
  Instructor: Mike Zamansky
  Assignment: Lab 09
  This program will call the functions made in other .cpp files
*/

#include <iostream>
#include "funcs.h"
#include "coord3d.h"

int main()
{
  Coord3D pointP = {10, 20, 30};
  std::cout << "\nTask A: Length In 3D\nCoord3D pointP = {10, 20, 30}\nLength is " << length(&pointP) << "\n";
  std::cout << "\n------------------\n";

  Coord3D pointQ = {-20, 21, -22};
  std::cout << "Address of P: " << &pointP << "\n";
  std::cout << "Address of Q: " << &pointQ << "\n";
  Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
  std::cout << "\nTask B: Further from Origin\nCoord3D pointP = {10, 20, 30}  pointQ = {-20, 21, -22}\nAnswer is " << ans << "\n";
  std::cout << "\n------------------\n";

  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};
  move(&pos, &vel, 2.0); // object pos gets changed
  std::cout << "\nTask C: Move In 3D\nCoord3D pos = {0, 0, 100}\nCoord3D vel = {1, -5, 0.2}\nTime: 2.0\n";
  std::cout << "Position x: " << pos.x << "\nPosition y: " << pos.y << "\nPosition z: " << pos.z << std::endl;
  std::cout << "\n------------------\n";
}
