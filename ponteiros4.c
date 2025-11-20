#include<stdio.h>

int main()
{
  float m[3][3];
  float *p;
  int i,j;
  p=&m[0][0];
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("Endereco de m[%d][%d]: %p\n",i,j,p + (i*3 + j));
    }
  }
  return 0;
}
