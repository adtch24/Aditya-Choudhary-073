#include <iostream>
 using namespace std;
 int main()
 {
    int n;
    cout<<"enter the decimal no.";
    cin>>n;
    DecimalToAnyBase(n,2);
    cout<<"\n";
    DecimalToAnyBase(n,8);
    cout<<"\n";
    DecimalToAnyBase(n,16);

    return 0;

 }