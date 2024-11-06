#include<iostream>
#include<vector>
#include<list>
using namespace std;
class base{
    int x;
    vector<double>v;
     public:
         base(int y,vector<double>z):x{y},v{z}{}
         int getX() const
         {
           return x;
         }
         vector<double>getV() const
         {
            return v;
         }
};

class derived:public base{
    list<bool>l;
      public:
         derived(int y,vector<double>z);
         derived(int y,vector<double>z,list<bool> el);
         void print()
         {
             cout<<"x:"<<getX()<<endl;
             cout<<"v:";
             vector<double>vec=getV();
             for(double val: vec)
             {
                cout<<val<<" ";
             }
             cout<<endl;
             cout<<"l:";
            for (bool b:l){
                cout<<(b ? "true" :"false")<<" ";
            }
         }
};
derived::derived(int y,vector<double>z):base{y,z},l{} {}
derived::derived(int y,vector<double>z,list<bool> el):base{y,z},l{el}{}

int main()
{
   derived d{10,{1.5,2.5,3.5},{true,false}};
   d.print();
}