#include <stdio.h>
#include <stdlib.h>

int *function1() {
    int *x = malloc(sizeof(int));
    *x = 5;

    return x;
}


int function2() {
    int x = 5;
    int y = 7;
    return x + 7;
}

int main(int argc, char **argv) {
    int *ptr = function1();
    function2();

    fprintf(stdout, "%d\n", *ptr);
}
