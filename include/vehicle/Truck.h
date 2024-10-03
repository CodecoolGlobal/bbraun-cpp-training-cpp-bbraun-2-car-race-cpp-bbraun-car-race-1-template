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
   std::string getTruckName() const;
   TruckStatus truckStatus;
   std::string const name;
   double const normalSpeed;
   double actualSpeed;
   double distanceTraveled;
public:
   Truck();
   void prepareForLap(bool& isYellowFlag);
   std::string toString() const;
   void moveForAnHour();
};