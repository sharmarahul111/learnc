// String palindrome
#include<stdio.h>
int main(){
  char a[50], b[50];
  int i, len = 0, flag=1;
  printf("Enter a string:");
  scanf("%s", a);

  for (i=0;a[i]!='\0';i++) {
    len++;
  }
  for (i=0;i<len;i++) {
    b[len-i-1] = a[i];
  }
  b[len] = '\0';
  for (i=0;i<len;i++) {
    if (a[i]!=b[i]) {
      flag = 0;
    }
  }

  if (flag) {
    printf("%s is palindrome\n", a);
  }else {
    printf("%s is not palindrome\n", a);
  }
  return 0;
}
