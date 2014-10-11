#include<stdio.h>
#include<math.h>
int main()
{
	FILE *in,*out;
	in=fopen("success.in","r");
	out=fopen("success.out","w");
	int i;
	double sum,t,x,n;
	sum=0;
	fscanf(in,"%lf%lf",&x,&n);
	for(i=1;i<=n;i++){
		t=pow(x,i);
		t=t/i;
		sum=sum+t;     }
	fprintf(out,"%.4lf",sum);
	fclose(in);
	fclose(out);
	return 0;
}
	
	
	