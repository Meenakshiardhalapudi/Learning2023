#include <stdio.h>
void smallandlarge(int n){
    int small=9;
    int large=0;
    while(n!=0) {
        int digit=n%10;
        if (digit<small)
            small=digit;
        if (digit>large)
            large = digit;
        n/=10;
    }
    printf("%d and %d\n",small,large);
}
int main()
{
    int n,a;
    printf("\nEnter the n value:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("\n Enter numbers:");
        scanf("%d",&a);
        if(a>=0 && a<=9){
            printf("\nnot valid");
              }
        else{
            smallandlarge(a);
        }
    }
    
    return 0;
}