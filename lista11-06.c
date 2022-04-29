#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char *argv[])
{
   
    char str1[50],str2[50];
    int j,ta,p=0;
    printf ("insira uma palavra para obter o inverso da mesma \n");
    gets(str1);
    ta=tamanho(str1);
    j=ta;

        while (j>=0 && p<=ta)
        {

            str2[p]=str1[j];
            printf("%c" ,str2[p]);
            j--;
            p++;
        }


  
    return 0;
}