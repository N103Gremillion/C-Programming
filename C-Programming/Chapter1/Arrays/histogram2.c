#include <stdio.h>
#include <string.h>

#define OUT 0
#define IN 1
#define TRUE 0
#define FALSE 1

// Helper methods
void printHistogram(int array[], int size, int max);
int getMaxWordLength(int array[], int size);


int main() {

  int c, wtotal, wlength, state, start;
  
  state = OUT;
  start = TRUE;
  wtotal = wlength = 0;

  int maxWords = 20;
  int arraySize = 20;
  int array[arraySize];
  memset(array, 0, arraySize);

  while ((c = getchar()) != EOF){
    if (c != ' ' && c != '\n' && c != '\t'){
      if (wtotal >= maxWords){
        putchar('\n');
        int max = getMaxWordLength(array, arraySize);
        printHistogram(array, arraySize, max);
        wtotal = 0;
      }
      else{
        if (state == OUT){
          wtotal++; 
        }
        state = IN; 
        start = FALSE;
        wlength ++;
      }
    }
    else if (c == '\t' && c == ' '){
      state = OUT;
      if (wlength != 0){
        array[wtotal -1] = wlength;
      }
      wlength = 0;
    }
    else{   
      state = OUT;
      wtotal = 0;
      putchar(c);
      int max = getMaxWordLength(array, arraySize);
      printHistogram(array, arraySize, max);
    }
  }
}
void printHistogram(int array[], int arraySize, int maxWordLength){
  
  int currentRow = 1;
  
  while (currentRow <= maxWordLength){
    for(int i = 0; i < arraySize; i++){
      if (array[i] >= currentRow){
        putchar('|');
      }
      else{
        putchar(' ');
      }
    }
  }
}

int getMaxWordLength(int array[], int arraySize){

  int max = 0;

  for (int i = 0; i < arraySize; i++){
    printf("%d", array[i]);
    if (array[i] > max){
      max = array[i];
    }
  }

  return max;
}

