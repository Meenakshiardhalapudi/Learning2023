#include<stdio.h>

int grade(int n);

int main()
{
    int n;
    printf("Enter n value:");
    scanf("%d",&n);
    grade(n);

    return 0;
}

int grade(int n)
{
    if(n>90 && n<100 )
    {
        printf("Grade A");

    }
    else if(n>75 && n<89)
    {
        printf("Grade B");
    }
     else if(n>60 && n<74)
    {
        printf("Grade C");
    }
     else if(n>50 && n<59)
    {
        printf("Grade D");
    }
     else if(n>=0 && n<49)
    {
        printf("Grade F");
    }
    

    return 0;
}