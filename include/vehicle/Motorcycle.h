#pragma once

#include <string>
#include "Weather.h"

class Motorcycle {
private:
   std::string getMotorcycleName();
   inline static int motorcycleCount = 0;
   std::string name;
   double normalSpeed;
   double actualSpeed;
   double distanceTraveled;
public:
   Motorcycle();
   void prepareForLap(Weather& weather);
   std::string toString();
   void moveForAnHour();
};