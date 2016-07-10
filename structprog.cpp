#include <stdio.h>
/* Declare the structure _date */
struct date
{ short iDay;
short iMonth;
short iYear;};
/* Define struct _date as a new data type ‘date’ */
typedef struct date sDate;
/* Prototype declaration */
void fnInitialize(sDate *psTemp);
int main (int argc, char** argv) {
sDate sToday;
sDate* x = &sToday;
/* Structure variable*/
fnInitialize(&sToday); /* Initialize date*/
printf("Today is %d-%d-%d\n",x->iDay,sToday.iMonth,sToday.iYear);
return 0;
}
/*Function to Initialize date*/
void fnInitialize(sDate *psTemp)
{
psTemp->iDay = 6;
psTemp->iMonth = 9;
psTemp->iYear = 2005; }

