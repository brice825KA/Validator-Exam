#include "validator.h"

int main(int argc, char **argv)
{
    if (argc != 2)
        return 84;
    if (argv[1] == NULL || argv[1][0] == '\0')
        return 84;
    validator(argv[1]);
    return 0;    
}
