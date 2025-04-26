# C language

::: info TODO
1. Falar da importância do C para sistemas embarcados
1. Problemas da linguagem C em qualidade de código
:::

## C code

::: info TODO
1. cppcheck
1. double instead of float
:::

## Head File

This set of rules checks for best practices in structuring C code within `.c` and `.h` files, inspired by the guidelines of MISRA C. The rules emphasize: "Precautions shall be taken to prevent the contents of a header file from being included more than once" and "Separation of Interface and Implementation." Two specific rules have been established to ensure that every header file includes an include guard and that no code is declared in header files, such as function definitions and variable declarations.

Common violations include students forgetting to implement the include guard correctly in their header files or declaring variables and defining functions within header files.

### No include guard in head files

- **Explanation:** No or wrong include guard in head files. 
- **Implication:** To avoid future compilation error.
- **Commum cases:** No include guard in head files, or wrong implementation.
- **External references:** MISRA C RULE xxx

Example of wrong implementation of `pins.h` with wrong include guard:

<<< @/catalog/c-snippets/include-guard-1.h{c :line-numbers=0}

::: warning
:::

> References:
>
> MISRA C 

### C code in head file 

- **Explanation:** Having porper code in head file.
- **Implication:** Future compilation error, bad software decoupling.
- **Commum cases:** Variable declaration in head file or function implementation.
- **External references:** MISRA C RULE xxx

Example of wrong implementation of `pins.h`, the variable declaration and function function implemenentation should go to a `pins.c` file:

<<< @/catalog/c-snippets/c-in-head-file.c{c :line-numbers=0}

::: warning
:::

