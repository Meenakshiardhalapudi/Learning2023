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
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                 }

        }
    }
    printf("the min element is:%d\n",arr[0]);
    printf("the max element is:%d\n",arr[n-1]);
}