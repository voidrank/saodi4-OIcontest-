#include<stdio.h>
int main()
{long int n,p,l,t,m;
  long int i,j;
  FILE *in,*out;

  in=fopen("sound.in","r");
  out=fopen("sound.out","w");
  fscanf(in,"%ld%ld",&n,&m);
  t=1<<m;
  for(i=0;i<n;i++)
    {fscanf(in,"%ld",&p);
	  j=0;
	  while(1)
	    {if(j*t<=p&&p<=(j+1)*t)
			 break;
		  j++;
		}
	  if(p-j*t>=(j+1)*t-p)
		 l=(j+1)*t;
	  else
		 l=j*t;
	  fprintf(out,"%I64d ",l);
   }
 fclose(in);
 fclose(out);

 return 0;
}