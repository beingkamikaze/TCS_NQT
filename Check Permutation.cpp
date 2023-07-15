bool isPermutation(char input1[], char input2[]) {
    // Write your code here
    int len1=strlen(input1);
    int len2=strlen(input2);
    if(len1!=len2)
    return false;

    int count1[256]={0};
    int count2[256]={0};
    for(int i=0;i<len1;i++)
    {
        count1[input1[i]]++;
        count2[input2[i]]++;
    }
    for(int i=0;i<256;i++)
    {
        if(count1[i]!=count2[i])
        return false;
    }
    return true;

}
