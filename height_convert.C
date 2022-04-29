#include <stdio.h>
int main()
{
int feet,inches;
float cms;
scanf("%d %d",&feet,&inches);
cms = ((12 * feet) + inches) * 2.54;
printf("Your height in centimeters is : %.2f",cms);
	return 0;
}
