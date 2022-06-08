#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q;
    cin>>n>>q;
    int** a= new int*[n];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a[i]=new int[x];
    
    for(int j=0;j<x;j++)
    {
        cin>>a[i][j];
    }
    }
    while(q-- >0)
    {
        int b,c;
        cin>>b>>c;
        cout<<a[b][c]<<endl;
    }
    return 0;
}
