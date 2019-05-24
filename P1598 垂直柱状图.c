#include<stdio.h>

int main()
{
	int letter[26]={0};
	int i,j,l,c,fin,max=0;
	char str[101]={0};
	
	for (i=0;i<4;i++)
	{
		gets(str);
		l=strlen(str);
		for (j=0;j<l;j++)
		{
			if (str[j]>='A'&&str[j]<='Z')
			{
				c=(int)(str[j]-'A');
				letter[c]++;
			}
		}
	}
	//for (i=0;i<26;i++) printf("%d ",letter[i]);
	max=letter[0];
	for (i=1;i<26;i++)
	{
		if (letter[i]>max) max=letter[i];
	}
	
	for (i=0;i<max;i++)
	{
		for (j=25;j>=0;j--)
		{
			if (letter[j]>=(max-i))
			{
				fin=j;
				break;
			}
		}
		for (j=0;j<fin;j++)
		{
			if (letter[j]<(max-i)) printf("  ");
			else printf("* ");
		}
		printf("*\n");
	}
	for (i=0;i<25;i++) printf("%c ",('A'+i));
	printf("Z\n");
	
	
	return 0;
} 
