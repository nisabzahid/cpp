#include<bits/stdc++.h>

using namespace std;

int bs(int a[],int data)
{
    int lo = 0, hi = 10,mid;
    while(hi>=lo)
    {

     mid = (hi+lo)/2;
        if(data == a[mid])
        {
            cout<<"data found at "<<mid<<endl;
            return mid;
        }
        else if(data>mid)lo=mid+1;
        else hi=mid-1;
    }
    cout<<"not found"<<endl;
    return -1;

}

int main()
{

    int a[10]= {1,2,3,4,5,6,7,8,9,10};

   int x;
   for(int i=0;i<10;i++)
   {cin>>x;
    cout<<bs(a,x);
}

    cout<<"boss"<<endl;

    return 0;
}
