#pragma once
#include <string>
using namespace std;

enum class VehicleType {car,truck,bike,electric};

class Vehicle {
    public:
        Vehicle(const string& plate,VehicleType type);
        void printInfo() const;
    private:
        string licensePlate;
        VehicleType type;
};