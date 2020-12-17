#include<iostream>

using namespace std;

class Test{
    int a;
    public:
      friend istream& operator >> (istream&,Test&);
      friend ostream& operator << (ostream&,Test&);
      bool operator < (Test&);
};

istream & operator >> (istream &input,Test &t)
 {
     input>>t.a;
     return input;
 }

 ostream & operator << (ostream &output,Test &t)
 {
     output<<t.a;
     return output;
 }

 bool Test::operator < (Test &t)
 {
    if(a<t.a)
      return true;
    else
      return false;
 }

 int main()
 {
     Test t1,t2;
     cout<<"\nEnter a integer value in the first object : ";
     cin>>t1;
     cout<<"\nEnter a integer value in the second object : ";
     cin>>t2;
     cout<<"\n\nObject 1 : "<<t1<<"\t\t Object 2 : "<<t2;
     cout<<"\n\nNow checking if object 1 less than object 2 or not?\n\n";
     if(t1<t2)
          cout<<t1<<" is less than "<<t2;
     else
          cout<<t1<<" is not less than "<<t2;
    return 0;
 }
