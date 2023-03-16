#include <stdio.h>
#include <string.h>
#define CAR 50
int
main ()
{
  char vetorN[CAR];
  int i;
  printf ("Escreva o seu nome:\n");
  fgets (vetorN, CAR, stdin);
  for (i = 0; i < strlen (vetorN); i += 2)
    printf ("%c ", vetorN[i]);
  return 0;
}
