#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;


int main() {
	// your code goes here
	int n,m;
	cin>>n>>m;
	vector<long long> comp(n+1,0);
	for(int i=1;i<=n;i++){
	    cin>>comp[i];
	}
	while(m--){
	    int compnum,decomp;
	    cin>>compnum>>decomp;
	    while(decomp--){
	        long long idx,tot;
	        cin>>tot>>idx;
	       // long long t = comp[compnum];
	        
	        comp[idx] = ((comp[idx]%mod)+((comp[compnum]%mod)*(tot)%mod)%mod)%mod;
	       // cout<<"comp[compnum]= "<<comp[compnum]<<" comp[idx]= "<<comp[idx]<<endl;
	        
	    }
	    comp[compnum]=0;
	}
	for(int i=1;i<=n;i++){
	    cout<<comp[i]%mod<<endl;
	}
	return 0;
}
