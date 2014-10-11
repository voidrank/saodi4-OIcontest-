#include<stdio.h>
#define N 1000

int n,m,q;
double pi[N];
double a[N][N];
double b[N][N];
int o[N];
FILE *in;

void init(){
	int i,j;
	fscanf(in,"%d%d%d",&n,&m,&q);
	for(i=0;i<n;i++)
		fscanf(in,"%f",pi[i]);
	for(i=0;i<n;i++)
		for(j=0;j<q;j++)
			fscanf(in,"%f",a[i][j]);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			fscanf(in,"%f",b[i][j]);
	for(i=0;i<m;i++)
		fscanf(in,"%d",o[i]);
}

int main()
{
	FILE *out;
	in=fopen("hmm.in","r");
	out=fopen("hmm.out","w");
	init();
	int i,j;
	
	fclose(in);
	fclose(out);
	return 0;
}
