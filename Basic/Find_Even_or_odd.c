#include <stdio.h>
main(){                                     // the line has been problem
    int n;
    printf("Enter an Interger:\n");
    scanf("%d", &n);
    if (n%2 == 0)
    {
        printf("Even");
    }
    else{
        printf("Odd");
    }
    printf("This is work");
    return 0;
}