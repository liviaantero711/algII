#include<stdio.h>
int verifica(char *s1,char *s2)
{
  char *p1,*p2
  for(p1=s1;*p1!='\0';p1++)
  {
    p2=s2
    while(*p2!='\0' && *(p1+(p2-s2))==*p2)
    {
      p2++
    }
    if(*p2=='\0')
    {
      return 1
    }
  }
  return 0
}
int main()
{
  char s1[100],s2[100]
  int r
  printf("Digite a primeira string: ")
  scanf("%s",s1)
  printf("Digite a segunda string: ")
  scanf("%s",s2)
  r=verifica(s1,s2)
  if(r==1)
  {
    printf("A segunda ocorre dentro da primeira")
  }
  else
  {
    printf("Nao ocorre")
  }
}
