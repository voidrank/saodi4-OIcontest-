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
#define Maxn
#define Maxm

using namespace std;

int cnt, N = 100000, M = 80000;
char s[1000000],ch;

int main(){
	srand(time(0));
	while(1)
	{
		freopen("cafetable.in","w",stdout);
		
		printf( "%d\n", N );
		for ( int i = 2; i <= M; ++i ) printf( "%d %d\n", i - 1, i );
		for ( int i = M+1; i <= N; ++i )
		{
			printf( "%d %d\n", i, rand()%(i-1)+1 );
		}
		
		fclose(stdout);
		return 0;
		system(".exe");system("_p.exe");
		freopen(".out","r",stdin);
		cnt = 0;
		while(scanf("%c",&ch)!=-1)s[cnt++]=ch;
		fclose(stdin);

		freopen("_p.out","r",stdin);
		for(int i = 0; i < cnt; ++i)
		{
			scanf( "%c", &ch);
			if( ch != s[i]) return 0;
		}
		fclose(stdin);
	}
	return 0;
}