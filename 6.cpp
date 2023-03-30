#include <stdio.h>
#include <math.h>

int isArmstrong(int num);

int main() {
    int lower, upper;

    printf("Enter lower and upper limits: ");
    scanf("%d %d", &lower, &upper);

    printf("Armstrong numbers between %d and %d are:\n", lower, upper);

    for (int i = lower; i <= upper; i++) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}

int isArmstrong(int num) {
    int sum = 0;
    int temp = num;
    int n = floor(log10(num)) + 1;

    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, n);
        temp /= 10;
    }

    return (sum == num);
}

