#include "Phone.h"

Phone::Phone(string serial, int battery) : serialNumber(serial), batteryLife(battery) {}

void Phone::ChargeBattery(int charge) {
    batteryLife = std::min(batteryLife + charge, 100);
}

void Phone::MakeCall() {
    if (batteryLife >= 5) {
        batteryLife -= 5;
        cout << "Call made. Battery life: " << batteryLife << "%" << endl;
    }
    else {
        cout << "Low battery, please charge!" << endl;
    }
}

string Phone::getSerialNumber() const {
    return serialNumber;
}

void Phone::setSerialNumber(string serial) {
    serialNumber = serial;
}

void Phone::displayInfo() const {
    cout << "Phone Serial: " << serialNumber << ", Battery: " << batteryLife << "%" << endl;
}
