#include <stdio.h>

int dev(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("mutqagreq tvery ");
    scanf("%d %d", &num1, &num2);

    int result = dev(num1, num2);

    printf(" %d-i ev %d-i amenamec yndhanur bajanarary %d-n e \n", num1, num2, result);

    return 0;
}
