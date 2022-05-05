#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int i,j,n;
	    int count1=0, count0=0;
	    for(i=1;i<=7;i++)
	    {
	        cin>>n;
	        if(n==1)
	         count1++;
	        else if(n==0)
	          count0++;
	    }
	    if(count1>count0)
	     cout<<"YES"<<endl;
	    else if(count0>count1)
	    cout<<"NO"<<endl;
	}
	return 0;
}
