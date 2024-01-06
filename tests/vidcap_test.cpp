#include <gtest/gtest.h>
#include "../src/vidcap.h"

// Test Show device list
TEST(VidCapTest, ShowDeviceList) {
	VidCap *devices = new VidCap();
	devices->showDevices();
}