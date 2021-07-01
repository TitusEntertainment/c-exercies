#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void checkDifferentMemory(char *str1, char *str2) {
    printf("'%s' == '%s'\n", str1, str2);
    str1[0] = '*';
    printf("'%s' != '%s'\n", str1, str2);
}

char *titus_strdup(char *str) {

    // If null, return null
    if (str == NULL) {
        return NULL;
    }

    // Check lenght of string so that we know how much memory to allocate
    int count = 1;

    for (int i = 0; *(str+i) != '\0'; i++) {
        count++;
    }

    // First allocate the memory
    char *returnStr = malloc(count);

    if (!returnStr)
        return 0;

    // Then we set it to the data that we want
    for (int i = 0; *(str+i) != '\0'; i++) {
        returnStr[i] = str[i];
    }

    returnStr[count - 1] = 0;

    return returnStr;
}

int main(void) {
    printf("-> %s\n", titus_strdup("Hello world")); // => "-> Hello world"
    printf("-> %s\n", titus_strdup("allo WORLD")); // => "-> allo WORLD"
    printf("-> %s\n", titus_strdup("?!")); // => "-> ?!"
    printf("-> %s\n", titus_strdup(0)); // => "-> (null)"

    char *str1 = strdup("Hello world!");
    char *str2 = titus_strdup(str1);
    checkDifferentMemory(str1, str2);
    return 0;
}