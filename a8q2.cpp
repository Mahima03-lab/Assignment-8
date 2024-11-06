#include<iostream>
using namespace std;
class base{
public:
       virtual void iam(){ cout<<"base\n";}
};

class D1: public base{
          void iam(){cout<<"D1\n";}
};

class D2: public base{
          void iam(){cout<<"D2\n";}
};

void print(base* bptr)
{
    bptr->iam();
}
int main()
{
    base b;
    D1 d1;
    D2 d2;
    print(&b);
    print(&d1);
    print(&d2);
}