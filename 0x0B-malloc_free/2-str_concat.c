#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
char *str_concat(char *s1, char *s2) {
    // Check if either string is null and treat it as an empty string
    if (s1 == NULL) {
        s1 = "";
    }
    if (s2 == NULL) {
        s2 = "";
    }

    // Get the lengths of the strings
    size_t len1 = strlen(s1);
    size_t len2 = strlen(s2);

    // Allocate memory for the concatenated string
    char *concat = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    if (concat == NULL) {
        return NULL; // Return NULL on failure
    }

    // Copy the contents of s1 and s2 into the concatenated string
    strcpy(concat, s1);
    strcat(concat, s2);

    return concat;
}
