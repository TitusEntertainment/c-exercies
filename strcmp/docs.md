# strcmp remake

Remake strcmp from the string.h

The function should compare the two strings. and return the difference of the characters that are different from each other.
Check the input examples for output results

prototype: `int titus_strcmp(const char *s1, const char *s2);`

## rules
 - you dont have to bother with pointer protection. both strings cannot be null
 - cannot use any functions from libraries.
 - You can make extra functions for yourself if you want to. for example a `titus_strlen()` would be useful

## hint
 - `man strcmp` for full details of strcmp

## example inputs
```cpp
#include <stdio.h>

void run_test(const char *s1, const char *s2) {
    printf("'%s' == '%s'\n", s1, s2);
    printf(" => %i\n-----\n", titus_strcmp(s1, s2));
}

int main(void) {
    // basic tests
    run_test("a", "a"); // => 0
    run_test("aa", "ab"); // => -1
    run_test("aa", "ac"); // => -2
    run_test("ac", "aa"); // => 2
    run_test("acaaa", "aaaaa"); // => 2
    run_test("Hello world", "hello world"); // => -32

    // different lengths
    run_test("Good", "Goodbye"); // => -98
    run_test("Goodbye", "Good"); // => 98

    // final test
    run_test("Final test :)", "Final test :)"); // => 0
    return 0;
}

```