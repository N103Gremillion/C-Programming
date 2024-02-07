#include <stdio.h>
#include <string.h>

#define OUT 0
#define IN 1
#define TRUE 0
#define FALSE 1

// Helper methods
void printHistogram(int array[], int size, int max);
void resetArray(int arra[], int size);
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
        printf("\n \n \n \n");
        
        // int max = getMaxWordLength(array, arraySize);
        int max = getMaxWordLength(array, arraySize);
        printHistogram(array, arraySize, max);        
        resetArray(array, arraySize);
        wtotal = 0;

      }
      else{
        if (state == OUT){
          ++wtotal; 
        }
        state = IN; 
        start = FALSE;
        wlength ++;

      }
    }
    else if (c == '\t' || c == ' '){    
      if (wlength != 0){
        array[wtotal -1] = wlength;
      }
      state = OUT;
      wlength = 0;

    }

    else{  
      if (wlength != 0){
        array[wtotal -1] = wlength;
      }
      int max = getMaxWordLength(array, arraySize);
      printHistogram(array, 20, max);
      resetArray(array, arraySize);
 
      state = OUT;
      wtotal = 0;
      putchar(c);
      // printHistogram(array, arraySize, max);
    }
  }
}
void printHistogram(int array[], int arraySize, int maxWordLength){

  for (int i = 0; i < arraySize; i ++){
    printf("%d, ", array[i]);
  }
  printf("\n");
  
  int currentRow = 1;
  
  while (currentRow <= maxWordLength){
    for(int i = 0; i < arraySize; i++){
      putchar(' ');
      if (array[i] >= currentRow){
        putchar('|');
      }
      else{
        putchar(' ');
      }
    }
    putchar('\n');
    currentRow++;
  }
}

int getMaxWordLength(int array[], int arraySize){

  int max = 0;

  for (int i = 0; i < arraySize; i++){ 
    if (array[i] > max){
      max = array[i];
    }
  }
  printf("The current max is %d. \n", max);

  return max;
}

void resetArray(int array[], int size){
  for (int i = 0; i < size; i++){
    array[i] = 0;
  }
}

