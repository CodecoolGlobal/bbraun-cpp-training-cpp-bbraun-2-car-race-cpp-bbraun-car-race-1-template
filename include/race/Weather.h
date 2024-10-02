#pragma once

#include <string>
#include <random>

class Weather {
 private:
    std::random_device rd;
    std::mt19937 mt;
    std::uniform_real_distribution<double> dist;
    bool isRain;
 public:
    Weather(bool isRain);
    bool isRaining() const;
    void randomize();
};