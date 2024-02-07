#include <stdio.h>

#define arraySize 10

int main(){
  
  void resetArray(int array[], int size);
  void printHistogram(int array[], int size);

  // variables
  int c;
  int array[arraySize];
  resetArray(array, arraySize);

  while ((c = getchar()) != EOF) {
    
    if (c == 'a' || c == 'A'){
      array[0]++;
    }
    else if (c == 'b' || c == 'B'){
      array[1]++;
    }
    else if (c == 'c' || c == 'C'){
      array[2]++;
    }
    else if (c == 'd' || c == 'D'){
      array[3]++;
    }
    else if (c == 'e' || c == 'E'){
      array[4]++;
    }
    else if (c == 'f' || c == 'F'){
      array[5]++;
    }
    else if (c == 'g' || c == 'G'){
      array[6]++;
    }
    else if (c == 'h' || c == 'H'){
      array[7]++;
    }
    else if (c == 'i' || c == 'I'){
      array[8]++;
    }
    else if (c == 'j' || c == 'J'){
      array[9]++;
    }
    else if (c == '\n'){
      putchar('\n');
      printHistogram(array, arraySize);
      resetArray(array, arraySize);
    }
  }
 


}

void resetArray(int array[], int size){

  for (int i = 0; i < size; i++){
    array[i] = 0;
  }

}

void printHistogram(int array[], int size){
  
  for (int i = 0; i < size; i++){
    for (int j = 0; j < array[i]; j++){
      putchar('-');
    }
    putchar('\n');
    
  }
  printf("\n");


}
