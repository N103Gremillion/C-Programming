#include <stdio.h>
#include <string.h>

#define MAXLINE 1000
#define VALIDLENGTH 80

int getLine(char line[], int maxline);
void addValidLine(char validLine[], char validLines[][MAXLINE], int unfilledIndex);
void printValidLines(char validLines[][MAXLINE], int validLinesIndex);

int main() {

  // line length
  int len;
  // hold longest line length
  int validLinesIndex;
  // current line
  char line[MAXLINE];
  // hold longest line save
  char longest[MAXLINE];

  // create an array to hold the strings 
  char validLines[10][MAXLINE];

  validLinesIndex = 0;

  while ((len = getLine(line, MAXLINE)) > 0){
    if (len >= VALIDLENGTH && validLinesIndex < 10){
      
      addValidLine(line, validLines, validLinesIndex);
      validLinesIndex++;
    }
  }

  if (validLinesIndex > 0)
    printValidLines(validLines, validLinesIndex);
  return 0;
}


int getLine(char s[], int lim){
  
  int c, i;

  for (i=0; i < lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
    s[i] = c;
  if (c == '\n'){
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

void addValidLine(char validLine[], char validLines[][MAXLINE], int unfilledIndex){
  strncpy(validLines[unfilledIndex], validLine, MAXLINE -1);
  validLines[unfilledIndex][MAXLINE -1] = '\0';
}

void printValidLines(char validLines[][MAXLINE], int validLinesIndex){

  for (int i = 0; i < validLinesIndex; i++){
    printf("\n %s", validLines[i]);
  }

}
