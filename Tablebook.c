#include <stdio.h>
int main()
{
	int table_number, table_multiplent, multiple;
	printf("Tablebook\n");
	table_number = 1;
	while(table_number <=20)
	{
		printf("The mutiplication table of %i is ", table_number);
		table_multiplent = 0;
		while(table_multiplent < 10)
		{
			table_multiplent = table_multiplent + 1;
			multiple = table_number * table_multiplent;
			printf("%i x %i = %i\n", table_number, table_multiplent, multiple); 
		}
		table_number = table_number + 1;
	}
	 return 0;
}
