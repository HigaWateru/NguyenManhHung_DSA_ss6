#include<stdio.h>
#include<stdlib.h>

void binary (int n){
    if (n == 0) return;
    binary(n/2);
    printf("%d", n%2);
}
int n;
int main(){
    scanf("%d", &n);
    binary(n);
}