# atoi remake

Remake atoi from stdlib.h

atoi (Ascii To Integer) is a useful function, it simply turns a string into an integer. good luck

prototype: `int titus_atoi(const char *nptr);`

## rules
 - it should return an error value if it overflow or underflows
 - error value must be -1 if its a positive represented string. or 0 if its a negative represented string
 - it must be protected against NULL pointers (return -1)
 - dont look up exact answers of atoi
 - you may use isspace() from `ctyp.h`
 - you may not use any other library functions
 - you can make more sub functions if needed (make them static)

## hint
 - lookup what overflow/underflows are
 - lookup what static functions are
 - man atoi or man strtol
 - summary of man strtol: skip whitespace, optional + or -. then convert until a non-number character
 - take it step by step, plan ahead before you start

## example inputs
```cpp
#include <stdlib.h>
#include <stdio.h>

int main(void) {
    printf("-> %i\n", titus_atoi("1234")); // => "-> 1234"
    printf("-> %i\n", titus_atoi("     1234")); // => "-> 1234"
    printf("-> %i\n", titus_atoi("     -1234")); // => "-> -1234"
    printf("-> %i\n", titus_atoi("aaaaaaa-1234")); // => "-> 0"
    printf("-> %i\n", titus_atoi("   1234   555")); // => "-> 1234"
    printf("-> %i\n", titus_atoi("     -     ")); // => "-> 0"
    printf("-> %i\n", titus_atoi("     - 1    ")); // => "-> 0"
    printf("-> %i\n", titus_atoi("     -1    ")); // => "-> -1"
    printf("-> %i\n", titus_atoi("     -+1    ")); // => "-> 0"
    printf("-> %i\n", titus_atoi("")); // => "-> 0"
    printf("-> %i\n", titus_atoi(NULL)); // => "-> -1"
    printf("-> %i\n", titus_atoi("2147483648")); // => "-> -1"
    printf("-> %i\n", titus_atoi("-2147483649")); // => "-> 0"
    return 0;
}
```