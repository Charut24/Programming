#include<iostream>
using namespace std;

void swap_by_value(int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	
	cout<<"\n ******* AFTER SWAPPING *******";
	cout<<"\n \n a: "<<a;
	cout<<"\n b: "<<b;
}
void swap_by_ref(int *a, int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
	
	cout<<"\n ******* AFTER SWAPPING *******";
	cout<<"\n \n a: "<<*a;
	cout<<"\n b: "<<*b;
}

main()
{
	int a, b, choice, y;
	do
	{
		cout<<"\n Enter value of a: ";
	    cin>>a;
	    cout<<"\n \n Enter value of b: ";
		cin>>b;
		cout<<"\n \n  Select from following.";
	    cout<<"\n Type 1 to swap by value.";
	    cout<<"\n Type 2 to swap by reference.";
	    cout<<"\n enter your choice: ";
	    cin>>choice;
	    switch(choice)
	    {
	    	case 1:
	    		cout<<"\n ******** BEFORE SWAPPING ******* ";
	    		cout<<"\n \n a: "<<a;
	    		cout<<"\n b: "<<b;
		    	swap_by_value(a,b);
	    		break;
	    	
	    	case 2:
	    		cout<<"\n ******** BEFORE SWAPPING ******* ";
	    		cout<<"\n \n a: "<<a;
	    		cout<<"\n b: "<<b;
		    	swap_by_ref(&a,&b);
		    	break;
		    
		    default:
		    	cout<<"\n WRONG CHOICE!!!!!!!";
		}cout<<"\n Type 1 to continue and 0 to exit: ";
		cin>>y;
		
	}while(y==1);
}


