#include<stdio.h>
int main(){
int num , i ;
  long long factorial = 1;
printf("enter a number: ");
scanf("%d",&num);
if(num<1){
printf("factorial not defined.\n");
}
else{
 for( i=1;i<=num;i++)
factorial = factorial * i 
  }
  printf("factorial of %d is lld\n",num , factorial);
return 0;
}
