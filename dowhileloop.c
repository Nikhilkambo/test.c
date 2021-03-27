#include <stdio.h>
int main(){
    int age,index=0;
    printf("enter the number \n");
    scanf("%d",&age);
    printf("you have ented the %d\n",age);
    do
    {
        printf("%d\n",index+1);
        index =index +1;
    } while (age>index);
    
}