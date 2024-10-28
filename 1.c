/*
1) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre
será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...),
escreva um programa na linguagem que desejar onde,  informado um número,
ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.
*/

#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  if(fib(n)) {
    printf("%d pertence a sequencia", n);
  } else {
    printf("%d nao pertence a sequencia", n);
  }

  return 0;
}

int fib(int n)
{
  int a = 0, b = 1, c;

  if (n <= 1)
    return 1;

  while (b < n)
  {
    c = a + b;
    a = b;
    b = c;
  }

  return(b == n);
}