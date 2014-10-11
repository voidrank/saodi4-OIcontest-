#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include <math.h>
FILE*in,*out;
int main()
{
	in=fopen("sound.in","r");
	out=fopen("sound.out","w");
	long int sec[100001];
	long int b;
	int n,m;
	int i,k,x;
	sec[0]=1;
	for (i=1;i<=100000;i++)
		sec[i]=sec[i-1]*2;
	fprintf(out,"\n");
	fscanf(in,"%d%d",&n,&m);
	x=0;
	for (i=1;i<=n;i++)
	{
		fscanf(in,"%ld",&b);
		if (b<sec[m])
		{
			fprintf(out,"%I64d ",x);
			continue;
		}
		k=b/sec[m];
		if (abs(k*sec[m]-b)>=abs((k+1)*sec[m]-b))
			fprintf(out,"%I64d ",(k+1)*sec[m]);
		else fprintf(out,"%I64d ",k*sec[m]);
	}
	fclose(in);
	fclose(out);
	return 0;
}