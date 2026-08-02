#include<stdio.h>
int main(void)
{
  int num, arr[15],i,j;
  printf("enter the decimal number :\n");
  scanf("%d",&num);
  i=0;
  while (num>0)
{
    arr[i] = num % 2;                     /* store the remainder in array*/
    num = num/2;
    i++;
}
printf ("Binary number is  : ");
printf (j = i-1 ; j>0 ;j--);
{
    printf("%d",arr[j]);
}
printf("/n");
}

