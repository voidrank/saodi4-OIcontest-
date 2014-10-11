#include <cstdlib>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

ifstream fin("tree.in");
ofstream fout("tree.out");
#define cin fin
#define cout fout

int n;

int main()
{
    cin>>n;
    
    if(n==2)
    {
        cout<<"1.000"<<endl;
        return 0;
    }
    
    cout.precision(3);
    cout<<fixed;
    cout<<(((double)(n+1))/2)<<endl;
    
    //system("PAUSE");
    return 0;
}

