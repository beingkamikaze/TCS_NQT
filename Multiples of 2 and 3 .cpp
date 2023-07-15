// Link: https://www.codingninjas.com/studio/guided-paths/tcs-nqt-test-preparation-path/content/125228/offering/1467767
int FindSum(int *arr,int l)
{
//Write code here 
int sum=0;
for(int i=0;i<l;i++)
{
    if(arr[i]%2==0 || arr[i]%3==0)
    sum+=arr[i];
}
return sum;
}
