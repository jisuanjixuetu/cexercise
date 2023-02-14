#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    long sum = 0;
    for(int i = 0;i<b;i++){
        for (int j = 0; j <=i; j++) {
            sum+=a*pow(10,j);
        }
    }
    printf("%ld\n",sum);
    return 0;
}