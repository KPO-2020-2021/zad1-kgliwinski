#include <stdio.h>


extern const double PI;   
extern const double E;


int main()
{
  printf("  PI: %f\n",PI);
  printf("   E: %f\n",E);
  return 0;
}

//po dodaniu extern przy stalych w modul.c program kompiluje sie prawidlowo w obydwoch jezykach