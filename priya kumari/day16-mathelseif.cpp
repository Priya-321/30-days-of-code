#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int c;
	    cin>>c;
	    if(c>65)
	    cout<<"OVERLOAD"<<endl;
	    else if(c<35)
	    cout<<"UNDERLOAD"<<endl;
	    else
	    cout<<"Normal"<<endl;
	    
	}
	return 0;
}
