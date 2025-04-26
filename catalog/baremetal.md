# Bare-metal

A key distinction in embedded systems code is its operation across two priority levels. Most of the code runs at a lower priority within the main function, while a higher-priority portion executes in interrupt handler functions. These handlers are triggered asynchronously by hardware, preempting the lower-priority code at any moment.


## Slow IRS

Interrupt Service Routines are functions that are invoked by hardware and can interrupt any other low-level code. It is well-known that we should spend as little time as possible inside an ISR , thus a common mistake is to write slow ISR functions. 

- **Implication:** Can block other IRS to execute.
- **Commum cases:** Peripheral pulling, access external peripherals, printfs, sprintfs, while, for, sleeps.
- **External references:** 

Example of a slow IRS.

<<< @/catalog/baremetal-snippets/slow-irs.c{c :line-numbers=0}

::: danger
:::

> References:
>
> \cite{koopman2010better}

## No reentrant function in ISR

Because ISRs can be interrupted by other ISRs, any function they call must be reentrant. In practice, standard I/O functions and display routines often are not designed with reentrance in mind and depend on shared resources (such as global buffers). Calling them from an ISR risks corrupting these shared data structures.

- **Implication:** Can corrupt memory
- **Commum cases:** Use of stdlib functions in IRS, update external peripherals
- **External references:** 

Example of use of no reentrant function in IRS.

<<< @/catalog/baremetal-snippets/no-reentrant-functions-in-isr.c{c :line-numbers=0}

::: danger
:::

> References:
>
> \cite{koopman2010better}


## Compiler Optimizations and Volatile

Compilers apply different optimizations according to the build type. A common compiler optimization is changing how a variable is accessed in memory. This ranges from caching its results in a register to even completely removing a variable. This specific type of optimization can lead to a program having different behavior in **Debug** and **Release** mode. 

Global variables are specially susceptible to these optimizations. Since they are read and written in different functions, it is harder for the compiler to correctly guess when it should apply these optimizations. So all global variable that are acessed inside an ISR shall be declared as `volatile`.

- **Implication:** Code run time functionality may depend on compiler otimization.
- **Commum cases:** Update a global variable inside an ISR without declarion it as `volatile`.
- **External references:** 

<<< @/catalog/baremetal-snippets/no-volatile-variable-isr.c{c :line-numbers=0}

::: danger
:::

> References:
>
> \cite{koopman2010better}

