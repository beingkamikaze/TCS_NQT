void removeAllOccurrencesOfChar(char input[], char c) {
    // Write your code here
    int j,n=strlen(input);
    for(int i=j=0;i<n;i++)
    {
        if(input[i]!=c)
        input[j++]=input[i];
    }
    input[j]='\0';
}
