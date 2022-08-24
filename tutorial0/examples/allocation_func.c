#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int allocate_object(int **object) {
    int *x = malloc(sizeof(int));
    *x = 100;

    if (x == NULL) {
        return 0;
    }

    *object = x;
    return 1;
}

int allocate_array(int ***object, size_t len) {
    int **array = malloc(len * sizeof(size_t));

    size_t idx = 0;
    for (idx=0; idx<len; idx++) {
        array[idx] = malloc(sizeof(int));
        *(array[idx]) = idx;
    }

    *object = array;
    return 1;
}


void free_array(int **array, size_t len) {
    for (size_t i=0; i<len; i++) {
        free(array[i]);
    }
    free(array);
}


int main(int argc, char **argv) {
    int *my_object;
    int **my_array;

    size_t len = 25;

    allocate_object(&my_object);
    allocate_array(&my_array, len);

    fprintf(stdout, "%d\n", *my_object);

    for (size_t i=0; i<len; i++) {
        fprintf(stdout, "%d\n", *(my_array[i]));
    }

    // cleanup
    free(my_object);
    free_array(my_array, len);
}
