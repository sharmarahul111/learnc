// Concatenate two strings (strcat)
#include<stdio.h>
int main(){
  char a[50], b[50];
  int i, len = 0;
   printf("Enter a string:");
  scanf("%s", a);

 printf("Enter another string:");
  scanf("%s", b);

  for (i=0;a[i]!='\0';i++) {
    len++;
  }
  for (i=0;i<len;i++) {
    a[len+i] = b[i];
  }
  a[len+i] = '\0';
  printf("The concatenated string is: %s\n", a);
  return 0;
}
