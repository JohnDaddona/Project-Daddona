#include <string>
#define ADC_PATH "/sys/bus/iio/devices/iio:device0/in_voltage"
class AnalogIn{
    private:
        unsigned int number;
    public:
        AnalogIn();
        AnalogIn(unsigned int n);
        virtual unsigned int getNumber();  // inline function implementation.
        virtual void setNumber(unsigned int n);
        virtual int readAdcSample();
        virtual ~AnalogIn();
    };
