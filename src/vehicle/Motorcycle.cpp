#include "Motorcycle.h"

using namespace std;

Motorcycle::Motorcycle(): name(getMotorcycleName()), normalSpeed(100), distanceTraveled(0){}

string Motorcycle::getMotorcycleName(){
    return "Motorcycle " + to_string(++motorcycleCount);
}

void Motorcycle::prepareForLap(Weather& weather){
    if (weather.isRaining()){
        actualSpeed = 5 + rand() % 45;
    } else {
        actualSpeed = normalSpeed;
    }
}

void Motorcycle::moveForAnHour(){
    distanceTraveled += actualSpeed;
}

string Motorcycle::toString() {
    return "Type: motorcycle, Name: " + name + ", normal speed: " + to_string(normalSpeed) + ", actual speed: " +
        to_string(actualSpeed) + ", distance traveled: " + to_string(distanceTraveled);
}