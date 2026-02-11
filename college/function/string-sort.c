// String sort using functiom
#include<stdio.h>
#include<string.h>
void input(char x[][20], int n);
void display(char x[][20], int n);
void sort(char x[][20], int n);
int i,j;


int main(){
  int x[50][20];
  int n;
  printf("Enter size of strings:");
  scanf("%d", &n);
  input(x,n);
  sort(x,n);
  printf("The sorted array:");
  display(x,n);
  return 0;
}
void sort(char x[][20], int n){
    char temp[20];
    for(i=0;i<n-1;i++){
        for(j=i;j<n;j++){
            if(strcmp(x[i], x[j])>0){
                strcpy(temp, x[i]);
                strcpy(x[i], x[j]);
                strcpy(x[j], temp);
            }
        }
    }
}
void input(char x[][20], int n){
  printf("Enter strings elements:");
  for (i=0;i<n;i++) {
    scanf("%s", x[i]);
  }
}
void display(char x[][20], int n){
  for (i=0;i<n;i++) {
    printf("%s\t", x[i]);
  }
  printf("\n");
}

