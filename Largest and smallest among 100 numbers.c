#include <stdio.h>
int main() {
    int i, x, largest, smallest;
    printf("Enter 100 numbers:\n");
    scanf("%d", &x);
    largest = smallest = x;
    for(i = 2; i <= 100; i++) {
        scanf("%d", &x);
        if(x > largest) largest = x;
        if(x < smallest) smallest = x;
    }
    printf("Largest = %d\nSmallest = %d\n", largest, smallest);
    return 0;
}
