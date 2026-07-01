/*
step-1: start
step-2: print "Upto which number do  you want print  fibonacci series? "
step-3: read FibonacciNumber
step-4: print "The fibonacci series upto " + FibonacciNumber + " are "
step-5: FirstNumber = 0
step-6: SecondNumber - 1
step-7: print SecondNumber
step-8: CurrentNumber = FirstNumber + SecondNumber
step-9: if(CurrentNumber <= FibonacciNumber):
          print ", " + CurrentNumber
          FirstNumber = SecondNumber
          SecondNumber = CurrentNumber
          FibonacciNumber = FibonacciNumber + 1
          goto step-9
step-10: print ".\n"
step-11: stop
*/

#include <stdio.h>

int main()
{
  int fibonacci_number, first_number, second_number, current_numbre;
  printf("Upto which number do you want print fibonacci series: ");
  scanf("%i", &fibonacci_number);
  printf("The fibonacci series upto %i are ", fibonacci_number);
  first_number = 0;
  second_number = 1;
  printf("%i", second_number);
  current_numbre = first_number + second_number;
  while(current_numbre <= fibonacci_number)
  {
    printf(", %i", current_numbre);
    first_number = second_number;
    second_number = current_numbre;
    current_numbre = first_number + second_number;
    if(current_numbre > fibonacci_number)
    {
    	break;
    }
    
  }
  printf(".\n");
  return 0;
}
