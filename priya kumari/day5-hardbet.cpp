#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a<b)
	    {
	        if(a<c)
	        {
	            cout<<"Draw"<<endl;
	        }
	        else
	        {
	            cout<<"Alice"<<endl;
	        }
	    }
	    else
	    {
	        if(b<c)
	        cout<<"Bob"<<endl;
	        else
	        cout<<"Alice"<<endl;
	    }
	}
	return 0;
}
