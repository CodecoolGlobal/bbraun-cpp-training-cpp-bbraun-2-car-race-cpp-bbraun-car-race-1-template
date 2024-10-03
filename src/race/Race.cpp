#include <iostream>
#include "Race.h"
#include "Weather.h"

using namespace std;

void Race::simulateRace(Weather& weather) {
    for (int lapIndex = 0; lapIndex < 50; lapIndex++) {
        isYellowFlag = false;
        weather.randomize();
        
        for (auto &truck : trucks) {
            truck.prepareForLap(isYellowFlag);
            truck.moveForAnHour();
        }
        
        for (auto& car : cars) {
            car.prepareForLap(isYellowFlag);
            car.moveForAnHour();
        }

        for (auto& motorcycle : motorcycles) {
            motorcycle.prepareForLap(weather);
            motorcycle.moveForAnHour();
        }

    }
}

void Race::printRaceResults() const {
    string results = "";

    for (auto const& car : cars) {
        results += car.toString() + "\n";
    }

    for (auto const& motorcycle : motorcycles) {
        results += motorcycle.toString() + "\n";
    }

    for (auto const& truck : trucks) {
        results += truck.toString() + "\n";
    }

    cout << results;
}

bool Race::isYellowFlagActive() const {
    return isYellowFlag;
}

void Race::registerCar(Car const& car) {
    cout << car.toString() << endl;
    cars.push_back(car);
}

void Race::registerMotorcycle(Motorcycle const& motorcycle) {
    cout << motorcycle.toString() << endl;
    motorcycles.push_back(motorcycle);
}

void Race::registerTruck(Truck const& truck) {
    cout << truck.toString() << endl;
    trucks.push_back(truck);
}