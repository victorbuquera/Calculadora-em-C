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
}
int subtraindo(int n1,int n2){
  int resultado;
    printf("Digite o primeiro numero da subtracao\n");
        scanf("%d", &n1);
    printf("Digite o segundo numero da subtracao\n");
        scanf("%d", &n2);
  resultado = n1 - n2;
        printf("o resultado da subtracao entre: %d e %d e: %d\n", n1, n2,resultado);
}
int multiplicando(int n1, int n2){
  int resultado;
  printf("Digite o primeiro numero da multiplicacao\n");
      scanf("%d", &n1);
  printf("Digite o segundo numero da multiplicacao\n");
      scanf("%d", &n2);
  resultado = n1 * n2;
    printf("o resultado da multiplicacao entre %d e %d e: %d \n", n1, n2, resultado);
  }
float dividindo(float n1, float n2){
  float resultado;
  int resto;
  printf("Digite o primeiro numero da divisao\n");
    scanf("%f", &n1);
  printf("Digite o segundo numero da divisao\n");
    scanf("%f",&n2);
  resultado = n1 / n2;
  printf("o resultado da divisao entre %.2f e %.1f e: %.1f", n1,n2,resultado);
}