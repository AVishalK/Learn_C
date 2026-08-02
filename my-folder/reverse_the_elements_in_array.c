#include<stdio.h>
int main(void)
{
  int i,j,temp, arr[10]={1,4,5,6,3,6,2,6,5,9};
for (i=0, j=9; i<9 ; i++ ,j--)
{
    temp = arr[i];
    arr[i] = arr [j];
    arr [j] = temp;
}
printf (" after reverting, that array is :\n");
for (i=0 ;i<10 ;i++)
{
    printf("%d ", arr[i]);
}
   printf("\n");
}
