//Link: https://www.codingninjas.com/studio/guided-paths/tcs-nqt-test-preparation-path/content/125228/offering/1467766
int linearSearch(int *arr, int n, int x)
{
    //Write your code here
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        return i;
    }
    return -1;
}
