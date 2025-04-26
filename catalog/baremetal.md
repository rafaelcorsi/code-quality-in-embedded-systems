# Bare-metal

A key distinction in embedded systems code is its operation across two priority levels. Most of the code runs at a lower priority within the main function, while a higher-priority portion executes in interrupt handler functions. These handlers are triggered asynchronously by hardware, preempting the lower-priority code at any moment.


## Slow Interrupt Service Routines

