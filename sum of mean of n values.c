#include <stdio.h>
int main() {
    int i, n, x, sum = 0;
    float mean;
    printf("Enter number of values: ");
    scanf("%d", &n);
    printf("Enter %d values:\n", n);
    for(i = 1; i <= n; i++) {
        scanf("%d", &x);
        sum += x;
    }
    mean = sum / (float)n;
    printf("Sum = %d\nMean = %.2f\n", sum, mean);
    return 0;
}
