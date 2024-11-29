// John Daddona
// Homework 08
// This is the beginning of the makeLEDs.cpp program copied and pasted into 
// a header file.
#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#define LED_PATH "/sys/class/leds/beaglebone:green:usr"
using namespace std;
class LED{
   private:
      string path;
      int number;
      virtual void writeLED(string filename, string value);
      virtual void removeTrigger();
   public:
      LED(int number);
      virtual void turnOn();
      virtual void turnOff();
      virtual void flash(string delayms);
      virtual void outputState();
      virtual ~LED();
};
