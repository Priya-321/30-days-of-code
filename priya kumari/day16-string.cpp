#include <iostream>
using namespace std;
#include<string.h>

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s, m[5];
	    cin>>s;
	    string p;
	    cin>>p;
	    for(int i=0;i<5;i++)
	    {
	        if(s[i]==p[i])
	        cout<<"G";
	        else
	        cout<<"B";
	    }
	    for(int i=0;i<5;i++)
	       cout<<m[i]<<endl;
	}
	return 0;
}
