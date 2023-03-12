#include<stdio.h>
int main(){
int n;
printf("enter number:");
scanf("%d", &n);
int sum=0;
for(int i=0;i<=n;i=i+1){
    sum=sum+i;
    }
printf("sum is %d \n",sum);

for(int i=n; i>=1;i=i-1){
    printf("%d \n", i);
}
return 0;
}