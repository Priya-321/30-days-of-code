#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int M,N,K,a;
	    cin>>M>>N>>K;
	    a=M-(N*K);
	    if(a>0)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
