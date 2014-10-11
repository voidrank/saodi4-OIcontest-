#include<stdio.h>
#include<stdlib.h>
long pow(long i,long j)
{
	long x=1,a;
	for(a=1;a<=j;a++)
	x*=i;
	return x;
}
int main()
{
	freopen("sound.in","r",stdin);
	freopen("sound.out","w",stdout);
	long n,m,i,x,k;
	scanf("%ld%ld",&n,&m);
	for(i=1;i<=n;i++)
	{
		scanf("%ld",&x);
		k=x/pow(2,m);
		while((k+1)*pow(2,m)<x)k++;
		if(abs(k*pow(2,m)-x)>=abs((k+1)*pow(2,m)-x))k++;
		printf("%ld ",long(k*pow(2,m)));
	}
	return 0;
}
