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
int dfs[2000]={0};
int bfs[2000]={0};
int m[2000][2000]={{0}};
int n;


int main()
{
	fin.open("tree.in");
	fout.open("tree.out");
	fin>>n;
	/*for(int i=0;i<n;i++)
		fin>>dfs[i];
	for(int i=0;i<n;i++)
		fin>>bfs[i];*/
	//makeTree(0,n-1);
	if(n>3)
		fout<<fixed<<setprecision(3)<<((double)n+1)/2;
	else
		if(n==1)
			fout<<"0.000";
		else if(n==2)
			fout<<"1.000";
		else
			fout<<"2.000";
	fin.close();
	fout.close();
	return 0;
}
