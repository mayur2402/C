#include<stdio.h>
void main()
{
	int ammount,OneRs,FiveRs,TenRs,rem;
	printf("Enter the ammount");
	scanf("%d",&ammount);
	TenRs=ammount/10;
	rem=ammount%10;
	printf("Ten Rs notes is %d",TenRs);
	FiveRs=rem/5;
	printf("\nFive Rs notes are %d",FiveRs);
	OneRs=rem%5;
	printf("\nOne Rs notes are %d",OneRs);
}
