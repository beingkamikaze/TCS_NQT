bool checkPalindrome(char str[]) {
    // Write your code here
    int l=0;
    int h=strlen(str)-1;
    while(h>l)
    {
        if(str[l++]!=str[h--])
        {
            return false;
        }
    }
    return true;
}
