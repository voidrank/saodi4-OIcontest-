#include<stdio.h>
#define N 1000000009
int main()
{
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	long long ans=0;
	long i,n,p,d;
	scanf("%ld%ld%ld",&n,&p,&d);
	for(i=1;i<=n;i++)
	{
		ans+=((p+(i+i-2)*d)*(p+(i+n-i+1-2)*d))%N;
		ans=ans%N;
	}
	printf("%I64d",ans%N);
	return 0;
}
