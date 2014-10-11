#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>
#include<cstring>
#include<iomanip>
#include<list>
#include<cstdio>
#include<cmath>
#include<fstream>
using namespace std;
ifstream fin;
ofstream fout;
const unsigned long long inf=1000000009;

int main()
{
	fin.open("matrix.in");
	fout.open("matrix.out");
	unsigned long long n,p,d,sum=0;
	fin>>n>>p>>d;
	/*unsigned long long k2=(p%inf)+((n-1)%inf)*(d%inf);
	unsigned long long k1=(p%inf);
	k1%=inf;
	k2%=inf;
	for(unsigned long long i=0;i<n;i++)
	{
		k1%=inf;*/
		/*k2=(p%inf)+((n-1)%inf)*(d%inf);
		k2%=inf;*/
		/*sum+=((k1*k2)%inf);
		k1+=2*d;
	}*/
	sum=/*(n%inf)*((p%inf)+(((n-1)%inf)*(d%inf)))*/
	(((((p%inf)+((p%inf)+2*((n-1)%inf)*(d%inf)))*n)/2)%inf)
	*((p%inf)+(((n-1)%inf)*(d%inf)));
	
	sum%=inf;
	fout<<sum;
	fin.close();
	fout.close();
	return 0;
}
