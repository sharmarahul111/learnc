// Bubble sort (ascending order)
#include <stdio.h>
int main(){
  int a[50];
  int i,j,n,temp;
  printf("Enter size of array:");
  scanf("%d", &n);

  printf("\nEnter %d elements:\n");
  for (i=0;i<n;i++) {
    printf("a[%d]: ", i);
    scanf("%d", &a[i]);
  }
  
  for (i=0;i<n-1;i++) {
    for (j=0;j<n-i-1;j++) {
      if(a[j+1]<a[j]){
        temp = a[j+1];
        a[j+1] = a[j];
        a[j] = temp;
      }
    }
  }

  printf("\nSorted Array:\n");
  for (i=0;i<n;i++) {
    printf("%d\t", a[i]);
  }
  printf("\n");
  return 0;
}
