#include <stdlib.h>
#include "../sha512.h"

typedef uint8_t u8;

#define ARRAY(name, size) \
    u8 name[size]; \
    for(size_t i = 0; i < size; i++) name[i] = 123;

int main(void) {
    ARRAY(in, 16);
    ARRAY(hash, 64);
    sha512(in, 16, hash);
    return 0;
}
