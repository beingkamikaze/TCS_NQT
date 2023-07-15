void trimSpaces(char input[]) {
    // Write your code here
    int j,n=strlen(input);
    for(int i=j=0;i<n;i++)
    {
        if((input[i]>='a'&&input[i]<='z') or (input[i]>='A'&&input[i]<='Z'))
        input[j++]=input[i];
    }
    input[j]='\0';
}
