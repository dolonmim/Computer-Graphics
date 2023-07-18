#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    a=10;
    b=20;
    cout<<"Please Enter a value"<<endl;
    cin>>c;
    cout<<"Please Enter a value"<<endl;
    cin>>d;

    if(a==c)
    {
        cout<<"One number is matched"<<endl;
    }
    if(b==d)
        {
        cout<<"One number is matched"<<endl;
    }
    if(a==c && b==d)
    {
        cout<<"Two numbers are matched"<<endl;
    }
    if(a==!c && b==!d)
    {
        cout<<"No number is matched"<<endl;
    }
    return 0;
}
