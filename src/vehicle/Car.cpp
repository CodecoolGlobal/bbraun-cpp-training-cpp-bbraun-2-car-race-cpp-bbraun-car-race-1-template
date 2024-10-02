#include "Car.h"

using namespace std;

Car::Car() : name(getRandomCarName()), normalSpeed(80 + rand() % 30), distanceTraveled(0){}

string Car::getRandomCarName(){
    return carNames[rand() % carNames.size()] + " " + carNames[rand() % carNames.size()];
}

void Car::prepareForLap(bool isYellowFlag) {
    if (isYellowFlag){
        actualSpeed = 75;
    } else {
        actualSpeed = normalSpeed;
    }
}

void Car::moveForAnHour(){
    distanceTraveled += actualSpeed;
}

string Car::toString(){
    return "Type: Car, Name: " + name + ", normal speed: " + to_string(normalSpeed) + ", actual speed: " +
        to_string(actualSpeed) + ", distance traveled: " + to_string(distanceTraveled);
}