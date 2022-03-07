#include <stdio.h>
#include "funcoes.h"
void imprimeMenu(){
  printf("Escolha a sua operacao\n");
  printf("Somar: 1\n");
  printf("Subtrair: 2\n");
  printf("Multiplicar: 3\n");
  printf("Dividir: 4\n");
  printf("Escolha uma opcao\n");
}
int somando(int n1,int n2){
  int resultado;
  printf("Digite o primeiro numero da soma\n");
      scanf("%d", &n1);
    printf("Digite o segundo numero da soma\n");
        scanf("%d", &n2);
    resultado = n1 + n2;
    printf("o resultado da soma entre %d e %d: %d\n",n1,n2, resultado);

  return (resultado);
}
int subtraindo(int n1,int n2){
  int resultado;
    printf("Digite o primeiro numero da subtracao\n");
        scanf("%d", &n1);
    printf("Digite o segundo numero da subtracao\n");
        scanf("%d", &n2);
  resultado = n1 - n2;
        printf("o resultado da subtracao entre: %d e %d e: %d\n", n1, n2,resultado);
  return (resultado);
}

int main(void) {
  int num1,num2, soma, subtracao,multiplicacao, divisao, menu,resultado;
  imprimeMenu();
  scanf("%d", &menu);

  if(menu == 1)
  {
     somando(num1,num2);
  }else if(menu == 2)
  {
     subtraindo(num1, num2);
  }else if(menu ==3)
  {
      
  }
  return 0;
}