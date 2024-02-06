#include <stdio.h>

#define OUT 0
#define IN 1
#define TRUE 0
#define FALSE 1


int main() {

  int c, wtotal, wlength, state, start;
  
  state = OUT;
  start = TRUE;
  wtotal = wlength = 0;
  int array[100] = {0};

  while ((c = getchar()) != EOF){
    if (c != ' ' && c != '\n' && c != '\t'){
      putchar(1);
      if (state == OUT){
        wtotal++;
        
      }
      state = IN; 
      start = FALSE;
    }
    else if (c == '\t' && c == ' '){
      state = OUT;
    }
    else{

      for (int i = 0; i < wtotal; i++){
        putchar('|');
      }

      state = OUT;
      wtotal = 0;
      putchar(c);
    }
  }
}
