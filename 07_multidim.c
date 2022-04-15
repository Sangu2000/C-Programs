#include<stdio.h>
int main(){
int marks[2][4];
marks[0][0] = 98;
marks[0][1] = 83;
marks[0][2] = 88;
marks[1][0] = 68;
marks[1][1] = 53;
marks[1][2] = 39;
for (int i = 0; i < 2; i++)

{
    for (int j = 0; j < 3; j++)
    {
        printf("%d ",marks[i][j]);
    }
    printf("\n");
}

    return 0;
}