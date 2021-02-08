#define CATCH_CONFIG_MAIN

#include <vector>
#include "catch.hpp"
#include "interpolator.h"


TEST_CASE("TEST_01_findValue", "Check if the exception wasn't thrown when all points are valid") {
                                                 
  std::vector<std::pair<double, double>> dataPoints = {{2.5f, 25.f},   // X(0),Y(0)
                                                       {5.f, 50.f},    // X(1),Y(1)
                                                       {10.f, 75.f},   // X(2),Y(2)
                                                       {15.f, 100.f}}; // X(3),Y(3)

  Interpolator cppInterpole(dataPoints);

  REQUIRE_NOTHROW(cppInterpole);
}


TEST_CASE("TEST_02_findValue", "Check if the exception was thrown when two points are similar") {
                                                 
  std::vector<std::pair<double, double>> dataPoints = {{2.5f, 25.f},   // X(0),Y(0)
                                                       {5.f, 50.f},    // X(1),Y(1)
                                                       {10.f, 75.f},   // X(2),Y(2)
                                                       {10.f, 100.f}}; // X(3),Y(3)
  
  Interpolator cppInterpole(dataPoints);

  REQUIRE_THROWS(cppInterpole);
}


TEST_CASE("TEST_03_findValue", "Computes the corresponding Y value when two points aren't similar") {
  std::vector<std::pair<double, double>> dataPoints = {{2.5f, 25.f},   // X(0),Y(0)
                                                       {5.f, 50.f},    // X(1),Y(1)
                                                       {7.5f, 75.f},   // X(2),Y(2)
                                                       {10.f, 100.f}}; // X(3),Y(3)
                                                       
  Interpolator cppInterpole(dataPoints);

  SECTION("X with low value") { 
    REQUIRE(cppInterpole.findValue(DBL_MIN) == 25.f);
  }

  SECTION("X with moderate value ") { 
    REQUIRE(cppInterpole.findValue(0.f) == 25.f);

    REQUIRE(cppInterpole.findValue(6.f) == 60.f);

    REQUIRE(cppInterpole.findValue(3.956f) == Approx(39.5600008965f));
  }

  SECTION("X with High value") { 
    REQUIRE(cppInterpole.findValue(DBL_MAX) == 100.f);
  }
}


