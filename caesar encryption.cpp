#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * Caesar.c
 * A program that encrypts messages using Caesar’s cipher. Your program must
 * accept a single command-line argument: a non-negative integer. Let’s call it
 * k for the sake of discussion. If your program is executed without any
 * command-line arguments or with more than one command-line argument, your
 * program should yell at the user and return a value of 1.
 * 
 * */

 int main(int argc, string argv[])
 {
    // check for 2 arguments only
    if (argc != 2)
    {
        printf("Nope\n");
        return 1;
    }
    
    // once I check for correct argv put key into an int k
    int k = atoi(argv[1]);

    // check if the integer is non-negative
    if (k < 0)
    {
        printf("Nope\n");
        return 1;
    }
    else
    {
        // prompt user for a code to encrypt
        string code = get_string("Code: ");
        
        for (int i = 0, n = strlen(code); i < n; i++)
            {
                //check if the letter is uppercase or lowercase then convert
                if islower(code[i])
                // Standardize the ASCII value of the char to 26 then add the key. Then convert back into ASCII so that the code can wrap around properly
                    printf("%c", (((code[i] + k) - 97) % 26) + 97);
                else if isupper(code[i])
                    printf("%c", (((code[i] + k) - 65) % 26) + 65);
                //if neither then just print whatever it is
                else
                    printf("%c", code[i]);
            }
            printf("\n");
            return 0;
    }
 }
