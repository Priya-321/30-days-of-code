#include <iostream>
using namespace std;
#include<math.h>
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int b,ls;
	    cin>>b>>ls;
	    float min=sqrt(ls*ls-b*b);
	    float max=sqrt(ls*ls+b*b);
	    cout<<min<<" "<<max<<endl;
	}
	return 0;
}
