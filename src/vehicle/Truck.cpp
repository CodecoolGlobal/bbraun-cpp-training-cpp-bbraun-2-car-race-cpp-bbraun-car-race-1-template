#include "Truck.h"

using namespace std;

Truck::Truck() : name(getTruckName()), normalSpeed(100), distanceTraveled(0), truckStatus(TruckStatus::NOT_BROKEN){}

string Truck::getTruckName(){
    return to_string(rand() % 1000);
}

void Truck::prepareForLap(bool& isYellowFlag){
    
    switch (truckStatus){
        case TruckStatus::NOT_BROKEN:
        case TruckStatus::REPAIRING_2H:
            if (rand() % 100 < 5){
                truckStatus = TruckStatus::REPAIRING_1H;
                isYellowFlag = true;
                actualSpeed = 0;
            } else {
                truckStatus = TruckStatus::NOT_BROKEN;
                actualSpeed = normalSpeed;
            }
            break;
        case TruckStatus::REPAIRING_1H:
            truckStatus = TruckStatus::REPAIRING_2H;
            isYellowFlag = true;
            actualSpeed = 0;
            break; 
    }
}

void Truck::moveForAnHour(){
    distanceTraveled += actualSpeed;
}

string Truck::toString(){
    return "Type: Truck, Name: " + name + ", normal speed: " + to_string(normalSpeed) + ", actual speed: " +
        to_string(actualSpeed) + ", distance traveled: " + to_string(distanceTraveled);
}