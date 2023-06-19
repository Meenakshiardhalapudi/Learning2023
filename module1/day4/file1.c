#include<stdio.h>
#include<string.h>
void fun(int n,int arr[]);
int main(){
    int n,arr[50],i;
    printf("enter n value:");
    scanf("%d",&n);
     printf("enter elements in array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    fun(n,arr);
    return 0;
}
void fun(int n,int arr[]){
    int i,sum=0;
    float avg;
    for(i=0;i<n;i++){
        sum+=arr[i];

    }
    avg=(float)sum/n;
    printf("the sum is:%d\n", sum);
    printf("the average is:%.2f\n",avg);
}