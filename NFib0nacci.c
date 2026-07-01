/*
step-1: start
step-2: print "How many which fibonacci series do you want print  ? "
step-3: read NFibonacci
step-4: print "The fibonacci series upto " + FibonacciNumber + " are "
step-5: Number = 1;
step-6: FirstNumber = 0
step-7: SecondNumber - 1
step-8: print SecondNumber
step-9: CurrentNumber = FirstNumber + SecondNumber
step-10: if(number <= NFibonacci):
          print ", " + CurrentNumber
          FirstNumber = SecondNumber
          SecondNumber = CurrentNumber
          FibonacciNumber = FibonacciNumber + 1
          numner = number + 1
          goto step-9
step-11: print ".\n"
step-12: stop
*/

#include <stdio.h>

int main()
{
  int n_fibonacci, first_number, second_number, current_numbre, number;
  printf("Upto which number do you want print fibonacci series: ");
  scanf("%i", &n_fibonacci);
  printf("The fibonacci series upto %i are ", n_fibonacci);
  number = 1;
  first_number = 0;
  second_number = 1;
  printf("%i", second_number);
  current_numbre = first_number + second_number;
  while(number <= n_fibonacci)
  {
    printf(", %i", current_numbre);
    first_number = second_number;
    second_number = current_numbre;
    current_numbre = first_number + second_number;
    number = number + 1;
    if(number > n_fibonacci)
    {
    	break;
    }
    
  }
  printf(".\n");
  return 0;
}
