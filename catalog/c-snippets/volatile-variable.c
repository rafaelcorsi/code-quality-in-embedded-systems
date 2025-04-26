void main (void) {
  // ...
  volatile int status = 0; // [!code error]

  while (1) {
    // ...
    if (flag == 1) {
      status = !status;
    }
  }
}
