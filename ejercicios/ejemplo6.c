#include <stdio.h>
#include <stdlib.h>

int* capturar(int n);
void imprimir(int* arr, int n);

int main ()
{
  int i,n;
  int *pNum;
  printf("Cantidad de números por introducir: ");
  scanf("%d",&i);
  pNum = capturar(i);
  imprimir(pNum, i);
  free(pNum);
  return 0;
}


int* capturar(int total){
int n;
int* pNum = (int*) malloc (sizeof(int)*total);
  if (pNum==NULL){
      printf ("Error no se pudo reservar la memoria\n");
      return NULL;
  }
  for (n=0;n<total;n++)
  {
  printf("Número %d: ",n);
  scanf("%d",pNum+n);
  }
  return pNum;
}

void imprimir(int* arr, int total){
int n;
  printf("Números capturados: ");
  for (n=0;n<total;n++){
  printf ("%d \n",*(arr+n));
  }
}

