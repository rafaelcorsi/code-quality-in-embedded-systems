int f_bnt = 0; // [!code error]

void btn_callback(uint gpio, uint32_t events) {
  f_btn = 1;
}

void main (void) {
  // ...
  while (1) {
    // ..
    if (f_btn) {
      printf("Btn pressed \n");
      f_btn = 0;
    }
  }
}
