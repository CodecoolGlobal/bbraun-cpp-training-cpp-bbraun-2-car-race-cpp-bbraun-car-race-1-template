#pragma once

#include "Weather.h"
#include <string>

enum class TruckStatus {
   NOT_BROKEN,
   REPAIRING_1H,
   REPAIRING_2H
};

class Truck {
private:
   static std::string getTruckName();
   TruckStatus truckStatus;
   std::string name;
   double normalSpeed;
   double actualSpeed;
   double distanceTraveled;
public:
   Truck();
   void prepareForLap(bool& isYellowFlag);
   std::string toString();
   void moveForAnHour();
};