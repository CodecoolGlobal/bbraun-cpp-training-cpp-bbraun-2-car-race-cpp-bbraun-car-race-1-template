#pragma once

#include <vector>
#include "Car.h"
#include "Motorcycle.h"
#include "Weather.h"
#include "Truck.h"

class Race {
private:
   std::vector<Car> cars;
   std::vector<Motorcycle> motorcycles;
   std::vector<Truck> trucks;
   bool isYellowFlag = false;
public:
   void simulateRace(Weather &weather);
   void printRaceResults();
   bool isYellowFlagActive();
   
   void registerCar(Car car);
   void registerMotorcycle(Motorcycle motorcycle);
   void registerTruck(Truck truck);
};