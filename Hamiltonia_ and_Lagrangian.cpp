#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    vector<int>b;
    for(int k=0; k<n; k++)
    {
        int p=0;
            for(int j=k+1; j<n; j++)
            {
                if(A[k]<A[j])
                {
                    break;
                }
                else
                {
                    p+=1;
                }
            }
            if(p==n-k-1)\
            {
            b.push_back(A[k]);
            }
    }
    for(int i=0; i<b.size(); i++)
        {
            cout << b[i] <<" ";
        }


    return 0;
}
