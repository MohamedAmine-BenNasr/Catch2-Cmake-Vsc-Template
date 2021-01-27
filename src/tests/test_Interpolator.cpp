#define CATCH_CONFIG_MAIN

#include <vector>
#include "catch.hpp"
#include "interpolator.h"

TEST_CASE("FindValue", "Computes the corresponding Y value ") {
  std::vector<std::pair<double, double>> points ={{1.12f, 58.f},
                                                  {12.12f, 0.5f},
                                                  {15.12f, 25.f},
                                                  {10.12f, 1.f}};
  Interpolator cppInterpole(points);

  SECTION("X value too low") { 
    REQUIRE(cppInterpole.findValue(0.2f) == 1);
  }
}
