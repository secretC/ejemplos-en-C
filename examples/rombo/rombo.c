/*
 * Author: Juan Espejo
 * Repository: https://github.com/JuanEspejo/Programacion/tree/master/Estructuras-de-control-iterativas
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,x,y,h;
    printf("Diagonal = ");
    scanf("%d",&n);
    h = (n-1)/2;
    for (y=-h; y <= h ; y++)
    {
        for (x=h; x >= -h; x--)
            if ( (abs(x) + abs(y)) <= h ) printf("*"); else printf(" ");
        printf("\n");
    }
    return 0;
}