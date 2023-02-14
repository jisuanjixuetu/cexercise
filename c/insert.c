#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int number;
    scanf("%d",&number);
    int *numbers;
    numbers = (int*)malloc((1+number)*sizeof(int));
    for(int i = 0; i < number; i++){
        scanf("%d",&numbers[i]);
    }
    int num;
    scanf("%d", &num);
    int j;
    for(j = 0;j<number;j++){
        if(num>numbers[j]){
            continue;
        }
        else {
            break;
        }
    }
    for(int i = number;i>=j+1;i--){
        numbers[i] = numbers[i-1];
    }
    numbers[j] = num;
    for(int i = 0;i<number;i++){
        printf("%d ", numbers[i]);
    }
    printf("%d\n", numbers[number]);
    return 0;
}