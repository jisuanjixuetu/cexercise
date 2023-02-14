#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct matrix
{
    int row;
    int col;
    int data;
}matrix;
int main(){
    int n,m;
    int count = 0;
    scanf("%d%d",&n,&m);
    int **number;
    number = (int **)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        number[i] = (int *)malloc(m*sizeof(int));
    }
    struct matrix *matris = (struct matrix *)malloc(m*n*sizeof(struct matrix));
    for(int i=0;i<n;i++){
        for (int j = 0; j < m; j++) {
            scanf("%d",&number[i][j]);
            if (number[i][j] != 0) {
                matris[count].row = i;
                matris[count].col = j;
                matris[count].data = number[i][j];
                count++;
            }
        }
    }
    printf("%d %d %d\n",n,m,count);
    for(int i = 0;i<count; i++){
        printf("%d %d %d\n",matris[i].row,matris[i].col,matris[i].data);
    }
    return 0;
}