#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if( a==2 && a%1==0 && a%a==0 && a%2!=0 && a%3!=0 && ){
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}