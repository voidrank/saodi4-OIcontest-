#include <stdio.h>
#include <stdlib.h>
long a[100000],s[65538]={-1};
int main()
{
	freopen("sound.in","r",stdin);
	freopen("sound.out","w",stdout);
	long n,m,i,k,e=1;
	scanf("%ld %ld",&n,&m);
	for(i=0;i<n;++i) scanf("%ld",&a[i]);
	for(i=1;i<=m;++i) e*=2; 
	for(i=0;i<n;++i)
	{
		if(s[a[i]]!=-1)
		{
		    k=a[i]/e;
		    if(abs(k*e-a[i])>=abs((k+1)*e-a[i])) s[a[i]]=(k+1)*e;
		    else s[a[i]]=k*e;
		}	
	}
	for(i=0;i<n;++i) printf("%ld ",s[a[i]]);
	fclose(stdin);
	fclose(stdout);
	return 0;
}