#include <stdio.h>


double Dodaj(double Skl1, double Skl2);   //aby program kompilowal sie w c++ nalezy dodac tu argumenty funkcji w jej deklaracji (podobnie jak w pliku modul.c)
                                          //po dodaniu argumentow funkcji program dziala poprawnie

int main( )
{
  double  Skl1 = 2.0,  Skl2 = 2.0;
  double  Wynik = Dodaj(Skl1,Skl2);

  printf("  Wynik dodawania:  %f + %f = %f\n",Skl1,Skl2,Wynik);

  return 0;
}

//w c skompilowany i skonsolidowany program dziala poprawnie

//w c++ natomiast przy kompilacji pliku program.c wypisuje blad o zbyt wielu argumentach funkcji Dodaj(), co jest spowodowane ze przy niezadeklarowanych funkcjach w c 
//przyjmowane jest automatycznie ze sa to wartosci double; w c++ jest to niedopuszczalne