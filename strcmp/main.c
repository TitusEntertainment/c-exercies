#include <stdio.h>

int titus_strlen(char *str) {
    int length = 1;

    for (char i = 0; *(str+i) != '\0'; i++) {
        length++;
    }

    return length;
}

// My sad attempt with some help from Jvs

int titus_strcmp(const char *s1, const char *s2) {
    const int s1Length = titus_strlen(s1);
    const int s2Length = titus_strlen(s2);

    int diff = 0;
    char i = 0;

    for (; *(s1 + i) != '\0'; i++)
    {
        printf("%c and %c with index %i\n", s1[i], s2[i], i);

        // 1
        if (s1[i] != s2[i])
        {
            diff = s1[i] - s2[i];
            break;
        }

    }

    printf("returned %i\n, %i\n, %i\n", diff, s1Length, s2Length);

    return s1[i] - s2[i];
}

// Jvs is smarter than me

int jvs_strcmp(const char *s1, const char *s2) {
    size_t i = 0;
    while (s1[i] != '\0') {
        if (s1[i] != s2[i])
            break;
        i++;
    }
    return s1[i] - s2[i];
}

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