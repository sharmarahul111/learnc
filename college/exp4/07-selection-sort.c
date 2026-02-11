// Selection Sort (ascending order)
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
    for (j=i+1;j<n;j++) {
      if(a[j]<a[i]){
        temp = a[j];
        a[j] = a[i];
        a[i] = temp;
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
