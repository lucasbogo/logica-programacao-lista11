#include <stdio.h>
#include <string.h>


int main() 
{

    char str[1000], ch;
    int count = 0;

        printf("Insira uma palavra >> ");
        fgets(str, sizeof(str), stdin);

        printf("\nInsira um caractere para reber a frequencia da mesma dentro da palavra >> ");
        scanf("%c", &ch);

        for (int i = 0; str[i] != '\0'; ++i) 
        {
            if (ch == str[i])
                ++count;
        }   

        printf("\nFrequecia de %c = %d", ch, count);
        
    return 0;
}