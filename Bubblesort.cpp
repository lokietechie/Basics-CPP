#include<iostream>

using namespace std;

int main()
{
    int a[100],n,temp;
    cout<< "Enter the no of elements for sorting";
    cin>> n;
    for(int i=1; i<=n;i++)
    {
        cout<<"Enter the "<< i << " element=  ";
        cin>> a[i];
    }

    for(int i=1; i<=n;i++)
    {
    for(int j=1; j<n;j++)
    {
        if(a[j]>a[j+1])
        {
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
    }
    }
     for(int i=1; i<=n;i++)
    {
        cout<<a[i]<<'\n';
    }
}
