#include "rlutilities.h"

#include "simulation/game.h"
#include "simulation/ball.h"
#include "simulation/field.h"

#include "linear_algebra/math.h"

#include "misc/timer.h"

#include <fstream>
#include <iostream>

int main() {

  rlu::initialize("soccar");

  Game::set_mode(std::string("soccar"));
  std::cout << "mesh has: " << Field::triangles.size() << " triangles" << std::endl;

  Game::set_mode(std::string("hoops"));
  std::cout << "mesh has: " << Field::triangles.size() << " triangles" << std::endl;

  Game::set_mode(std::string("dropshot"));
  std::cout << "mesh has: " << Field::triangles.size() << " triangles" << std::endl;

  Game::set_mode(std::string("throwback"));
  std::cout << "mesh has: " << Field::triangles.size() << " triangles" << std::endl;

  return 0;

}
