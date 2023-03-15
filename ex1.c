#include <stdio.h>
#define MAX 10
void
intro (float n[])
{
  int i;
  printf ("Introduza %d notas de alunos: \n", MAX);
  for (i = 0; i < MAX; i++)
    scanf ("%f", &n[i]);
}

void
mostrar (float n[])
{
  int i;
  printf ("As %d notas introduzidas foram:\n", MAX);
  for (i = 0 < MAX; i++)
    scanf ("%.1f", n[i]);
}

int
main ()
{
  float notas[MAX], melhor;
  melhor = notas[0];
  int i;
  intro (notas);
  mostrar (notas);
  for (i = 0; i < MAX - 1; i++)
    {
      if (melhor < notas[i])
	    melhor = notas[i];
    }
  printf ("\nA melhor nota foi:%.2f", melhor);
  return 0;
}
