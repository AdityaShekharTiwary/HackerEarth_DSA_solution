#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        cin>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>> arr[i];
        }
        sort(arr,arr+n);
        if(arr[0]>=k){
            cout<< "0" << endl;
        }
        else{
            cout<< k - arr[0] << endl;
        }
    }
   return 0;
}
