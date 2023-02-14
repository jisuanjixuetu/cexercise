#include <stdio.h>
int main(){
    int sum = 0;
    int num;
    scanf("%d",&num);
    while(num!=0){
        sum += num;
        scanf("%d",&num);
    }
printf("%d\n",sum);
}