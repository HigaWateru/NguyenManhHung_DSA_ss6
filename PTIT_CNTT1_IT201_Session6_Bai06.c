#include <stdio.h>
#include <stdlib.h>

int countStep(int n) {
    if (n == 1|| n == 2) return n;
    return countStep(n-1) + countStep(n-2);
}
int n;
int main() {
    scanf("%d", &n);
    printf("%d", countStep(n));
}