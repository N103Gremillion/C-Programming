#include <stdio.h>

/* copy input to output */

int main(){

  int c;
 
  while ((c = getchar()) != EOF) {
    
    int check = (c != EOF);
    printf("%d", check);
    putchar(c);

  }

}
