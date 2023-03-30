#include <stdio.h>

int isStrong(int num);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isStrong(num)) {
        printf("%d is a strong number.\n", num);
    } else {
        printf("%d is not a strong number.\n", num);
    }
    return 0;
}

int isStrong(int num) {
    int originalNum = num, rem, sum = 0, fact;
    while (num > 0) {
        rem = num % 10;
        fact = 1;
        for (int i = 1; i <= rem; i++) {
            fact *= i;
        }
        sum += fact;
        num /= 10;
    }
    return (sum == originalNum);
}

