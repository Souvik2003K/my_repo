#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    printf("enter value of i : ");
    scanf("%d",&i);
    if (i % 2 == 0)
    {
        printf("%d is even",i);
    }
    else{
        printf("%d is odd",i);
    }
    
}
