#include<stdio.h>
//declaration /protoype
void printGoodBye();
int main () {
    printHello(); //function call
printGoodBye();
return 0;
} 
//function definition+
void printHello() {
    printf("Hello\n");
   
}
void printGoodBye(){
    printf("GoodBye\n");
}