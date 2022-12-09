#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	int t;cin>>t;
	int even=0,odd=0;
	while(t--){
	    int n,q;

	    scanf("%d", &n);
	    scanf("%d", &q);
	    int odd= 0 ,even = 0 ;
	    for (int i = 0 ;i<n; i++){
	        int temp; 
	        scanf("%d", &temp);
	        int res = __builtin_popcount(temp);
	        if (res&1) odd++;
	        else even++;
	    }
	    while(q--){
	        int temp;
	        scanf("%d", &temp);
	        int res= __builtin_popcount(temp);
	        if(res&1){
	            printf("%d ",odd);
	            printf("%d\n",even);
	            
	        }
	        else 
	        {
	            printf("%d ",even);
	            printf("%d\n",odd);
	            
	        }
	    }
	    
	}
	return 0;
}
