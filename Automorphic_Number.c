#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  int num;
  scanf("%d", &num);
 
  int sqr, temp, last;
  int count = 0;
 
  sqr = num * num;
  temp = num;
 
  //Counting digits
  while (temp > 0)
  {
    count++;
    temp = temp / 10;
  }
 
  //calculation
  int den = floor(pow(10, count));
  last = sqr % den;
 
  //display
  if (last == num)
    printf("Automorphic Number");
  else
    printf("Not an Automorphic Number");
 
  return 0;
}