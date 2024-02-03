#include <stdio.h>

#define LOWER 0 /* lower limit*/ 
#define UPPER 300 /* upper limit*/
#define STEP 20 /* step size*/

// farenheit converter using a for statment

int main() {

  int fahr;
  
  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
  
  printf("\n\n\n");

  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
    printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));

}
