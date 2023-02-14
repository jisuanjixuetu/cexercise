#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    double sum = 0;
    int count = 0;
    int i = 1;
    while(i<=n){
        count++;
        double ans = 0;
        ans = 1.0/i;
        if(ans<=0.000001){
            break;
        }
        if(count%2==0){
            sum-=ans;
        }
        else {
            sum += ans;
        }
        i = 2*count+1;
    }
    printf("%.8lf\n",4*sum);
    return 0;
}