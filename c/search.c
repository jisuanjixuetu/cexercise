#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int number;
    scanf("%d",&number);
    char(*names)[100];
    names = (char(*)[100]) malloc(sizeof(char[100])*number);
    for (int i = 0; i < number; i++) {
        scanf("%s",names[i]);
    }
    char name[100];
    scanf("%s",name);
    int flag = 0;
    for (int i = 0; i < number; i++) {
        if(strcmp(names[i],name)==0){
            printf("%d\n",i+1);
            flag = 1;
        }
    }
    if(flag==0){
        printf("-1\n");
    }
    return 0;
}