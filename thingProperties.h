// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char DEVICE_LOGIN_NAME[]  = "4ed8a576-667f-44a8-be16-f02972591808";

const char SSID[]               = SECRET_SSID;    // Network SSID (name)
const char PASS[]               = SECRET_OPTIONAL_PASS;    // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]  = SECRET_DEVICE_KEY;    // Secret device password

void onScheduleChange();
void onFeedNowChange();

String message;
CloudSchedule schedule;
bool feed_Now;

void initProperties(){

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.addProperty(message, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(schedule, READWRITE, ON_CHANGE, onScheduleChange);
  ArduinoCloud.addProperty(feed_Now, READWRITE, ON_CHANGE, onFeedNowChange);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
