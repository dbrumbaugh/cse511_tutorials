#include <stdio.h>

int main(int argc, char **argv) {
    double pi = 3.141592;
    int *ptr = (int *) &pi;

    fprintf(stdout, "%.4f\t%d\n", pi, *ptr);

    int x = 5;
    long int *ptr_l = (long int *) &x;

    fprintf(stdout, "%x\t%lx\n", x, *ptr_l);
}
