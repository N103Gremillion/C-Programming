#include <stdio.h>

#define MAXSTRING 1000

void getLine(char array[], int MAX);

// keeps track of current line
char line[MAXSTRING];

int main(){

  clearArray(line, MAXSTRING){
    
  }
  
  while (getLine(line, MAXSTRING) != EOF){
  }

}



getLine(char line[], MAXSTRING){

  char c;
  int index;

  index = 0;
  c = getchar();
  
  while(c != EOF && c != '\n' && c < MAXSTRING - 1){

    line[index] = char;

    index++;

  }
  line[index + 1] = '/0';
}

clearArray(char array[], int length){

}
