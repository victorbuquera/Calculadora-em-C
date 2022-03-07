#include <stdio.h>
#include "funcoes.h"

int main(void) {
  int num1,num2, soma, subtracao,multiplicacao, divisao, menu,resultado;
  float d1,d2;
  imprimeMenu();
  scanf("%d", &menu);

  if(menu == 1)
  {
     somando(num1,num2);
  }else if(menu == 2)
  {
     subtraindo(num1, num2);
  }else if(menu == 3)
  {
    multiplicando(num1, num2);
  }else if(menu == 4)
  {
    dividindo(d1, d2);
  }
  return 0;
}