//link: https://www.codingninjas.com/studio/guided-paths/tcs-nqt-test-preparation-path/content/125228/offering/1467765
#include<iostream>
using namespace std;

int main(){
    /* Read input as specified in the question.
     * Print output as specified in the question.
     */
     int n;cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     int sum=0;
     for(int i=0;i<n;i++)
     sum+=arr[i];
     cout<<sum;
    
}


