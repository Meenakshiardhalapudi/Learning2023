#include <stdio.h>
void right_triangle(int l){
    for(int j=l;j>=1;j--)
    {
        printf("%d",j);
        
    }
    printf("\n");
    
}

void spaces(int i){
    for(int k=1;k<=2*(i-1);k++)
    {
        printf(" ");
    }
    
}

void left_traingle(int n){
    int l=n;
     for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            printf("%d",n-j+1);
        }
        spaces(i);
         right_triangle(l--);
    }
}


int main()
{
    int n;
    printf("Enter n value:");
    scanf("%d",&n);
    left_traingle(n);
    return 0;
}