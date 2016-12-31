#include<stdio.h>
main()
{
	int a[100],i,count=0,n,x;
	printf("enter the size");
	scanf("%d",&n);
	printf("\n enter the numbers ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n the number to be searched");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			count++;
		}
	}
	printf("\n %d has occured %d times \n",x,count);
}





