#include <stdio.h>
#include <string.h>
int main()
{
	int i,j,k,l,m,n,o,p,a=0,d=0,S=0;
	char s[100],s1[100],s2[100],s3[100],s4[100],s5[100],s6[100];
	gets(s);
	for (i=j=k=l=m=n=0;s[i]=0;i++)
	{
		if (s[i]>='A'&&s[i<='Z'])
		{
			if (s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
			s1[k++]=s[i];
			else 
			s2[l++]=s[i];
		}
	     else if (s[i]>='a'&&s[i]<='z')
	        {
	        	if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		        s3[m++]=s[i];
		        else 
		        s4[n++]=s[i];
        	}
	else if (s[i]>='0'&&s[i]<='9')
		s5[o++]=s[i];
		else 
		s6[p++]=s[i];
	}
	printf("%s\n%s\n%s\n%s\n%s\n%s\n",s1,s2,s3,s4,s5,s6);
	
}
	
	
