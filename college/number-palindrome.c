// Check if a number is palindrome
#include <stdio.h>
int main(){
  int num,a,rev=0;
  printf("Enter a number: ");
  scanf("%d", &num);
  a=num;

  while(num!=0){
    rev = rev*10+num%10;
    num/=10;
  }
  printf("\nReverse is: %d\n", rev);
  if(a==rev){
    printf("%d is palindrome", a);
  } else {
    printf("%d isn't palindrome", a);
  }
  printf("\n");
  return 0;
}
