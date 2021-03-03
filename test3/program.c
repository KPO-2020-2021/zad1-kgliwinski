#include <stdio.h>


extern const double PI;   //w c++ zamiast extern nalezy uzyc static
extern const double E;


int main()
{
  printf("  PI: %f\n",PI);
  printf("   E: %f\n",E);
  return 0;
}

//w c program kompiluje sie poprawnie oraz wyswietla poprawne wartosci stalych
//w c++ program informuje o referencji do niezdefiniowanych stalych PI oraz E. zamiast extern nalezy uzyc static