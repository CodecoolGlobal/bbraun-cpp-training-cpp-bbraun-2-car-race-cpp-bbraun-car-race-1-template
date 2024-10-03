#pragma once

#include <string>
#include "Weather.h"

class Motorcycle {
private:
   std::string getMotorcycleName() const;
   inline static int motorcycleCount = 0;
   std::string const name;
   double const normalSpeed;
   double actualSpeed;
   double distanceTraveled;
public:
   Motorcycle();
   void prepareForLap(Weather const& weather);
   std::string toString() const;
   void moveForAnHour();
};