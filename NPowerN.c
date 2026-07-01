/*
step-1: start
step-2: print"How many n terms do you want print in n power n series: "
step-3: read NLimit
step-4: print"The first " + NLimit + "n power n terms are 1"
step-5: NpowerN = 1
step-6: Ncount =1
step-7: NTerm = 2
step-8: if(NTerm <= NLimit)
          if(Ncount <= NTerm)
             NpowerN = NpowerN * NTerm
             Ncount = Ncount + 1
             goto step-8
step-9: if(NTerm <= NLimit)
          print ", " + NpowerN
          goto step-8 
step-10: print".\n"
step-11: stop
*/

#include <stdio.h>
int main()
{
	int n_limit, n_term, n_power_n, n_count;
	printf("How many n terms do you want print in n power n series: ");
	scanf("%i", &n_limit);
    printf("The first %i n power n terms are 1", n_limit);
    n_term = 2;
    n_power_n = 1;
    n_count = 1;
    while(n_term <= n_limit)
    {
      while(n_count <= n_term)
      {
      	n_power_n = n_power_n * n_term;
      	n_count = n_count + 1;
      }
      printf(", %i", n_power_n);
      n_term = n_term + 1;
    }	
     return 0;
}
