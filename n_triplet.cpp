#include <bits/stdc++.h>
using namespace std;

bool isprime(long long n){
    if(n==1) return false;
    if(n==2||n==3) return true;
    if(n%2==0||n%3==0) return false;
    for(long long i=5;i*i<=n;i=i+6){
        if(n%i==0||n%(i+2)==0)
            return false;
    }
    return true;
    
}

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    if(n==1||isprime(n)){
	        cout<<-1<<endl;
	    }
	    else{
            int val=0;
	        int j=0;
	        long long i;
	        for(i=2;i*i<=n;i++){
	            if(n%i==0){
	                val=i;
	                j++;
	                break;
	            }
	        }
	        if(n/val==val){
	            cout<<-1<<endl;
	        }
	        else{
	            cout<<1<<" "<<val<<" "<<n/val<<endl;
	        }
	    }
	    
	}
	return 0;
}
