#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a=='a'|| a=='e'||a=='i'||a=='o'||a=='u'||a=='A'|| a=='E'||a=='O'||a=='I'||a=='U'){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
    else if(isdigit(a)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
}