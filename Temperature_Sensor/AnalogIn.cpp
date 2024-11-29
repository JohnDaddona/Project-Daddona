//This is my Analogin.cpp Program, it contains all my function implementmations
//for my AnalogIn header file and class definition. An example invocation would
//be just adding it to the bash build file as we don't invoke this.

#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;
#include "AnalogIn.h"
#define ADC_PATH "/sys/bus/iio/devices/iio:device0/in_voltage"

AnalogIn::AnalogIn(){
}

AnalogIn::AnalogIn(unsigned int n){
  setNumber(n);
}

unsigned int AnalogIn::getNumber(){
  return number;
}

void AnalogIn::setNumber(unsigned int n){
  number = n;
}

int AnalogIn::readAdcSample(){
   stringstream ss;
   ss << ADC_PATH << number << "_raw";
   fstream fs;
   fs.open(ss.str().c_str(), fstream::in);
   fs >> number;
   fs.close();
   return number;
}

AnalogIn::~AnalogIn(){//Destructor
}

