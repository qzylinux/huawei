#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int findMatch(const char *number0, const char *number1)
{
	int cur=0;
	int max=0;
	int i=0;
	while(number0[i]!='\0')
	{
		if(number0[i]==number1[i])
		{
			cur++;
			if(max<cur)
				max=cur;
		}
		else
			cur=0;
		i++;
	}
	return max;
}

int main()
{
	int res=0,str_len1=0,str_len2=0;
	char num0[100];
	char num1[100];
	scanf("%s",num0);
	scanf("%s",num1);
	str_len1=strlen(num0);
	str_len2=strlen(num1);
	if(str_len1!=str_len2)
		return -1;
	res=findMatch(num0, num1);
	printf("%d",res);
	return 0;
}
