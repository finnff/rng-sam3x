// #include "sam3.h"
#include "TrueRandom.hpp"
#include "hwlib.hpp" //No need to include sam3.h if using hwlib.

int main() {
  for (;;) {
    hwlib::cout << "random 32 Bit unsigned int: " << hwlib::endl;
    uint_fast32_t x = trueRandom();
    hwlib::cout << x << hwlib::endl;

    hwlib::cout
        << "random values between 0 and 100 if no parameters are given: "
        << hwlib::endl;
    uint_fast32_t y = RandomRange();
    hwlib::cout << y << hwlib::endl;

    hwlib::cout
        << "random values between given minimum and maximum (666 and 888): "
        << hwlib::endl;
    uint_fast32_t z = RandomRange(666, 888);
    hwlib::cout << z << hwlib::endl;

    hwlib::wait_ms(500);
  }
}
