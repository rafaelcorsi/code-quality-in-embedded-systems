void btn_callback(uint gpio, uint32_t events) {
  gpio_put(LED, 1);
  sleep_ms(1);  // [!code error]
  printf("Debug gpio irs \n");  // [!code error]
}
