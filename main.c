#include "validator.h"

int main(int argc, char **argv)
{
    if (argc != 2)
        return 84;
    if (argv[1] == NULL)
        return 84;
    validator(argv[1]);
    return 0;    
}