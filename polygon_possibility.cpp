#include<iostream>
using namespace std;
int main()
{
    int a,b,c,i;

    cin>>a;

    for(i=0;i<a;++i)

    {

        cin>>b;

        int max=0,sum=0,m;

        for(c=0;c<b;++c)

        {

            cin>>m;

            sum=sum+m;

            if(m>max)

                max=m;

        }

        if(max<(sum-max))

            cout<<"Yes"<<endl;

        else

            cout<<"No"<<endl;

    }

}
