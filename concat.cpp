#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int cnt=0;
	    vector<long long>a(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    if(n==2){
	        cout<<"YES"<<endl;
	    }
	    else{
	        vector<long long>b=a;
	        sort(b.begin(),b.end());
	        long long u=0;
	        for(int i=0;i<n;i++){
	            if(b[u]==a[i]){
	                u++;
	            }
	            if(u==n) 
	                break;
	        }
	        for(int i=0;i<n;i++){
	            if(b[u]==a[i]){
	                u++;
	            }
	            if(u==n)
	                break;
	        }
	        if(u==n){
	            cout<<"YES"<<endl;
	        }
	        else{
	            cout<<"NO"<<endl;
	        }
	    }
	    
	}
	return 0;
}
