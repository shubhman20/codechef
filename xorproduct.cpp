#include <bits/stdc++.h>
using namespace std;

long long mod = 998244353;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    vector<long long>even;
	    vector<long long>odd;
	    long long cnt=0;
	    for(int i=0;i<n;i++){
	        long long temp;
	        cin>>temp;
	        if(temp%2!=0){
	            odd.push_back(temp);
	            if(temp==1)
	                cnt++;
	        }
	        else{
	            even.push_back(temp);
	        }
	    }
	    sort(even.begin(),even.end());
	    int i=0,j=0;
	    while(cnt-- && i<even.size()){
	        even[i] = even[i]+1;
	        i++;
	    }
	    int k=0;
	    long long ans=1;
	    while(j<odd.size()){
	        ans = (ans*odd[j])%mod;
	        j++;
	    }
	    while(k<even.size()){
	        ans = (ans*even[k])%mod;
	        k++;
	    }
	    cout<<ans<<endl;
	    
	}
	return 0;
}
