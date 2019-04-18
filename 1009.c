#include <stdio.h>

int main()
{
   char name[10];
   double FixedSalary,SalesTotal, SalaryTotal;
   scanf("%s", &name);
   scanf("%lf", &FixedSalary);
   scanf("%lf", &SalesTotal);

   SalaryTotal = FixedSalary + (SalesTotal * 0.15);

   printf("TOTAL = R$ %.2lf\n", SalaryTotal);

   return 0;
}
