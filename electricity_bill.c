/*WAP to Calculate Electricity Bill with if-else condition where
(<=200 Rs.80/unit
> 200 and <=300 Rs.0.90/unit
>300  Rs.1.0/unit)
For the first 200 units 80 paise per unit
For the next 100 units 90 paise per unit
Beyond 300 units Rs. 1 per unit
All users are charges a minimum of Rs.100 as meter charge.
If the total amount is more than Rs. 400, then an additional surcharge of 15% of the total amount is charged.
Write a program to read the name of the user, number of units consumed and print out the charges

*/
#include<stdio.h>
void main ()
{
float unit, total, finalamount;
printf("Enter Total Units:");
scanf ("%f", &unit);
if (unit<=200)
{
total=100+unit*0.80;
}
else if (unit>200 && unit<=300)
{
total=100+160+(unit-200)*0.90;
}
else if (unit >300 )
{
total=100+160+90+(unit-300)*1.0;
}

printf("\nTotal: %.2f", total);
if(total>400)
finalamount= total+(total*0.15);
printf("\n finalamount if it exceeds Rs. 400: %.2f", finalamount);
}

