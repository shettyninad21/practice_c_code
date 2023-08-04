#include <stdio.h>
#include <stdlib.h>



void bubble_sort(int arr[], int n) {
  int i, j;
  for (i = 0; i < n ; i++) {
    for (j = 0; j < n - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
   printf("\nthe sorted array is\n");
     for(i=0;i<n;i++){
        printf("%d\t ",arr[i]);
     }
}

int main()
{
    int a[15],n,i;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("enter the elements in the  array\n");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);}

      printf("\nThe entered elements are:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

     bubble_sort(a,n);

     return 0;


}
