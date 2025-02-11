#include <stdio.h>

{
    int a;
    scanf("%d", &a);
    if(checkMSB(a)){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}