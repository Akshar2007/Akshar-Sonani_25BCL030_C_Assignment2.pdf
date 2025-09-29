#include <stdio.h>
int main() {
    int i, x, sum = 0;
    float mean;
    printf("Enter 10 values:\n");
    for(i = 1; i <= 10; i++) {
        scanf("%d", &x);
        sum += x;
    }
    mean = sum / 10.0;
    printf("Sum = %d\nMean = %.2f\n", sum, mean);
    return 0;
}
