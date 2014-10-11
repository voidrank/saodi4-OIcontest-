#include<stdio.h>

int main()
{
	FILE *in,*out;
	in=fopen("cafetable.in","r");
	out=fopen("cafetable.out","w");
	int x;
	fscanf(in,"%d",&x);
	fprintf(out,"%d",x/2);
	fclose(in);
	fclose(out);
	return 0;
}
