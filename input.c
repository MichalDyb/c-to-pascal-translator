#include <stdio.h>
#include <stdlib.h>
#define f "abc" 
const int a = 5;
int main()
{
int i = 10;
while (i >= 1)
{
    printf("Liczba i wynosi: %d\n", i);
    i--;
    if(i > 5)
    {
        printf("Liczba i jest wieksza od 5.\n");
    }
    else
    {
        printf("Liczba i jest mniejsza od 5.\nO ile chcesz zwiekszyc liczbe i?:  ");
        scanf("%d", &i);
        if(i <= -1)
        {
            printf("I nie może być mniejsze od zera.\n");
            for(i=5; i>=1;i--)
                printf("Program zostanie wylaczony %d\n", i);
            return 0;
        }
    }    
}
}

