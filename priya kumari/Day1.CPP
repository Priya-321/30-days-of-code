//Counting Pretty Numbers| Problem Code: NUM239
include <iostream>
using namespace std;
int main() {
	int T, temp=1, rem, L, R, count;// your code goes here
	cin>>T;
	while(temp<=T){
	    cin>>L>>R;
	    count=0;
	    for(int i=L; i<=R; i++){
	        rem=i%10;
	        if(rem==2||rem==3||rem==9){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	    temp++;
	}
	return 0;
}
