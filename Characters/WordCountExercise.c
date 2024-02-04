#include <stdio.h>

#define IN 0
#define OUT 1
#define START 0
#define NOTSTART 1

int main(){

  int c, state, location;

  location = START;

  while ((c = getchar()) != EOF){

    if (c == ' ' || c == '\t'){
      if (location != START && state == IN){
        putchar('\n');
      }
      state = OUT;
    }
    else if (c != '\n'){
      location = NOTSTART;
      state = IN;
      putchar(c); 
    }
    else{
      putchar('\n');
      state = OUT;
      location = START;
    }
  }
}
