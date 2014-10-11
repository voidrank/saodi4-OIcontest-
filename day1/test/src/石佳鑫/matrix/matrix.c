#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include <math.h>
FILE*in,*out;
int main()
{
	in=fopen("matrix.in","r");
	out=fopen("matrix.out","w");
	long int answer1,answer2;
	long int i,j,k;
	long int n,p,d;
	fscanf(in,"%ld%ld%ld",&n,&p,&d);
	j=p;
	answer2=0;
	for (i=2;i<=n;i++) j=j+d;
	for (i=1;i<=n;i++)
	{
		k=p+(i-1)*(p*2+d);
		answer1=(j*k)%1000000009;
		answer2=(answer2+answer1)%1000000009;
	}
	fprintf(out,"%I64d",answer2);
	fclose(in);
	fclose(out);
	return 0;
}