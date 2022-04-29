#include <stdio.h>
#include <string.h> 

/* calculates the length of a given 
   string.The strlen() function is defined  
   in string.h header file. It doesn’t count 
   null character ‘\0’. 
*/


int main ()
{
	char str1[100],str2[100];
	int x;

	    printf ("Entre com a primera palavra >> ");
	    scanf ("%s", str1);
	    printf ("Entre com a segunda palavra >> ");
	    scanf ("%s", str2);
	    strcat (str1,str2);
	    printf ("\n%s",str1);
        x = strlen (str1); 
        printf ("\n\nquantidade de carateres: %d\n",x);
	
	return(0);

}
