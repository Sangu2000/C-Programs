#include<stdio.h>
#include<string.h>
int main(){
    char str[6];
    printf("entre the string of lenth 5 \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%c",&str[i]);
        fflush(stdin);
    }
    str[6]='\0';
    printf("compairing this string Sangamesh gives %d",strcmp("Sangamesh",str));
    return 0;
}