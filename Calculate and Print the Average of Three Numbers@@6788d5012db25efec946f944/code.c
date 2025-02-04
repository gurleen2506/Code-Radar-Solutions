#include <stdio.h>
int main() {
    int a,b,c,d;
    scanf("%d %d %d %d", &a,&b,&c,&d);
    d=a+b+c/2;
    printf("Average: %.2f", d);
    
        return 0;
}