#include <stdio.h>
long long n,p,d,m1,m2,m,i;
int main()
{
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	scanf("%lld %lld %lld",&n,&p,&d);
	for(i=1;i<=n-1;++i) m+=i;
	m1=n*p+2*d*m;
	m2=p+(1+n-2)*d;
	printf("%lld",m1*m2%1000000009);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
