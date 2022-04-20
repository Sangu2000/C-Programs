#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakeWaterGun(char you, char comp){
    if (you == comp)
    {
        return 0;
    }
    else if ((you == 's' && comp =='w')||(you== 'w' && comp == 'g' )||(you =='g' && comp =='s'))
    {
        return 1;
    }else{
        return -1;
    }
    
    
};
int main(){
    char you, comp;
    srand(time(0));
    int number = rand()%100 + 1;
    if (number<33)
    {
        comp = 's';
    }else if (number<66)
    {
        comp = 'w';
    }else{
        comp = 'g';
    }
    
    
    printf(" 's'for snake, 'w' for water, 'g' for gun \n");
    scanf("c",&you);
    int result = snakeWaterGun(you, comp);
    if (result == 0){
printf("the game is drawn \n");
    }else if (result == 1)
    {
         printf("you win! \n");
    }else{printf("you lost! \n");}
    
    printf("you choose %c and comp choose %c \n",you,comp);
    return 0;
}