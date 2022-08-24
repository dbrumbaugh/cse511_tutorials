#include <stdlib.h>

#include "outputmod.h"
#include "othermod.h"

int main(int argc, char **argv) {
    print_message(stdout);
    more_printing(stderr);

    fprintf(stdout, "%d\n", A_CONSTANT);
    exit(EXIT_SUCCESS);
}

