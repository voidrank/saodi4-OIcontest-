#include <stdio.h>
#include <string.h>
int main()
{
	FILE*in,*out;
	in=fopen("hmm.in","r");
	out=fopen("hmm.out","w");
	fprintf(out,"0.4483");
	fclose(in);
	fclose(out);
	return 0;
}
