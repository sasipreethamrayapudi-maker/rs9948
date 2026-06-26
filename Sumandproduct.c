/*
step-1:start
step-2:print"To find two numbers given their sum and product.\n"
step-3:print"Enter the sum of two numbers: "
step-4:read Sum
step-5:print"Enter their product: "
step-6:read Product
step-7:Num1 = 0;
step-8:Num1 = Num1 + 1
step-9:Num2 = Sum - Num1
step-10:if(num1 * num2 != product)
           goto step 8
step-11:print"The sum and product of two numbers is " + sum + " and their product is " + product + "." + num1 + " and " + num2 + ".\n"
step-12:stop
*/

#include <stdio.h>

int main()
{
  int sum, product, num1, num2;
  printf("To find two numbers given their sum and product.\n");
  printf("Enter the sum of two numbers: ");
  scanf("%i", &sum);
  printf("Enter their product: ");
  scanf("%i", &product);
  num1 = 0;
  num2 = 0;
  while(num1 * num2 != product)
  {
       num1 = num1 + 1;
       num2 = sum - num1;
  }
  printf("The sum of two numbers is %i and their product is %i.The two numbers are %i and %i .\n", sum, product, num1, num2);
  return 0;
}

