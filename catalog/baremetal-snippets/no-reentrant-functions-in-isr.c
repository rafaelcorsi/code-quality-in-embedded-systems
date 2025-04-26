
bool timer_0_callback(repeating_timer_t *rt) {
  printf("timer end \n"); // [!code error]
  return truel
}

void btn_callback(uint gpio, uint32_t events) {
  printf("btn presses \n"); // [!code error]
}

void main (void) {
  // ...
  while (1) {
    // ..
    printf("Temperature %f C \n", temperature);
  }
}
