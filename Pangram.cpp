void ans (int n, string S)
{
    // Write your code here
    bool flag=true;
    vector<bool> mark(26,false);
    int index;
    
    for(int i=0;i<n;i++)
    {
        if('A'<=S[i]&&'Z'>=S[i])
        index=S[i]-'A';
        else if('a'<=S[i]&&'z'>=S[i])
        index=S[i]-'a';
        else
        continue;
        mark[index]=true;
    }
    for(int i=0;i<=25;i++)
    if(mark[i]==false)
    flag=false;
    if(flag==false)
    cout<<"NO";
    else
    cout<<"YES";
    
}
