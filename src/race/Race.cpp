#include <iostream>
#include "Race.h"
#include "Weather.h"

using namespace std;

void Race::simulateRace(Weather& weather){
    for (int lapIndex = 0; lapIndex < 50; lapIndex++) {
        isYellowFlag = false;
        weather.randomize();
        
        for (Truck &truck : trucks) {
            truck.prepareForLap(isYellowFlag);
            truck.moveForAnHour();
        }
        
        for (Car &car : cars) {
            car.prepareForLap(isYellowFlag);
            car.moveForAnHour();
        }

        for (Motorcycle &motorcycle : motorcycles) {
            motorcycle.prepareForLap(weather);
            motorcycle.moveForAnHour();
        }

    }
}

void Race::printRaceResults() {
    string results = "";

    for (Car car : cars) {
        results += car.toString() + "\n";
    }

    for (Motorcycle motorcycle : motorcycles) {
        results += motorcycle.toString() + "\n";
    }

    for (Truck truck : trucks) {
        results += truck.toString() + "\n";
    }

    cout << results;
}

bool Race::isYellowFlagActive() {
    return isYellowFlag;
}

void Race::registerCar(Car car) {
    cout << car.toString() << endl;
    cars.push_back(car);
}

void Race::registerMotorcycle(Motorcycle motorcycle) {
    cout << motorcycle.toString() << endl;
    motorcycles.push_back(motorcycle);
}

void Race::registerTruck(Truck truck) {
    cout << truck.toString() << endl;
    trucks.push_back(truck);
}