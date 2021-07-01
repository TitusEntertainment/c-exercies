# strdup remake

Remake strdup from the string.h
prototype: `char *titus_strdup(char *str);`
It should copy a string into newly allocated heap memory and return it.

## rules
 - Must be protected against allocation fails
 - You can use only malloc from `<stdlib.h>` inside your function
 - input is garuanteed to be a null terminated string or NULL

## hint
 - strings end with a null character
 - malloc will return NULL (pointer to 0) if it fails to allocate

## example inputs
```Cpp
#include <string.h>
#include <stdio.h>

int main(void) {
    printf("-> %s\n", titus_strdup("Hello world")); // => "-> Hello world"
    printf("-> %s\n", titus_strdup("allo WORLD")); // => "-> allo WORLD"
    printf("-> %s\n", titus_strdup("?!")); // => "-> ?!"
    printf("-> %s\n", titus_strdup(0)); // => "-> (null)"
    return 0;
}
```
