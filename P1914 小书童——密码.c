#include<stdio.h>

int main()//注意ascii码表有上限值，一旦超过就不能再减回来了
{
	int n,i,l;
	char a[51]={0};
	int judge;
	
	scanf("%d",&n);
	scanf("%s",a);
	
	l=strlen(a);
	for (i=0;i<l;i++)
	{
		n=n%26;
		judge=(int)(a[i])+n;
		if (judge>'z') judge=judge-26;
		printf("%c",(char)(judge));
	}
	
	
	
	return 0;
}
