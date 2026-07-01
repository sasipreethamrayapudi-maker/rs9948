/*
step-1: start
step-2: print"Upto which number do you waant print in n power n series: "
step-3: read Limit
step-4: print"The n power n series upto " + Limit + "are 1"
step-5: Number = 2;
step-6: NpowerCount = 1;
step-7: NpowerValue = 1;
step-8: if(NpowerValue <= Limit):
          if(NpowerCount <= Number):
            NpowerValue = Number * NpowerValue
            NpowerCount = NpowerCount + 1
            goto step - 8
step-9: if(NpowerValue <= Limit):
          print", " + NpowerValue
          Number = Number + 1
          goto step 8
step-10: print".\n"
step-11: stop
*/

#include <stdio.h>

int main()
{
  int limit,n_number,n_power,n_counter;
  printf("Upto which number do you want print n power n series: ");
  scanf("%i", &limit);
  printf("The n power n series are 1");
  n_number = 2;
  while(1)
  {
  	n_power = 1;
  	n_counter = 1;
  	while(n_counter <= n_number)
  	{
  	  n_power = n_power * n_number;
  	  n_counter = n_counter + 1;
  	}
  	if(n_power > limit)
  	{
  	  break;
  	}
  	printf(", %i", n_power);
  	n_number = n_number + 1;
  }
  printf(".\n");
}
