/*
step-1:start
step-2:print"How many multiple of 3 do you want print: "
step-3:read MultipleCount
step-4:print"The first " + MiltipleCount + " multiple of 3 are "
step-5:MultipleCounter = 0
step-6:MultipleCounter = MultipleCounter + 1;
step-7:Multiple = 3 * MultipleCounter
step-8:if(Multiple < 3 * MultipleCount)
         print Multiple + ", "
         goto step-6
step-9:if(Multiple = 3 * MultipleCount)
          print Multiple + ".\n"
step-10: stpop
*/

#include <stdio.h>

int main()
{
  int multiple_count, multiple_counter, multiple;
  printf("How many multiple of 3 do you want print: ");
  scanf("%i", &multiple_count);
  printf("The first %i multiple of 3 are", multiple_count);
  multiple_counter = 1;
  multiple = 3 * multiple_counter;
  while(multiple < 3 * multiple_count-1)
  {
       printf("%i ,", multiple);
       multiple_counter = multiple_counter + 1;
       multiple = 3 * multiple_counter;
  }
  if(multiple == 3 * multiple_count)
  {
   printf("%i .", multiple);
  }
   return 0;
}
