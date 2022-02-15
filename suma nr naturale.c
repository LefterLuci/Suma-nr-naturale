#include <stdio.h>

int main()
{
    int x,suma;
    
    printf("Aflati suma numerelor naturale pana la va rugam introduceti o valoare\n");
    scanf("%d", &x);
    
    suma = (x*(x+1))/2;
    printf("raspunsul este: %d", suma);

    return 0;
}