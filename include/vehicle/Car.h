#pragma once

#include <string>
#include <vector>

class Car {
private:
   std::string getRandomCarName();
   std::string name;
   double normalSpeed;
   double actualSpeed;
   double distanceTraveled;
   inline static std::vector<std::string> carNames = {"Aura", "Origin", "Tracer", "Roamer", "Crux", "Cobra", "Blast", "Prodigy", "Mirage", "Pulse"}; 
public:
   Car();
   void prepareForLap(bool isYellowFlag);
   std::string toString();
   void moveForAnHour();
};