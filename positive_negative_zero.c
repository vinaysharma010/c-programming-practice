#include<stdio.h>
int main(){
  int number ;
printf("Enter a number : ");
scanf("%d ", &number);
if (number > 0 ){
printf("%d is a positive number.\n",number );
  }
  else if(number < 0 ) {
printf("%d is the negative number.\n",number );
  }
  else{
  printf("%d is zero",number);
  }
return 0;
}
