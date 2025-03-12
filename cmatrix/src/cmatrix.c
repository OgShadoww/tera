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
    int k = 0;

    while(1) {
        usleep(70000);
        printf("\33[2J\33[H");
        for(int i = 0; i < 30; i++) {
            for(int j = 0; j < 30; j++) {
                printf("%c ", arr[i][j]);
            }
            printf("\n");
            printf("\n");    
        }
        if(k <= 30) {
            for(int i = 0; i < 30; i++) {
                arr[k][i] = symbol;
                symbol = (rand() % (126 - 33 + 1)) + 33;
            }
            k++;
        }

    }
  
    return 0;
}
