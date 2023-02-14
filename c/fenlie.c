#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a = 2;
    int b = 3;
    int c = 1;
    int d = 2;
    double sum = 0.0;
    sum = 2/1+3.0/2;
    if(n == 1){
        printf("2.000000\n");
    }
    else if(n == 2){
        printf("3.500000\n");
    }
    else{
        for (int i = 3; i <= n; i++) {
            int temp = b;
            b = a+b;
            a = temp;
            int now = d;
            d = c+d;
            c = now;
            sum +=1.0*b/d;
        }
        printf("%.6lf\n",sum);
    }
    return 0;
}