#include "../headers/input-utils.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int GetInt(char *prompt, char *errorMessage)
{
    int value;

    while (true)
    {
        printf("%s", prompt);

        // FIX: Check for 1 (Success), not false (0)
        if (scanf("%d", &value) == true)
        {
            // Success: We got the integer. Break the loop.
            break;
        }
        else
        {
            // Failure: We got garbage text. Handle the error.
            fprintf(stderr, "%s", errorMessage);

            // Clear the invalid input buffer
            int c;
            while ((c = getchar()) != '\n' && c != EOF)
                ;

            // Restart the loop
            continue;
        }
    }

    return value;
}