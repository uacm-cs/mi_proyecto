#include <stdio.h>
void intercambia(int a,int b);
void intercambiaRef(int* a,int* b);
int main()
{
   int a=10, b=20;
   intercambia(a,b);
   printf("Por valor A=%d B=%d\n",a,b);
   intercambiaRef(&a,&b);
   printf("Por referencia A=%d B=%d\n",a,b);
   getchar();
   return 0;
}


void intercambia(int a, int b)
{
  int temp= a;
  a=b;
  b=temp;
}
void intercambiaRef(int* a, int* b)
{
  int temp= *a;
  *a=*b;
  *b=temp;
 }
