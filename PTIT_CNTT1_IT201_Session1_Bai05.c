#include<stdio.h>
#include<stdlib.h>

int maxArr(int a[], int n) {
    if (n == 1) return a[0];
    int max = maxArr(a, n-1);
    return (a[n-1]>max) ? a[n-1] : max;
}
int minArr (int a[], int n) {
    if (n == 1) return a[0];
    int min = minArr(a, n-1);
    return (a[n-1]<min) ? a[n-1] : min;
}
int a[10000], n;
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("%d %d", minArr(a, n), maxArr(a, n));
}