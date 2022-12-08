#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;
        cin>>s;
        vector<string> a;
        for(int i=0;i<n;i++){
            string temp;
            temp += s[i];
            while(i+1<n && s[i]==s[i+1]){
                temp+=s[i+1];
                i++;
            }
            a.push_back(temp);
        }
        map<string,long long>m;
        long long length=0,freq=0;
        for(int i=0;i<a.size();i++){
            m[a[i]]++;
            long long b=a[i].size();
            length = max(length,b);
            long long c = m[a[i]];
            freq = max(freq,c);
        }
        long long length1=0;
        if(freq>1){
            for(int i=0;i<a.size();i++){
                if(m[a[i]]>1){
                    long long b = a[i].size();
                    length1 = max(length1,b);
                }
            }
        }
        cout<<max(length-1,length1)<<endl;
    }
}
