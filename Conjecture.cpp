#include<bits/stdc++.h>
using namespace std;
vector<int>v;
const int mx=1e6;
vector<bool>v1(mx+1,0);
map<int,int>cnt;
void sieve()
{
    for(int i=2;1LL*i*i<=mx;i++){
        if(v1[i]==0){
            for(int j=i*i;j<=mx;j+=i){
                v1[j]=1;
            }
        }
    }
    for(int i=2;i<=mx;i++){
        if(v1[i]==0){
            v.push_back(i);
            cnt[i]=1;
        }
    }
}
int main()
{
    sieve();
    while(1){
        int a;
        cin>>a;
        if(a==0){
            return 0;
        }
        for(int i=0;i<v.size();i++){
            if(cnt[a-v[i]]==1){
                cout<<a<<" = "<<v[i]<<" + "<<a-v[i]<<endl;
                break;
            }
        }
    }
}
