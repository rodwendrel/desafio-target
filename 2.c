/*
2) Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula ou minúscula, 
além de informar a quantidade de vezes em que ela ocorre. 
*/
#include <stdio.h>

int main() {
  char n[10];
  int qtd = 0;
  gets(n);

  for(int i = 0; i < 9; i++) {
    if(n[i] == 'a' || n[i] == 'A') {
      qtd = qtd + 1;
    }
  }

  if(qtd > 0) {
    printf("A letra 'a' existe na string '%s' e ocorre %d vezes", n, qtd);
  } else {
    printf("A letra 'a' nao existe na string '%s'", n);
  }
  return 0;
}

