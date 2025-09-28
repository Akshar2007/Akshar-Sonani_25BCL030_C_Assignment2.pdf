#include <stdio.h>

int main() {
    int i, num = 1;   

    printf("First 10 odd numbers are:\n");

    for(i = 1; i <= 10; i++) {
        printf("%d ", num);
        num = num + 2;   
    }

    return 0;
}
