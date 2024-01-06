#ifndef VIDCAP_H
#define VIDCAP_H

#include <vector>

// Struct for storing information about a video capture device
struct VidCapDevice {
	int id;
	std::string name;
	bool isVisible;
};

class VidCap {
public:
	// functions

	// show the list of video capture devices
	void showDevices();

private:
	// variables
	
	// List of video capture devices
	std::vector<VidCapDevice> devices;

	// functions
	
	// populate the list of video capture devices
	void populateDevices();

	// add a video capture device to the list
	void addDevice(int id, std::string name, bool isVisible);

};
#endif // !VIDCAP_H
