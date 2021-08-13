#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc == 2) 
        // if you run the program using ./arg it is not equal to 2 but if you run it with ./arg mike or more it is
    {
        
        string r = argv[1];
        int y = strlen(argv[1]);
        //int l = atoi(r);
        for (int b = 0; b < y; b++)
        {
            if (isdigit(r[b]) == 0) //(isdigit (r[b]) == 0)
            {
                return 1;
            }
        }
        int l = atoi(r);
        /*else
        {
            return 0;
        }*/
        string s = get_string("Plaintext: ");   //asks for plaintext
        int n = strlen(s);   //length of string
        int q;
        char f;
        printf("ciphertext: ");
        for (int e = 0; e < n; e++)   //for loop to take each item in array one after the other
        {
            if (isupper(s[e]))  //if its upper
            {
                f = (((s[e] - 65) + l) % 26) + 65;  //encipher upper
            }
            else if (islower(s[e]))   //if it is lower
            {
                f = (((s[e] - 97) + l) % 26) + 97;  //encipher lower
            }
            else    //if it does not meet both
            {
                f = s[e] + 0;   //dont encipher
            }
            printf("%c", f);    //print all values out
        }
        //printf("\n");
        //printf("ciphertext: %c ", encipher(n, s));
    }
    else //if argc is not 2 and key is not digit then return 1 and print instruction
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    printf("\n");
//}
}
char encipher(int n, char arr[])
{
    char e;
    string h;
    for (int k = 0; k < n; k++)  //for loop to check chars in array one after the other
    {
        e = arr[k] + n;
    }
    return e;
}
