# c start

Make a function `void toUpperCase(char *str);` that takes a string and changes the lowercase alphabetical characters into uppercase

## rules
 - dont google exactly how to do this
 - dont use any standard library functions

## hint
 - use an ascii table: http://www.asciitable.com/
 - strings end with a null character

## example inputs
```C
#include <string.h>
#include <stdio.h>

int main(void) {
    printf("-> %s\n", strdup("Hello world")); // => "-> HELLO WORLD"
    printf("-> %s\n", strdup("allo WORLD")); // => "-> ALLO WORLD"
    printf("-> %s\n", strdup("?!")); // => "-> ?!"
    return 0;
}
```