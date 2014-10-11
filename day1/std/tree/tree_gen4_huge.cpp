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
#define it vector<int>::iterator
#define inf 1000002012
#define Rep(i,n) for(int i=1;i<=n;++i)
#define rep(i,n) for(int i=0;i<n;++i)
#define Maxn 102013
#define Maxm 4

using namespace std;

int cnt, N = 10000;
char s[1000000],ch;
int f[Maxn];
vector<int> E[Maxn];
queue<int> V;

void travel( int x )
{
	printf( "%d ", x );
	for ( it i = E[x].begin(); i != E[x].end(); ++i )
	travel( *i );
}

void bfs()
{
	V.push( 1 );
	while ( V.size() )
	{
		int x = V.front(); V.pop();
		printf( "%d ", x );
		for ( it i = E[x].begin(); i != E[x].end(); ++i )
		V.push( *i );
	}
}

int main(){
	srand(time(0));
	while(1)
	{
		freopen("tree.in","w",stdout);
		printf( "%d\n", N );
		int MAIN = 1;
		int size = 2;
		for ( int i = 2; i <= N; ++i )
		{
			if ( rand()%2 )
			{
				int M = rand()%Maxm+1;
				M = min( N - i + 1, M );
				for ( int j = i; j <= i + M - 1; ++j )
				{
					f[j] = MAIN;
					MAIN = j;
				}
				i += M - 1;
			}
			else
			{
				int cMAIN = MAIN;
				int M = size + rand()%size + 1;
				if ( M * 2 < N - i + 1 )
				{
					for ( int j = i; j <= i+size-1; ++j )
					{
						f[j] = cMAIN;
						cMAIN = j;
					}
					for ( int j = i + size; j < i + 2*size; ++j )
					{
						f[j] = MAIN;
						MAIN = j;
					}
					i += 2*size - 1;
					size = size * 2;
				}
				else --i;
			}
		}
		for ( int i = 1; i <= N; ++i ) E[i].erase( E[i].begin(), E[i].end() );
		for ( int i = 2; i <= N; ++i ) E[f[i]].pb( i );
		travel( 1 );puts("");
		bfs();
		fclose(stdout);
		return 0;
		system("tree.exe");system("tree_p.exe");
		freopen("tree.out","r",stdin);
		cnt = 0;
		while(scanf("%c",&ch)!=-1)s[cnt++]=ch;
		fclose(stdin);
		freopen("tree_p.out","r",stdin);
		for(int i = 0; i < cnt; ++i)
		{
			scanf( "%c", &ch);
			if( ch != s[i]) 
				return 0;
		}
		fclose(stdin);
	}
	return 0;
}