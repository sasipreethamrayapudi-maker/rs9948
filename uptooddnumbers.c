/*
step-1: stop
step-2: print "Upto which number do you want print odd numbers: "
step-3: read read odd_number
step-4: counter = 1
step-5: print "The odd numbers upto " + odd_number + " are " + counter
step-6: counter = counter + 2
step-7: if(counter <= odd_number-1)
          print ",' + counter
          goto step-6
step=8: print ".\n"
*/

#include <stdio.h>

int main()
{
  int odd_number, counter;
  printf("Upto which number do you want print odd numbers: ");
  scanf("%i", &odd_number);
  counter = 1;
  printf("The odd numbers upto %i are %i", odd_number, counter);
  while(counter <= odd_number-1)
{
       counter = counter + 2;
       printf(", %i", counter);
}
  printf(".\n");
}
