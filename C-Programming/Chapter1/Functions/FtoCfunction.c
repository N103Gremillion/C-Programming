#include <stdio.h>


float FtoC(float fhar);

int main(){

  float fahr, cels;

  fahr = 32.0;
  cels = FtoC(fahr);

  printf("%.1f", cels);

  return 0;
}


float FtoC(float fahr){

  float result;
  result = (fahr - 32) / 1.8;

  return result;
}
