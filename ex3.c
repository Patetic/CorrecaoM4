#include <string.h>
#include <stdio.h>
#include <ctype.h>
#define LIN 2
#define COL 35
int
main ()
{
  char nomes[LIN][COL];
  int i;
  printf("Introduza dois nomes ate %d carateres:\n", COL);
  for (i = 0; i < LIN; i++)
    fgets(nomes[i], 35, stdin);
  for (i = 0; i < COL; i++)	//strlen(nomes[0])
    nomes[0][i] = toupper(nomes[0][i]);
  printf ("O primeiro nome em maiusculas:%s", nomes[0]);
  for (i = 0; i < COL; i++)
    nomes[1][i] = tolower(nomes[1][i]);
  printf ("\nO tamanho do primeiro nome e:%d", strlen (nomes[0]));
  printf ("\nO tamanho do segundo nome e:%d", strlen (nomes[1]));
  return 0;
}

//incompleto
