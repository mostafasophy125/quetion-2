/*
 Write a C program to input a number and check whether it is even or odd using if-else.
 */

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x;
    puts("Enter your num:");
    scanf("%d",&x);
    if(x%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }
}
