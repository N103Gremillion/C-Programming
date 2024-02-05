#include <stdio.h>

int main(){

  int c, nl, tl, bl;

  nl = 0;
  tl = 0;
  bl = 0;

  while ((c = getchar()) != EOF){
      if (c == '\n'){
        ++nl;
        printf("You have typed %d new lines\n", nl);
      }
      else if (c == '\t'){
        ++tl;
        printf("You have typed %d tabs total\n", tl);
      }
      else if (c == ' '){
        ++bl;
        printf("You have typed %d blanks total\n", bl);
      }
  }
}
