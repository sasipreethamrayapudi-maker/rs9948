/*
step-1: start
step-2: print"Upto which numbers do you want print square series ? "
step-3: read NumberCount
step-5: print"The square numbers upto " + NumberCount + " is " + NumberCounnter
step=6: NumberCounnter = NumberCounnter + 1
step-7: square = NumberCounnter * NumberCounnter
step-8: if(square <= NumberCounnt)
        print "," + square
        goto step - 6
step-9: print".\n"
step-10: stop       
*/

#include <stdio.h>
int main()
{
    int number_count, number_counter, square;
	printf("Upto which number do you want print square series? ");
	scanf("%i", &number_count);
	number_counter = 1;
	printf("The square numbers upto %i is %i", number_count, number_counter);
	number_counter = number_counter; 
	square = number_counter * number_counter + 1;
	while(square <= number_count)
	{
	    printf(", %i", square);
	    number_counter = number_counter + 1;
	    square = number_counter * number_counter;

	    	}
	printf(".\n");
	return 0;
}
