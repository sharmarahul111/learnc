// Function: read, add, display
#include<stdio.h>
int read();
void display(int);
int sum(int x, int y);
int i;

int main(){
  int x,y;
  x=read();
  y=read();
  display(sum(x,y));
  return 0;
}
int read(){
  int x;
  printf("Enter a number:");
  scanf("%d", &x);
  return x;

}
void display(int x){
  printf("\nThe number is: %d\n",x);
}
int sum(int x, int y){
  return x+y;
}
