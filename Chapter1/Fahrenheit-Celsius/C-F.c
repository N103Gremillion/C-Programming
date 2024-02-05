#include <stdio.h>

// Celsius to Farenhiet practice using floats and a while loop

int main() {

  float min, max, step;
  float celsius, farenhiet;
  
  min = 0;
  max = 200;
  step = 20;

  celsius = min;

  while(celsius <= max){
    
    if (celsius == min){
      printf("=======Celsius to Farenhiet========\n");
    }

    farenhiet = (9.0/5.0) * celsius + 32;
    printf("\t%3.0f\t\t%6.1f\n", celsius, farenhiet);
    celsius = celsius + step;

  }


}
