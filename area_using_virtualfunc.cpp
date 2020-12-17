#include<iostream>
using namespace std;

class polygon
{
	protected:
		float radius,area;
	public:
		virtual void get_data()
		{
			cout<<"\n Enter the radius: ";
		}
		 void calculate()
		{
		    area=3.14*radius*radius;
			cout<<"\n area of circle: "<<area;
	    }
};

class circle :public polygon
{
	public:
		void get_data()
		{
			cin>>radius;
		}
};

int main()
{
	polygon *ptr;
	circle c;
	ptr=&c;
	ptr->polygon::get_data();
	ptr->get_data();
	ptr->calculate();
}
