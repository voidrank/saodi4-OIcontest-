#include <cstdlib>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

ifstream fin("sound.in");
ofstream fout("sound.out");
#define cin fin
#define cout fout

int n,m;
//int x[10000];

int main()
{
    cin>>n>>m;
    int mut=1<<m;
    
    for(int i=0;i<n;i++)
    {
        int c;
        cin>>c;
        
        int k;
        k=c/mut;
        
        //cout<<k*mut<<' '<<c<<' '<<(k+1)*mut<<endl;
        
        if(abs(k*mut-c) >= abs((k+1)*mut-c))
        cout<<(k+1)*mut<<' ';
        else
        cout<<k*mut<<' ';
        
    }
    
    cout<<endl;
    
    //system("PAUSE");
    return 0;
}
