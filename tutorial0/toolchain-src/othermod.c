#include "othermod.h"


void more_printing(FILE *file)
{
    fprintf(file, "Hi there\n");
}


static void special_func(FILE *file)
{
    fprintf(file, "You found me!\n");
}
