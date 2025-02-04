#ifndef PHONE_H
#define PHONE_H

#include <iostream>
#include <string>
#include <algorithm>  // For std::min
using namespace std;

class Phone {
private:
    string serialNumber;
    int batteryLife;

public:
    Phone(string serial, int battery);
    void ChargeBattery(int charge);
    void MakeCall();
    string getSerialNumber() const;
    void setSerialNumber(string serial);
    void displayInfo() const;
};

#endif
