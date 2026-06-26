/*
step-1:start
step-2:print"Which multiplication table do you want print: "
step-3:read TableNumber
step-4:print"The multiplicantion of " + TableNumber + "table is\n"
step-5:TableMultiplent = 1
step-6:TableMultiplent = TableMultiplent + 1
step-7:Multiple = TableNumber * TableMultiplent
step-8:if(TableMultiplent <= 10-1)
         print TableNumber + " x " + TableMultiplent + " = " + Multiple + "\n"
         goto step - 6
step-9:stop
*/

#include <stdio.h>

int main()
{
  int table_number, table_multiplent, multiple;
  printf("Which mutiplication table do you want print: ");
  scanf("%i", &table_number);
  printf("Table multipliaction of %i table is\n", table_number);
  table_multiplent = 1;
  multiple = table_number * table_multiplent;
  while(table_multiplent <= 10)
  {
       printf("%i x %i = %i\n", table_number, table_multiplent, multiple);
       table_multiplent = table_multiplent + 1;
       multiple = table_number * table_multiplent;
  }
  return 0;
}

