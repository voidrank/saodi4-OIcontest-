#include <stdio.h>
#include <string.h>
long long int a[100][100],table[100][100],cafe[100][100];
int main()
{
	FILE*in,*out;
	in=fopen("cafetable.in","r");
	out=fopen("cafetable.out","w");
	long long int i,n,k;
	long long int ui,vi;
	fscanf(in,"%I64d",&n);
	memset(a,0,sizeof(a));
	memset(cafe,0,sizeof(cafe));
	memset(table,0,sizeof(table));
	for (i=1;i<=n-1;i++) 
		{
			fscanf(in,"%I64d%I64d",&ui,&vi);
			a[ui][vi]=1;
		}
	k=1;
	for (i=1;i<=n-1;i++)
		if (!a[i][i+1]) k=0;
	if (k==1) 
	{
		fprintf(out,"1\n");
		fclose(in);
		fclose(out);
		return 0;
	}
	fprintf(out,"%I64d\n",n/2);
	fclose(in);
	fclose(out);
	return 0;
	}
