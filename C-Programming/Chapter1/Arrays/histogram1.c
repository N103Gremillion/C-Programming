#include <stdio.h>

#define IN 0
#define OUT 1 
#define YES 0
#define NO 1


int main() {
  
  

  int c, nword, state, first;

  state = OUT;
  first = YES;

  while((c = getchar()) != EOF){

    if (c != '\n' && c != ' ' && c != '\t'){
      if (state == OUT && first == YES){
        putchar('|');
        putchar('\n');
        state = IN;
        first = NO;
      }
      else if (state == OUT && first == NO){
        putchar('\n');
        putchar('|');
        state = IN;
      }
      else if (state == IN){
        putchar('|');
      }
    }
    else if (c == '\n'){
      putchar('\n');
      state = OUT;
    }
    else{
      state = OUT;
    }
  }
}

