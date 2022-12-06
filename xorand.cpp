#include <bits/stdc++.h>
using namespace std;


long long mbit(long long n){
    if(n==0) return 0;
    n=n/2;
    long long mb = 0;
    while(n>0){
        n=n/2;
        mb++;
    }
    return mb;
}

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    map<long long,long long> m;
	    for(int i=0;i<n;i++){
	        long long temp;
	        cin>>temp;
	        if(temp>0){
	            int val =mbit(temp);
	            if(m.find(val)==m.end())
	                m[val]=1;
	            else
	                m[val]++;
	        }
	        
	        
	    }
	    long long ans=0;
	   // cout<<"values: ";
	    for(auto it:m){
	        if(it.second>1){
	            ans+= ((it.second-1)*it.second)/2;
	        }
	    }
	   // cout<<endl;
	    cout<<ans<<endl;
	}
	return 0;
}
