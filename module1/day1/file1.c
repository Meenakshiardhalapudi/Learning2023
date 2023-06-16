#include<stdio.h>

int biggest(int a,int b);

int main()
{
    int a;
    int b;
    printf("enter a and b values:");
    scanf("%d %d",&a,&b);
    biggest(a,b);
    return 0;
    }

int biggest(int a, int b)
{
    if(a<b)
    {
        printf("b has the biggest value");
    }
    else if(a>b)
    {
         printf("a has the biggest value");

    }
    else
    {
        printf("Both are  equal");
    }
    return 0;
}