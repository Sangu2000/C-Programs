#include<stdio.h>
int main(){
    FILE*ptr;
//     ptr = fopen("fgetcputc.txt","w");
// fputc('c',ptr);
     char ch = fgetc(ptr);
   printf("value if ch is %c",ch);
    
    

 ptr = fopen("fgetcputc.txt","r");
    
    
     printf("value if ch is %c",ch);
    fputc('c',ptr);
     ch = fgetc(ptr);
     printf("value if ch is %c",ch);
    fclose(ptr); 
    return 0;
}
