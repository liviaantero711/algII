#include<stdio.h>

int main()
{
  float v[10];
  float *p;
  int i;
  p=v;
  for(i=0;i<10;i++)
  {
    printf("Endereco de v[%d]: %p\n",i,p+i);
  }
  return 0;
}
