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

int n,m;
long long int mi;

int fi[100000]={1,2};

long long int f(int k)
{
	if(k<=100000&&fi[k]!=0)
		return fi[k];
	if(k%2==0)
		return f(k/2)*f(k/2);
	else
		return f(k/2)*f(k/2)*2;
}

int main()
{
	fin.open("sound.in");
	fout.open("sound.out");
	fin>>n>>m;
	mi=1;
	if(m<1000)
		for(int i=0;i<m;i++)
			mi*=2;
	else
		mi=f(m);
	for(int i=0;i<n;i++)
	{
		int p;
		int k;
		fin>>p;
		k=p/mi;
		if(p-k*mi>=(k+1)*mi-p)
			fout<<(k+1)*mi<<' ';
		else
			fout<<k*mi<<' ';
		
		/*cout<<"p:"<<p<<" k:"<<k<<endl;
		cout<<"mi:"<<mi<<endl;
		cout<<"k*mi:"<<k*mi<<" k+1*mi:"<<endl;*/
	}
	fout<<endl;
	fin.close();
	fout.close();
	//cin>>n;
	return 0;
}
