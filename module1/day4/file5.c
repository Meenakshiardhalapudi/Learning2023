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
    int i,evenindexsum=0,oddindexsum=0,diff;
    for(i=0;i<n;i++){
        if(i%2==0){
            evenindexsum+= arr[i];
        }
        else{
            oddindexsum+= arr[i];
             }

    }
    if(evenindexsum>oddindexsum){
        diff=evenindexsum-oddindexsum;
    }
    else{
        diff=oddindexsum-evenindexsum;
    }
    return diff;
}