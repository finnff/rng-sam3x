#include "sam3.h"  
// #include "hwlib.hpp" //No need to include sam3.h if using hwlib.


uint_fast32_t trueRandom() {
  static bool enabled = false;
  if (!enabled) {
    PMC->PMC_PCER1 = (0x01 << (41 - 32));

    TRNG->TRNG_IDR = 0xFFFFFFFF;
    TRNG->TRNG_CR = TRNG_CR_KEY(0x524e47) | TRNG_CR_ENABLE;
    enabled = true;
  }

  while (!(TRNG->TRNG_ISR & TRNG_ISR_DATRDY))
    ;
  return TRNG->TRNG_ODATA;
};

u_int32_t RandomRange(const uint_fast32_t &lo = 0,
                      const uint_fast32_t &hi = 100) {
  uint_fast32_t rand = trueRandom();
  rand = rand % (hi - lo + 1);
  return rand + lo;
}

