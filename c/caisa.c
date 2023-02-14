#include <stdio.h>
#include <string.h>
int main(){
    char letters[5];
    int number;
    for(int i = 0;i<5;i++){
        scanf("%c",&letters[i]);
        getchar();
    }
    scanf("%d",&number);
    for (int i = 0; i < 5; i++) {
        if((letters[i] - 'a')>=0)
        {
            letters[i] =(letters[i]-'a'+number)%26+'a';
        }
        else
        {
            letters[i] =(letters[i]-'A'+number)%26+'A';
        }
    }
    for (int i = 0; i < 5; i++) {
        printf("%c",letters[i]);
    }
    printf("\n");
    return 0;
}