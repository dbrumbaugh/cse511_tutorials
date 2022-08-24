#include <stdio.h>

int main(int argc, char **argv) {
    long int x = 123456000008L;
    char *ptr = (char *) &x; // cast is technically unnecessary

    size_t len = sizeof(x);
    //size_t len = 100;

    for (size_t i=0; i<len; i++) {
        fprintf(stdout, "%hhx\n", *(ptr + i));
    }

}
