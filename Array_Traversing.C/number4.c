#include <stdio.h>
int search(int arr[], int n, int key) 
{ 
 int i; 
 for (i = 0; i < n; i++) 
 if (arr[i] == key) 
 return i; 
 return -1; 
} 
int main() 
{ 
 int arr[] = { 5, 6, 7, 8, 9, 10 }; 
 int n = sizeof(arr) / sizeof(arr[0]); 
 int key = 10; 
 int pos = (arr, n, key); 
 if (pos == -1) 
 printf("Element not found"); 
 else 
 printf("Element Found at Position: %d", pos + 1); 
 return 0; 
} 
