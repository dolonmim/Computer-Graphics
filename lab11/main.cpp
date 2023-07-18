#include <iostream>

using namespace std;

int main()
{
    int arr[5],n,i,max,min;


    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    cout<<"Enter the element of the array: "<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    min=arr[0];
    for(i=0;i<n;i++)
    {
        if(min>arr[i])
            min=arr[i];
    }
    cout<<"Minimum value is= "<<min<<endl;
    cout<<"Maximum value is= "<<max<<endl;



    return 0;
}
