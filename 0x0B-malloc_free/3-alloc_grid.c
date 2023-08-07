c
#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height) {
    if (width <= 0 || height <= 0) return NULL;

    int **grid = malloc(height * sizeof(int *));
    if (grid == NULL) return NULL;

    for (int i = 0; i < height; i++) {
        grid[i] = malloc(width * sizeof(int));
        if (grid[i] == NULL) {
            for (int j = 0; j < i; j++) {
                free(grid[j]);
            }
            free(grid);
            return NULL;
        }
        for (int j = 0; j < width; j++) {
            grid[i][j] = 0;
        }
    }

    return grid;
}

int main() {
    int width = 5;
    int height = 3;

    int **grid = alloc_grid(width, height);

    if (grid != NULL) {
        printf("Successfully allocated the grid.\n");

        // Print the grid
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                printf("%d ", grid[i][j]);
            }
            printf("\n");
        }

        // Free the allocated memory
        for (int i = 0; i < height; i++) {
            free(grid[i]);
        }
        free(grid);
    } else {
        printf("Failed to allocate the grid.\n");
    }

    return 0;
}
