#include<cstdio>

int main()
{
	FILE *in,*out;
	long long n,p,d,ans=0;
	in=fopen("matrix.in","r");
	out=fopen("matrix.out","w");
	fscanf(in,"%I64d%I64d%I64d",&n,&p,&d);
	long long k=p+(n-1)*d%1000000009;
	ans=(p+p+(2*n-2)*d)*n/2*k%1000000009;
	fprintf(out,"%I64d\n",ans);
	return 0;
}
