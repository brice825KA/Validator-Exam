
#include "validator.h"

int validator(char *str)
{
    int sum = 0;
    int digits = 0;
    
    for (int i = 0; str[i]; i += 1) {
        if (str[i] < '0' || str[i] > '9')
            return 84;
        if ((i) % 2 == 0)
            digits = ((int)str[i] - '0') * 1;
        else if ((i) % 2 != 0)
            digits = ((int)str[i] - '0') * 2;
        if (digits > 9)
            digits -= 9;
        sum += digits;
    }
    if (sum % 10 == 0)
        printf("Valid\n");
    else
        printf("invalid\n");
    return 0;
}