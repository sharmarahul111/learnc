#include<stdio.h>
int main(){
  char str[] = "nepal college of informatiom technology";
  int i, firstChar = 1;
  for (i=0;str[i]!='\0';i++) {
    if (str[i]==' ') {
      str[i] = '\n';
      firstChar = 1;
    } else if (firstChar && str[i] >= 97 && str[i] <= 122) {
      str[i] -= 32;
      firstChar = 0;
    }
  }
  printf("%s\n", str);
}
