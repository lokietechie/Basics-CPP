#include<iostream>

using namespace std;


int main()
{
    int num[100],i,value,n,largest,smallest;

    cout<<"Enter the no. of elements to check largest and smallest values=";
    cin>>value;

    for(i=0;i<value;i++)
    {
        cout<<"element no. "<<i+1<< "=";
        cin>>num[i];
    }

        cout<<"Entered array of elements =";

        for(i=0;i<value;i++)
    {
        cout<<num[i]<<" ";
    }

    n=0;
    for(i=0;i<value;i++)
    {
        if(num[i]>n)            // comparing with the value of n=0 at initial
        {
            largest = num[i];
            n = num[i];
        }
    }
    cout<<endl;
    cout<<"The largest number in an entered array is= "<<largest<<endl;

    n =num[1];                  // initializing 'n' with 2nd element in array to compare other elements in below loop.


    for(i=0;i<value;i++)
    {

        if(num[i]<n)
        {
            n =num[i];
            smallest = n;
        }
    }
    cout<<"The Smallest number in an entered array is="<<smallest<<endl;
}

