#include <stdio.h>
#define MAXLINE 10

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

int main() {

  // line length
  int len;
  // hold longest line length
  int max;
  // current line
  char line[MAXLINE];
  // hold longest line save
  char longest[MAXLINE];

  max = 0;
  while ((len = getLine(line, MAXLINE)) > 0)
    if (len > max){
      max = len;
      copy(longest, line);
    }

  if (max > 0)
    printf("%d:%s", max, longest);

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
  if(c != EOF){
    while((c=getchar()) != EOF && c != '\n')
      i++;
  }
  s[i] = '\0';

  return i;
}

void copy(char to[], char from[]){

  for (int i = 0; from[i] != '\0'; i++){
    to[i] = from[i];
  }
}
