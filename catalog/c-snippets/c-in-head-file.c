#ifndef PINS_H_
#define PINS_H_

int pin_state = 0; // [!code error]

void blink_pin(int pin, int sleep){ // [!code error]
  gpio_put(pin, 1);  // [!code error]
  sleep_ms(sleep);   // [!code error]
  gpio_put(pin, 0);  // [!code error]
  sleep_ms(sleep);   // [!code error]
}

#endif // PINS_H_
