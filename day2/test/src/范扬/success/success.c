#include<stdio.h>
#include<math.h>
int main()
{
	FILE *in,*out;
	in=fopen("success.in","r");
	out=fopen("success.out","w");
	float x;
	long n;
	fscanf(in,"%f%32d",&x,&n);
	int i;
	double k=0.0;
	for(i=1;i<=n;i++){
		k+=pow(x,i)/i;
	}
	fprintf(out,"%.4f",k);
	fclose(in);
	fclose(out);
	return 0;
}
