#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>

struct matrixStream {
  int y; // For head
  int x; // For row
  int length; // For stream lenght 
  char str[100]; // For stream of characters
};

int main() {
  char symbol = (rand() % (126 - 33 + 1)) + 33;
  char arr[30][30]= {};

  while(1) {
   usleep(50000);
   printf("\33[2J\33[H");
   for(int i = 0; i < 30; i++) { 
     for(int j = 0; j < 30; j++) { 
       arr[i][j] = symbol;
       symbol = (rand() % (126 - 33 + 1) + 33);
       printf("%c ", arr[i][j]);
     }
     printf("\n");
     printf("\n");
   }

   printf("%c \n", symbol);
  }
  
  return 0;
}
