#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str) {
    if (str == NULL) {
        return NULL;
    }

    char *duplicate = malloc(strlen(str) + 1);
    if (duplicate == NULL) {
        return NULL;  // Insufficient memory
    }

    strcpy(duplicate, str);
    return duplicate;
}

int main() {
    char str[] = "Hello, World!";
    char *duplicate = _strdup(str);

    if (duplicate == NULL) {
        printf("Insufficient memory\n");
    } else {
        printf("Original: %s\n", str);
        printf("Duplicate: %s\n", duplicate);
        free(duplicate);
    }

    return 0;
}
