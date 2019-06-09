#include<stdio.h>

int main()
{
	int n,i,a[1001]={0};
	
	scanf("%d",&n);
	a[0]=0;
	a[1]=1;
	for (i=2;i<1001;i++)
	{
		if (i%2==0) a[i]=a[i-1]+a[i/2];
		else a[i]=a[i-1];
	}
	printf("%d\n",a[n]);
	
	return 0;	
} 
