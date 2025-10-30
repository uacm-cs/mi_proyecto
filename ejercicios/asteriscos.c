#include <stdio.h>
void imprime_simbolo(int , char);
void main()
{
  int N;
  char caracter;
  printf("número de asteriscos deseados:");
  scanf("%d", &N);
  getchar();
  printf("símbolo:");
  scanf("%c", &caracter);
  imprime_simbolo(N, caracter);
  imprime_simbolo(N, caracter);
  imprime_simbolo(N, caracter);
    
}
void imprime_simbolo(int n_ast, char simbolo)
{
    int i=0;
    while(i < n_ast)
    {
      printf("%c", simbolo);
      i = i + 1;
    }
    printf("\n");
}
