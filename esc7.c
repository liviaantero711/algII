#include<stdio.h>

struct Hora
{
  int h,m,s;
};

int main()
{
  struct Hora v[5];
  int i,pos;
  pos=0;
  for(i=0;i<5;i++)
  {
    printf("Digite hora: ");
    scanf("%d",&v[i].h);
    printf("Digite minuto: ");
    scanf("%d",&v[i].m);
    printf("Digite segundo: ");
    scanf("%d",&v[i].s);
    if(
      v[i].h>v[pos].h ||
      v[i].h==v[pos].h && v[i].m>v[pos].m ||
      v[i].h==v[pos].h && v[i].m==v[pos].m && v[i].s>v[pos].s
    )
    {
      pos=i;
    }
  }
  printf("Maior hora: %02d:%02d:%02d",v[pos].h,v[pos].m,v[pos].s);
  return 0;
}
