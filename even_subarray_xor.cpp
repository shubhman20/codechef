#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    for(int i=0;i<n;i++){
	        cout<<2+ 2*i<<" ";
	    }
	    cout<<endl;
	    for(int i=0;i<n;i++){
	        cout<<2+ 2*i +1<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
