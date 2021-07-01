#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <ctype.h>

// Steps in checks and notes

// Check if first char is whitespace if it is check next one and repeat untill first non whitespace value is found

// Get rid of overflow and underflows (return -1 for overflow and 1 for underflow)

// Then check if null or no char's in string i.e. empty string. Then return -1 for null or 0 for empty string



//    int integer_min = INT_MIN;
//    int integer_max = INT_MAX;
//    integer_min--;
//    integer_max++;
//    printf("Min overflow: %i\n Min value %i\n Max overflow: %i\n Max value %i", integer_min, integer_max, INT_MIN, INT_MAX);
//    return integer_min;


static int titus_strlen(const char *str) {
    int counter = 1;

    for (char i = 0; *(str + i) != "\0"; i++) {
        i++;
    }

    return counter;
}

// Return 1 if true or 0 if false

static int isOverflow(const char *str) {}

int titus_atoi(const char *nptr) {

}

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
    printf("-> %i\n", titus_atoi(NULL)); // => "-> 0"
    printf("-> %i\n", titus_atoi("2147483648")); // => "-> -1"
    printf("-> %i\n", titus_atoi("-2147483649")); // => "-> 0"
    return 0;
}