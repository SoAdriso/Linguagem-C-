#include <stdio.h>

int main () {
  char nome[50];
  
  ptintf("Nome: ");
  scanf("%[^\n]s", &nome);
  
  printf("\n");
  printf("Oká %s!", nome);
  
  return(0);
}
