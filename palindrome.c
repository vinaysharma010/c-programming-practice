#include<stdio.h>
int main(){
  int n , original , remainder , reverse = 0  ;
printf("enter the number : ");
scanf("%d",&n);
original = n ;
while(n!=0){
remainder = n % 10 ;
reverse = reverse * 10 + remainder ;
n = n/10 ;
}
  
if (original == reverse ){
printf("palindrome number ");
}
else{
printf("not palindrome number ");
}
return 0 ;
}

