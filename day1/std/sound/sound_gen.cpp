#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>
#define ll long long
#define pb push_back
#define ci const int&
#define inf 1000002012
#define Rep(i,n) for(int i=1;i<=n;++i)
#define rep(i,n) for(int i=0;i<n;++i)
#define Maxn 1000000
#define Maxm

using namespace std;

int cnt, N;
char s[1000000],ch;

int RAND()
{
	return (rand()<<16)|rand();
}

int main(){
	srand(time(0));
	while(1)
	{
		freopen("sound0.in","w",stdout);
		printf( "%d %d\n", N = RAND()%Maxn, RAND()%16 );
		for ( int i = 1; i < N; ++i )
		printf( "%d ", RAND()%65536 );
		printf( "%d", RAND()%65536 );
		fclose(stdout);
		return 0;
	}
	return 0;
}