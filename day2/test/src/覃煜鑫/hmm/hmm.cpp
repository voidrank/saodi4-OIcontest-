#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;

int n,m,q;
double pi[1001];
double a[1001][51],b[1001][1001];
int o[1001];

int main()
{
	FILE *in,*out;
	in=fopen("hmm.in","r");
	out=fopen("hmm.out","w");
	double ans=0;
	fscanf(in,"%d%d%d",&n,&m,&q);
	for(int i=1;i<=n;i++)
	fscanf(in,"%lf",&pi[i]);
	for(int i=1;i<=n;i++)
	for(int j=1;j<=q;j++)
	fscanf(in,"%lf",&a[i][j]);
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	fscanf(in,"%lf",&b[i][j]);
	for(int i=1;i<=m;i++)
	fscanf(in,"%d",&o[i]);
    for(int i=1;i<=n;i++)
    ans+=pi[i]*a[i][o[1]+1];
    for(int i=2;i<=n;i++)
    {
    	double sum=0;
		for(int j=1;j<=n;j++)
 	    for(int k=1;k<=n;k++)
		sum+=pow((double)n,(double)(i-2))*b[j][k]*a[k][o[i]+1];
		ans*=sum;
    }
    fprintf(out,"%.4lf\n",ans);
    fclose(in);
    fclose(out);
	return 0;
}
