#include <stdio.h>
#include <math.h>
#define MAX 9
int main()
{
    int valores[MAX],i;
    float raiz[MAX];
    printf("Escreva %d valores inteiros:\n",MAX);
    for(i=0;i<MAX; i++)
    {
        scanf("%d", &valores[i]);
        raiz[i]=sqrt(valores[i]);
    }
puts("Valores  Raiz Quadrada");
for(i=0;i<MAX;i++)
    printf("\n%4d %10.2f",valores[i],raiz[i]);
return 0;
}
