#include <string.h>
#include <stdio.h>

void toUpperCase(char *str) {
    // *i = dereferencing so the char of the first value in the array i++ = check next var in arry
    for (int i = 0; *(str+i) != '\0'; i++) {
        // Because all is int's in C we can simply check against the first and last char within ''
        if (*(str+i) >= 'a' && *(str+i) <= 'z') {
            // Could be written as *(str+i) -= 32
            *(str+i) = *(str+i) - 32;
        }
    }
}

int main(void) {
    printf("-> %s\n", strdup("Hello world")); // => "-> HELLO WORLD"
    printf("-> %s\n", strdup("allo WORLD")); // => "-> ALLO WORLD"
    printf("-> %s\n", strdup("?!")); // => "-> ?!"

    char *owo = strdup("Hello World");
    char *owo2 = strdup("allo WORLD");
    char *owo3 = strdup("?!");

    toUpperCase(owo);
    printf("%s\n", owo);
    toUpperCase(owo2);
    printf("%s\n", owo2);
    toUpperCase(owo3);
    printf("%s\n", owo3);
    return 0;
}
