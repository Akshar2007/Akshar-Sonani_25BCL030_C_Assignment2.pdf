#include <stdio.h>

int main() {
    int i; 
    printf("The first 10 even numbers are:\n");

    for(i = 1; i <= 10; i++) {
        printf("%d ", i * 2);  
    }

    return 0;
}
