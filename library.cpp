#include<iostream>
using namespace std;
int count=0;
int count1=0;
class Library
{
	public:
		long long int prn;
	    int teacher_id,n,ns;
		char teacher_name[15][50],student_name[15][50],subject_books[15][50],studnet_books[15][50];
		virtual void get_data()=0;
		virtual void display()=0;
};

class teacher: public Library
{
	public:
		void get_data()
		{
			cout<<"\n TEACHER DETAILS: ";
			cout<<"\n enter name: ";
			for(int i=0;i<15;i++)
			{
				if(i==count)
				{
					cin>>teacher_name[count];
				}
			}
			cout<<"\n Enter ID: ";
			cin>>teacher_id;
			cout<<"\n enter no. of subject books issued  : ";
			cin>>n;
			for(int j=0;j<15;j++)
			{
				if(j<n)
				{
					cout<<"\n subject name: ";
					cin>>subject_books[j];
				}
			}
			count++;
		}
		void display()
		{
			cout<<"\n \n \n *************************************** teacher library card****************************\n \n ";
			cout<<"\n name : ";
			for(int i=0;i<15;i++)
			{
				if(i==count-1)
				{
					cout<<teacher_name[i];
				}
			}
			cout<<"\n teacher id : "<<teacher_id;
			cout<<"\n subject books issued : \n ";
			for(int k=0;k<15;k++)
			{
				if(k<n)
				    cout<<"\n "<<k+1<<" "<<subject_books[k];
			}
		}
};

class student : public Library
{
	public:
		void get_data()
		{
			cout<<"\n \n \n Student details: ";
			cout<<"\n enter name: ";
			for(int i=0;i<15;i++)
			{
				if(i==count1)
				{
					cin>>student_name[count1];
				}
			}
			cout<<"\n Enter PRN: ";
			cin>>prn;
			cout<<"\n enter no. of subject books issued : ";
			cin>>ns;
			for(int j=0;j<15;j++)
			{
				if(j<ns)
				{
					cout<<"\n subject name: ";
					fflush(stdin);
					cin>>studnet_books[j];
				}
			}
			count1++;
		}
		void display()
		{
			cout<<"\n \n \n *************************************** student library card****************************\n \n ";
			for(int i=0;i<15;i++)
			{
				if(i==(count1-1))
			        cout<<"\n name : "<<student_name[i];
		    }
			cout<<"\n prn : "<<prn;
			cout<<"\n subject books issued : \n ";
			for(int k=0;k<15;k++)
			{
				if(k<ns)
				{
					cout<<"\n "<<k+1<<" "<<studnet_books[k];
				}
				    
			}
		}
};

main()
{
	Library *l;
	teacher t;
	student s;
	
	l=&t;
	l->get_data();
	l->display();
	
	l=&s;
	l->get_data();
	l->display();
	
}
