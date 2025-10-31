#include<stdio.h>
int main(){

int n, i, A[10];
printf("Enter the total number of elements of array: ");

scanf("%d", &n);
printf("Enter the element in the array:\n");

for(i=0; i<n; i++){
printf("Element number  [%d] is ", i+1);

scanf("%d", &A[i]);}
printf("Traversing of array is :\n");

for(i=0; i<n; i++){
printf("Element number [%d] is %d\n",i+1, A[i]);

return 0;
}
}
