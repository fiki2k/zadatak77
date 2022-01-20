// Program ce izracunat oplosje kvadra.

#include<stdio.h>
#include <stdlib.h>
#define PI 3.14
//Funkcija za izracunavanje oplosja kvadra
int oplosje(int a, int b,int c)
{
	float oplosje;
	oplosje=2*(a*b+a*c+b*c);
    return oplosje;
}
  

int main()
{
    int a,b,c;
    printf("Unesi duljine stranice  \n");
    scanf("%d %d %d",&a,&b,&c);
    // Pozivanje funkcije.
    float O= oplosje(a,b,c);
    printf("Oplosje kvadra je: %.2f",O);
    return 0;
}
