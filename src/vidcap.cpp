#include <iostream>
#include <opencv2/core.hpp>
#include "vidcap.h"


void VidCap::showDevices() {
    // Print the list of video capture devices
    for (const auto& device : devices) {
        std::cout << "Device ID: " << device.id << std::endl;
        std::cout << "Device Name: " << device.name << std::endl;
        std::cout << "Is Visible: " << (device.isVisible ? "true" : "false") << std::endl;
        std::cout << std::endl;
    }
}

void VidCap::populateDevices() {
    // TODO: Implement the code to populate the list of video capture devices
}

void VidCap::addDevice(int id, std::string name, bool isVisible) {
    // Do we already have the device in our list?
    
    
    // Create a new VidCapDevice object and add it to the list of devices
    VidCapDevice device;
    device.id = id;
    device.name = name;
    device.isVisible = isVisible;
    
    devices.push_back(device);
}
