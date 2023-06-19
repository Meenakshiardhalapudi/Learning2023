#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[300];
    int i;
    printf("enter string:");
    scanf("%[^\n]s",str);

    for(i=0;i<strlen(str);i++){
        if(isupper(str[i])){
            str[i]=tolower(str[i]);
        }
         else if(islower(str[i])){
            str[i]=toupper(str[i]);
        }
    }
    printf("the output string is:%s",str);
    
    return 0;
}