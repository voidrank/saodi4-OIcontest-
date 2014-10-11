#include<iostream>
#include<cmath>
#include<iomanip>
#include<fstream>
//#include<windows.h>
#define cin fin
#define cout fout
using namespace std;
ifstream fin("success.in");
ofstream fout("success.out");


int main()
{
	int time=clock();
	double x;
	long long int n;
	cin>>x>>n;
	double sum=0;
	for(int i=1;i<=n&&i<4000000;i++)
	{
		sum+=(pow(x,i)/(double)i);
	}
	cout<<fixed<<setprecision(4)<<sum;
	cout<<endl<<clock()-time;
	fin.close();
	fout.close();
	return 0;
}
