/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main()

{
  int num = 0 , total = 0 ;
  
  printf ( "This program will give you the sum of all numbers from 1 to n, where n is the number you enter.\n") ;
  
  printf ( "Enter a number :" ) ;
  scanf ( "%d", &num);

  do 
    {
      total += num ;
  	  num = num - 1;
    }
  while ( num != 0 );

  printf ( "Total is %d.", total);
  return 0;
}


