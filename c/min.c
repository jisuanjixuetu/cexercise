#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int s;
    int l;
    if(a>=b){
        s = a;
        l = b;
    }
    else {
        s = b;
        l = a;
    }
    int temp;
    while(l!=0){
        temp = l;
        l = s%l;
        s = temp;
    }
    printf("%d %d\n",s,a*b/s);
    return 0;
}