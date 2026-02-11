#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define TB_STUDENT "student.dat"
typedef struct {
  int id;
  int roll;
  char name[50];
  char mobile[20];
  char email[50];
} Student;

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
