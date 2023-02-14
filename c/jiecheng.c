#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    long long sum = 1;
    for(long long i = 1;i<=n;i++){
        sum*=i;
    }
    printf("%lld\n",sum);
    return 0;
}