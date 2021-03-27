#include <stdio.h>
int main (){
    int age;
    printf("enter your age\n");
    scanf("%d", &age);
    printf("you have entered the age %d\n",age);
    if (age>18)
    {
        printf("you have vote\n");
    }
    else if (age>10)
    {
        printf("you have note for vote\n");
    }
    else if (age<10)
    {
        printf("you have child\n");
    }
    
    
    
return 0;
}