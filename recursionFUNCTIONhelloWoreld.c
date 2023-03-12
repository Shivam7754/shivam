#include<stdio.h>
void pirntHW(int count);
int main(){
    printHW(10);
    return 0;
}
//recursion function
void printHW(int count){
    if(count==0){
        return;
    }
    printf("Hello World\n");
    printHW(count-1);
}