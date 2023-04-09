#include "main.h"

/**
 * Convert a binary string to an unsigned integer.
 * @param b Binary string to be converted.
 * @return The unsigned integer converted from the binary string,
 *         or 0 if the input string is null or contains invalid characters.
 */
unsigned int binaryToUnsignedInt(const char* b) 
{
    if (!b) 
    {
        return 0;
    }

    unsigned int result = 0;
    int len = 0;
    while (b[len] != '\0') 
    {
        len++;
    }

    int baseTwo = 1;
    for (int i = len - 1; i >= 0; i--)
    {
        if (b[i] != '0' && b[i] != '1') 
	{
            return 0;
        }

        if (b[i] == '1')
       	{
            result += baseTwo;
        }

        baseTwo *= 2;
    }

    return result;
}

