//Author -> Samkit Jain
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long int


ll sort(const void *a,const void *b) //qsort(x,n,sizeof(ll),sort)
{
   return(*(ll*)a - *(ll*)b);
}
ll gcd(ll a,ll b)
{
    ll a1,b1;
    if(b!=0)
    {
        a1=b;
        b1=a%b;
        return gcd(a1,b1);
    }
    return a;
}
ll binary(ll n)
{
    ll binary=0,temp=1;
    while(n>0)
    {
        binary=binary+((n%2)*temp);
        n=n/2;
        temp=temp*10;
    }
    return binary;
}
ll no_of_bits(ll n)
{
    return (int)log2(n)+1;
}
ll prime(ll n)
{
    if(n==0 || n==1)
    {
        return 0;
    }
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {return 0;}
    }
    return 1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    ll t;
    cin>>t;
    for(ll test=1;test<=t;test++)
    {
        ll n,a,b;
        ll sure=0;
        cin>>n>>a>>b;

        if(n==1)
        {
            cout<<"Yes"<<endl;
            sure=1;
        }
        else if(a==1&&b==1)
        {
            cout<<"Yes"<<endl;
            sure=1;
        }        
        else if(a==1)
        {
            if((n-1)%b==0)
            {
                cout<<"Yes"<<endl;
                sure=1;
            }
        }
        else
        {
            ll n1 = 1;
            for(ll i=0;i<=32;i++)
            {
                if(n-n1<0)
                {
                    break;
                }
                if((n-n1)%b==0)
                {
                    cout<<"Yes"<<endl;
                    sure=1;
                    break;
                }  
                n1*=a;
            }
        }
        


        if(sure==0)
        {
            cout<<"No"<<endl;
        }



    }
    return 0;
}
