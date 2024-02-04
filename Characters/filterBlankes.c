#include <stdio.h>

int main() {

  int currentCharacter;

  
  while((currentCharacter = getchar()) != EOF){
    if (currentCharacter == '\t'){
      putchar('\\');
      putchar('t');
    }
    else if (currentCharacter == '\b'){
      putchar('\\');
      putchar('b');
    }
    else if (currentCharacter == '\\') {
      putchar('\\');
      putchar('\\');
    }
    else{
      putchar(currentCharacter);
    }
  }
  return 0;
}
