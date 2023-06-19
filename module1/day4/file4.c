#include<stdio.h>
#include<string.h>
int fun(int n,int arr[]);
int main(){
    int n,arr[50],i,a;
    printf("enter n value:");
    scanf("%d",&n);
    printf("enter elements in array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    a= fun(n,arr);
    printf("the difference is:%d",a);
}
int fun(int n,int arr[]){
    int i,evensum=0,oddsum=0,diff;
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            evensum+= arr[i];
             }
        else{
            oddsum+= arr[i];
        }

    }
    if(evensum>oddsum){
        diff=evensum-oddsum;
    }
     else{
        diff=oddsum-evensum;
    }
    return diff;
}