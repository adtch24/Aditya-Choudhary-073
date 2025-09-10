#include <iostream>
 using namespace std;
 struct stk
 {
    int item[100];
    int top;
 };
struct stk s;
/*********/
 void Initialize()
 {
   s.top=-1;
 }
 /******/
  bool isempty()
  {
   if (s.top==-1)
   {
     return true;
   }
   else{
    return false;
   }
}
   /******/
   
   int push(int x)
   {
     
    if(s.top==99)
    {
        cout<<"\n overflows";   
    }
    else{
        s.top++;
        s.item[s.top]=x;
    }
   }
   /*******/
   int a;
   int pop()
   {
     
    if (isempty())
    {
        cout<<"\n underflows";
        exit(1);
    }
    else

    {
       a=s.item[s.top];
        s.top--;
        return a;
    }
   }
   /******/
   int stacktop()
   {
     cout<<s.item[s.top];
   }
   /*****/
  int main()
  {
    Initialize();
    push(34);
    push(40);
    push(58);
    push(67);
    cout<<pop();
    cout<<pop();
    cout<<pop();
    cout<<pop();
    cout<<pop();
    cout<<pop();
    return 0;
  }
 