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
    int i,temp;
    for(i=0; i<n/2; i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
        }
    printf("the reverse array:");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}