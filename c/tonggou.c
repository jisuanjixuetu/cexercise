#include<stdio.h>
#include<math.h>
int main(){
    int n,m;
    int a,b;
    scanf("%d%d",&n,&m);
    if(n>=m){
        a = n;
        b = m;
    }
    else {
        a = m;
        b = n;
    }
    for (int i = b;i<=a; i++){
        int s = i*i;
        int count = 0;
        int c = i;
        while(c!=0){
            c= c/10;
            count++;
    }
    int ans = s - i;
    if(ans % (int)pow(10,count)==0){
        printf("%d ",i);
    }
}
    printf("\n");
}