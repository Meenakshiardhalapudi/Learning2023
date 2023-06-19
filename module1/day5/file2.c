#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,num=0;
    printf("enter string:");
    scanf("%[^\n]s",str);
    for(i=0;i<strlen(str);i++){
        num=num*10+(str[i]-48);

    }
    printf("the number is:%d",num);
    return 0;
}