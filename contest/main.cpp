#include <iostream>

using namespace std;

int main()
{int N,P,Q;
float Probability;
cout<<"Enter the number of people"<<endl;
cin>>N;

cout<<"Enter the value for P: " <<endl;
cin>>P;
cout << "Enter the value for Q: " <<endl;
cin>>Q;
Probability=P/Q;

cout << "The number of peoplr perticipate: " << N<<endl;

cout << "The probability is: " << Probability <<endl;
    return 0;
}
