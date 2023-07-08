#include "main.h"

/**
 * mghatfham ta waza
 * a lmentor
 * a rcheg
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int dec_val = 0;
    int i;

    if (b == NULL)
        return 0;

    for (i = 0; b[i] != '\0'; i++)
    {
        if (b[i] != '0' && b[i] != '1')
            return 0;
        
        dec_val = (dec_val << 1) + (b[i] - '0');
    }

    return dec_val;
}

