#include<stdio.h>
#include<stdlib.h>
int pt(int n) {
    if (n == 0) return 0;
    return n % 10 + pt(n/10);
}
int n;
int main() {
    scanf("%d", &n);
    if (n < 0) printf("Input khong hop le");
    else printf("%d", pt(n));
}