# Bytecode-VM (clox)

A dynamically typed, stack-based virtual machine and bytecode compiler written in pure, unapologetic C. 

This project is a work-in-progress implementation of the `clox` interpreter from Bob Nystrom's excellent book, [*Crafting Interpreters*](https://craftinginterpreters.com/). It is currently being built from the ground up to explore language architecture, low-level memory management, and compiler design.

## 🚀 Current State

The VM is currently complete up to **Chapter 18 (Types of Values)**. 

At this stage, the interpreter is essentially a highly over-engineered, mathematically sound calculator. It successfully compiles source code into bytecode on the fly and executes it in a tight, stack-based runtime loop. 

Strings, variables, and the inevitable nightmares of garbage collection are actively under construction.

## ✨ Core Features Implemented

*   **Hand-Rolled Lexical Scanner:** Tokenizes source code on demand without relying on heavy external tools like Lex or Yacc.
*   **Single-Pass Pratt Parser:** Uses top-down operator precedence parsing to emit bytecode in a single pass, completely bypassing the need for a memory-heavy Abstract Syntax Tree (AST).
*   **Stack-Based Virtual Machine:** Executes bytecode instructions (`OP_ADD`, `OP_MULTIPLY`, `OP_NEGATE`, etc.) using a dedicated evaluation stack.
*   **Dynamic Typing (Tagged Unions):** Safely handles multiple internal C types using a custom `Value` struct. Currently supports:
    *   Double-precision floats (`VAL_NUMBER`)
    *   Booleans (`VAL_BOOL`)
    *   Null values (`VAL_NIL`)
*   **Interactive REPL:** A functioning Read-Eval-Print Loop for immediate execution and testing.

## 💻 What It Can Do Right Now

Drop into the REPL and feed it complex arithmetic, logical operations, and equality checks. The VM handles operator precedence and type-checking automatically.

A few sample Clox codes from my end:

> !(5 - 4 > 9)
true

> -((10 * 2) / 4)
-5

> 3 + true
[line 1] Error: Operands must be numbers.
