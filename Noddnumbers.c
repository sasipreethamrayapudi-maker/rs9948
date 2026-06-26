/*
 step-1:start
 step-2:print"How many odd numbers do you want print: "
 step-3:read NOdd
 step-4:Number = 1
 step-5:counter = 1
 step-6:print"The first " + NOdd + " odd numbers are " + counter
 step=7:counter = counter + 2
 step-8:if(Number < NOdd)
          Number = Number + 1
          print ", " + counter
          goto step-8
 step-9:print".\n"
 step-10:stop
*/

#include <stdio.h>
int main()

{
  int nodd, number, counter;
  printf("How many odd numbers do you want print: ");
  scanf("%i", &nodd);
  number = 1;
  counter = 1;
  printf("The first %i odd numbers are %i", nodd, counter);
  while(number < nodd)
  {
       number = number + 1;
       counter = counter + 2;
       printf(", %i", counter);
  }
   printf(".\n");
   return 0;
}


