#include <stdio.h>

/* print Fahrenheit-Celsius table using while loop to iterate using floats*/

int main(){
  
  float fahr, celsius;
  float lower, upper, step;
  
  // lower limit
  lower = 0;
  // upper limit
  upper = 300;
  // increment size
  step = 20;
  
  // start at lower limit
  fahr = lower;
  
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr - 32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }

}
