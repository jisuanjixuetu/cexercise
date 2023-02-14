#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int num[10000];
    int count = 0;
    if(b%a==0){
        printf("%d/%d\n",1,b/a);
    }
    else {
        while(b%a!=0){
        int c = b/a+1;
        a = a*c-b;
        b = b*c;
        num[count++]=c;
        }
        num[count++]=b/a;
        for (int i = 0; i < count-1; i++) {
        printf("%d/%d+",1,num[i]);
    }
    printf("%d/%d\n",1,num[count-1]);
    }
    return 0;
}