#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
int n;
int main() {
    scanf("%d", &n);
    for (int i = n; i >= 1; i--) printf("%d ", fibonacci(i));
}