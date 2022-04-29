#include <stdio.h>
#include <stdlib.h>
#include <string.h> // biblioteca necessária para trabalhar com string

/* The C library function char *strcat(char *dest, const char *src) 
appends the string pointed to by src to the end of the string pointed 
to by dest. */


int main ()
{
	
    char vetor1[100] = "Lua";
    char vetor2[100] = "Cheia";

        printf ("%s\n",vetor1);
        printf ("%s\n",vetor2);
        strcat (vetor1,vetor2); 
        printf ("%s\n",vetor1);


    system("pause");

return 0;

}