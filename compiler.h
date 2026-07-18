#ifndef CLOX_COMPILER_H
#define CLOX_COMPILER_H

#include "vm.h"

bool compile(const char *source, Chunk* chunk);

void compile(const char *source);

#endif // CLOX_COMPILER_H
