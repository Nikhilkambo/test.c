#include <stdio.h>
int main (){
    int age,index=0;
    printf("enter the number\n");
    scanf("%d",&age);
    printf("you have enterd the number %d\n",age);
    while (age>index)
    {
        printf("%d\n", index++);
    }index=index+1;
    
    return 0;

}