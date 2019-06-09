#include<stdio.h>
int main()
{
	int a[2001]={0};
	//int a[9]={6,2,5,5,4,5,6,3,7,6};
	int n,i,j,x,left,right,sum=0;
	a[0]=6;a[1]=2;a[2]=5;a[3]=5;a[4]=4;a[5]=5;a[6]=6;a[7]=3;a[8]=7;a[9]=6;
	
	for (i=10;i<2001;i++)
	{
		x=i;
		while (x>0)
		{
			sum=sum+a[x%10];
			x=x/10;
		}
		a[i]=sum;
		sum=0;
	}
	
	scanf("%d",&n);
	if (n<=4) 
	{
		printf("0\n");
		return 0;
	}
	for (i=0;i<1000;i++)
	{
		for (j=0;j<1000;j++)
		{
			x=i+j;
			if (a[i]+a[j]+a[x]+4==n) sum++;
		}
	}
	printf("%d\n",sum);
	
	
	return 0;
}
