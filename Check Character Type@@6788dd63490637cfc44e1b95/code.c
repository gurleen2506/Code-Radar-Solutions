#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a=='a'|| a=='e'||a=='i'||a=='o'||a=='u'){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
    else if(is digit(a)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
}