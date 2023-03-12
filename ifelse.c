#include<stdio.h>

int main()
{
    int age;
    printf("enter age :");
    scanf("%d",& age);
    
    if(age>18) {
        printf("adult \n");
        printf("they can vote \n");
        printf("they can drive");
        }
        else if(age >13 && age <18) {
            printf("teenageer \n");
        }
        else{
            printf("not adult");
        }
        return 0;
}