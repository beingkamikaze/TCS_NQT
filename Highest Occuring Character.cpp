char highestOccurringChar(char input[]) {
    // Write your code here
    int count[256]={0};
    int len=strlen(input);
    int max=0;
    char result;
    for(int i=0;i<len;i++)
    {
        count[input[i]]++;
        if(max<=count[input[i]]){
            max=count[input[i]];
            result=input[i];
        }
    }
    return result;
}
