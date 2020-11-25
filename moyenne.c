#include <stdio.h>

int main()
{
  //float tableau[5];
  //méthode 1
  //float tableau[0]=3.14;
  //float tableau[1]=6.28;
  //float tableau[2]=9.36;
  //float tableau[3]=10.01;

  float tableau[5] = {1,2.2,4,12,7};

  float moyenne;

  for (int i = 0; i < 5; i++)
  {
    moyenne += tableau[i];
  }
  moyenne /= 5;
  printf("%f", moyenne);
  return 0;
}
