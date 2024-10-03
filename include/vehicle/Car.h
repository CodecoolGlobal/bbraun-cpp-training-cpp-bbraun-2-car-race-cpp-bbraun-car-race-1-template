#pragma once

#include <string>
#include <vector>

class Car {
private:
   std::string getRandomCarName() const;
   std::string const name;
   double const normalSpeed;
   double actualSpeed;
   double distanceTraveled;
   inline static std::vector<std::string> const carNames = {"Aura", "Origin", "Tracer", "Roamer", "Crux", "Cobra", "Blast", "Prodigy", "Mirage", "Pulse"}; 
public:
   Car();
   void prepareForLap(bool isYellowFlag);
   std::string toString() const;
   void moveForAnHour();
};