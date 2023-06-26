#include "revert_string.h"

void RevertString(char *str)
{
	int i,j;
	for (i-0,j=strlen(str)-1;i<j;i++,j--)
		{
			char t=str[i];
			str[i]=str[j];
			str[j]=t;
		}
}

