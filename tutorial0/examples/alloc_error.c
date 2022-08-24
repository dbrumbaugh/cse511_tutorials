#include <stdio.h>
#include <stdlib.h>

int allocate_array(int ***object, size_t len) {
    int **array = malloc(len * sizeof(size_t));

    if (array == NULL) {
        goto free_array;
    }

    size_t idx = 0;
    for (idx=0; idx<len; idx++) {
        array[idx] = malloc(sizeof(int));
        if (array[idx] == NULL) {
            goto erase_array;
        }

        *(array[idx]) = idx;
    }

    *object = array;
    return 1;

erase_array:
    for (size_t i=0; i<idx-1; i++) {
        free(array[i]);
    }
free_array:
    free(array);

    return 0;
}


void free_array(int **array, size_t len) {
    for (size_t i=0; i<len; i++) {
        free(array[i]);
    }
    free(array);
}


int main(int argc, char **argv) {
    int **my_array;

    size_t len = 25;

    allocate_array(&my_array, len);

    for (size_t i=0; i<len; i++) {
        fprintf(stdout, "%d\n", *(my_array[i]));
    }

    // cleanup
    free_array(my_array, len);
}
