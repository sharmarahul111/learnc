#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "schema.h"
#define TB_STUDENT "student.dat"

int main(){
  FILE *fp;
  int choice;
  char input[100];

  fp = fopen(TB_STUDENT, "wb+");
  while(choice){
    printf(">");
    scanf("%d", &choice);
  }
  fclose(fp);
  printf("Bye!\n");
  return 0;
}
