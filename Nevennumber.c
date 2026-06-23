/*
step-1:start
step-2:print"How many even numbers do you want print: "
step-3:read NEven
step-4:EvenCounter = 0;
step-5:print"The first " + NEven + " even numbers are " + EvenCounter
step-6:EvenCounter = EvenCounter + 2
step-7:if(EvenCounter <= NEven*2-1)
         print  ", " + EvenCounter
         goto step-6
step-8:print ".\n"
step-9:stop
*/


#include <stdio.h>
int main()
{
  int n_even, even_counter, number;
  printf("How many even numbers do you want print: ");
  scanf("%i", &n_even);
  number = 1;
  even_counter = 0;
  printf("The first %i even numbers are %i", n_even, even_counter);
  while(number < n_even)
  {
       number = number + 1;
       even_counter = even_counter + 2;
       printf(", %i", even_counter);
  }
  printf(".\n");
  return 0;
}
