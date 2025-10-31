#include <stdio.h>
void main()
{
  float prom = 0;
  float suma = 0;
  float num = 0;
  int i = 0;
  int N;
  printf("ingresar N");
  scanf("%d", &N);
  while(i < N)
  {
    printf(" ingresar número");
    scanf("%f", &num);
    suma = suma + num;
    i++;
  }
  prom = suma/N;
  printf("promedio es: %f", prom);
}
