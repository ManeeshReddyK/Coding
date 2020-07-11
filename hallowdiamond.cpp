#include<iostream>
using namespace std;
int main() {
    int t,k=1;   
    cin>>t;
    while(t--)
    {
        cout<<"Case #"<<k<<":"<<endl;
        int a,b,l=1,m=0;
        cin>>a;
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<a;j++)
            {
                if(i<=a/2)
                {
                    if(j==a/2-i || j==a/2+i)
                    {
                        cout<<"*";
                    }
                    else
                    {
                        cout<<" ";
                    }
                }
                else
                {
                    m=i-(2*l);
                   if(j==(a/2)-m || j==(a/2)+m)
                    {
                        cout<<"*";
                    }
                    else
                    {
                        cout<<" ";
                    }
                }
            }
            if(i>a/2)
             l++;
            cout<<endl;
        }
        k++;
    }
    return 0;
}
