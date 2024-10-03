#include <cfloat>
#include "Weather.h"

using namespace std;

Weather::Weather(bool isRain) : isRain(isRain) {
    mt = mt19937(rd());
    dist = uniform_real_distribution<double>(1.0, nextafter(100, DBL_MAX));
}

bool Weather::isRaining() const {
    return isRain;
}

void Weather::randomize(){
    isRain = dist(mt) < 30;
}