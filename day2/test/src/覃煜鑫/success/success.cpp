#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	FILE *in,*out;
	long long N;
	double x,ans=0;
	in=fopen("success.in","r");
	out=fopen("success.out","w");
    fscanf(in,"%lf%I64d",&x,&N);
	for(long long i=1;i<=N;i++,x*=x)
	{
	    if(i>2000000)
	    break;
		ans+=x/i;
	}
    fprintf(out,"%.4lf\n",ans);
    fclose(in);
    fclose(out);
	return 0;
}
