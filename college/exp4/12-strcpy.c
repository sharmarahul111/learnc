// Copy a string (strcpy)
#include<stdio.h>
int main(){
  char a[50], b[50];
  int i, len = 0;
  int flag = 1;
   printf("Enter a string:");
  scanf("%s", a);

 printf("Enter another string:");
  scanf("%s", b);

  for (i=0;a[i]!='\0';i++) {
    len++;
  }
  for (i=0;i<len;i++) {
    if (a[i]!=b[i]) {
      flag=0;
    }
  }
  if (b[i]!='\0') {
    flag=0;
  }

  if (flag) {
    printf("\nBoth strings are equal\n");
  } else {
    printf("\nBoth strings aren't equal\n");
  }
  return 0;
}
