#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_strdup(char *str)
{
    if (str == NULL) {
        return NULL;
    }

    // Get the length of the input string
    size_t len = strlen(str);

    // Allocate memory for the duplicate string
    char *dup = (char *)malloc((len + 1) * sizeof(char));

    if (dup == NULL) {
        return NULL;
    }

    // Copy the input string into the duplicate string
    strcpy(dup, str);

    return dup;
}
