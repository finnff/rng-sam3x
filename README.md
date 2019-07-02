# rng-Sam3x
### Header File with fuctions to utilize the "True Random Number Generator" peripheral of the Atmel ATSAM3X8E (Found on Arduino Due)


Wouter Van Ooijen's [hwlib](https://github.com/wovo/hwlib) is used to demonstrate to some usage in main.hpp, 
however it also works with a lone [sam3.h header](https://github.com/arduino/ArduinoModule-CMSIS-Atmel/blob/master/CMSIS-Atmel/CMSIS/Device/ATMEL/sam3.h)

for use with arduino IDE you might need to include

```c
#include <component/component_trng.h>
```



[main.cpp](../master/main.cpp) demonstrates some usage.

Further documentation can be found in the the [Header File itself.](../master/TrueRandom.hpp)

