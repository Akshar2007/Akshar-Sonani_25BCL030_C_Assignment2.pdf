#include <stdio.h>
int main() {
    int i, x, pos=0, neg=0, zero=0;
    printf("Enter 200 numbers:\n");
    for(i = 1; i <= 200; i++) {
        scanf("%d", &x);
        if(x > 0) pos++;
        else if(x < 0) neg++;
        else zero++;
    }
    printf("Positive = %d\nNegative = %d\nZero = %d\n", pos, neg, zero);
    return 0;
}
