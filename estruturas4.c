#include <stdio.h>
#include <math.h>

void bhaskara (float x, float y)
{
  int a;
  int b;
  int c;
  int d;
  int r;
  printf("Digite os valores de A, B e C \n");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  r = (b * b);
  d = r - 4 * (a * c);
  x = ((-b) + sqrt(d)) / (2 * a);
  y = ((-b) - sqrt(d)) / (2 * a);
  printf(" Os valor de x é: %f", x);
  printf(" Os valor de y é: %f", y);

}
int main(void){
  float x1, y2;
  bhaskara(x1,y2);

    return(0);
}
