#include<stdio.h> 
int main()
{ 
 int arr[30], num, i, loc; 
 printf("\nEnter no of elements :"); 
 scanf("%d", &num); 
 
 printf("\nEnter %d elements :", num); 
 for (i = 0; i < num; i++) 
 { 
 scanf("%d", &arr[i]); 
 } 

 printf("\n Location of the element to be deleted :"); 
 scanf("%d", &loc); 

 while (loc < num) 
 { 
 arr[loc - 1] = arr[loc];
 } 
 num--;
 printf("\nAfter deletion, array elements: "); 
 for (i = 0; i < num; i++) 
 { 
 printf("\n %d", arr[i]); 
 } 
 return 0; 
} 
