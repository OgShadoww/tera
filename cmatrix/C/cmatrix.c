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
  matrixStream stream;
  stream.y = 0;
  stream.x = 0;

  while(1) {
   usleep(50000);
   printf("\33[2J\33[H");

   printf("%c \n", symbol);
   symbol = (rand() % (126 - 33 + 1) + 33);
  }
  
  return 0;
}
