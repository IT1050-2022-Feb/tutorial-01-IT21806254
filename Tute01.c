/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) 
{
  int sub = 0 ;
  float mark = 0.00 , total = 0.00 ;

  for ( sub = 0 ; sub <= 1 ; sub++ )
    {
      mark = 0.00 ;
      printf ( "Enter the mark of subject %d : " ) ;
      scanf ( "%f", &mark ) ;
      total += mark ;
    }

  printf ( "Average is %.2f", total/2.0) ;
  return 0;
}

