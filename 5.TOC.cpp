#include <stdio.h>
#include <string.h>
//   start with 0 and end with 0
int main()
{
	char s[10];
	int i,flag,k;
	printf("Use Only 0's or 1's\n");
	printf("Enter a string : ");
	scanf("%s",s);
	
	k=strlen(s);
	if(s[0]=='0' && s[k-1]=='0')
		flag=1;
		
	if(flag==1)
		printf("string accepted");
	else
		printf("not accepted");
}
