#include<stdio.h>
int main()
{
  int v[5],*p,r
  p=v
  for(r=0;r<5;r++)
  {
    printf("Digite: ")
    scanf("%d",p+r)
  }
  for(r=0;r<5;r++)
  {
    if(*(p+r)%2==0)
    {
      printf("%p ",p+r)
    }
  }
}
