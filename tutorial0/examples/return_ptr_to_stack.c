#include <stdio.h>

int *function1() {
    int x = 8;
    return &x;
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
