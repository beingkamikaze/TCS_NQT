#include<iostream>
using namespace std;
int sum(int n)
{
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        ans=ans+i;
    }
    return ans;
}
int prd(int n){
    int ans=1;
    for(int i=1;i<=n;i++)
    ans=ans*i;
    return ans;
}
int main() {
	// Write your code here
    int n;cin>>n;
    int c;cin>>c;
    if(c!=1 && c!=2)
    cout<<"-1";
    else
    {
        if(c==1)
        cout<<sum(n);
        else
        cout<<prd(n);
    }
    
	
}
