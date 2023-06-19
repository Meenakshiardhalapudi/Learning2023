#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[100];
    printf("enter time(H:M:S):");
    scanf("%s",str);
    char *token=strtok(str,":");
    int hours,minutes,seconds,totalseconds;
    hours=strtol(token,NULL,10);
    token=strtok(NULL,":");
    minutes=strtol(token,NULL,10);
    token=strtok(NULL,":");
    seconds=strtol(token,NULL,10);
    totalseconds=hours*3600+minutes*60+seconds;
    printf("Total seconds:%d",totalseconds);
    return 0;
}