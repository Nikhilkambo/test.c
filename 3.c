#include <stdio.h>
int main (){
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
    printf("you have entered the %d\n",age);
    switch (age)
    {
    case 3:
        printf("you have enterd three\n");
        break;
    
    default:
    printf("you have not matech the number\n");
        break;
    }
    return 0;

}