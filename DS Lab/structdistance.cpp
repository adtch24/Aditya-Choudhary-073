#include <iostream>
#include <bits/stdc++.h>
 using namespace std;
 struct distance
 {
    int km;
    int m;
 };
  int main()
  {
 struct distance d1;
 struct distance d2;
 struct distance d3;
 int a,b;
 cout<<"enter 1st distance";
 cin>>d1.km>>d1.m;
 cout<<"enter 2nd distance";
 cin>>d2.km>>d2.m;
 d3.m=d1.m+d2.m;
 d3.km=d1.km+d2.km+(d3.m/1000);
 d3.m=(d3.m)%1000;
 cout<<d3.km <<d3.m;

  }



