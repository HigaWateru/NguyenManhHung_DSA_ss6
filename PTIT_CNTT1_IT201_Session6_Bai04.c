#include <stdio.h>
#include <string.h>

void towerHN(int n, char a, char b, char c) {
    if (n == 1) printf("Dia %d di chuyen tu %c sang %c\n", n, a, c);
    else {
        towerHN(n-1, a, c, b);
        printf("Dia %d di chuyen tu %c sang %c\n", n, a, c);
        towerHN(n-1, b, a, c);
    }
}
int n;
int main() {
    scanf("%d", &n);
    if (n < 1) printf("Input khong hop le");
    else towerHN(n, 'A', 'B', 'C');
}