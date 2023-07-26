#include<iostream>
#include<math.h>
using namespace std;
class Event
{
	public :
		int NumberofGuests,Numberofminutes,Test,Numberofserver,cost1,cost2;
		char name[10],CustomerName[50];
		float total,Averagecost,DepositAmount,TotalFoodCost,CostofDinner,total_cost; 
		double 	Costforoneserver,CostperHours,CostperMinute;
		//diplay the details using function
		void get_details()
		{
			cout<<"\n**********Event Management System*************\n";
			cout<<"\nEnter the name of the event :\n";
			cin>>name;
			fflush(stdin);
			cout<<"\nEnter the customer's first and last name :\n";
			gets(CustomerName);
			cout<<"\nEnter the number of guests :\n";
			cin>>NumberofGuests;
			cout<<"\nEnter the number of minutes in the event :\n";
			cin>>Numberofminutes;
		}
		//estimate for customer name
		void get_data()
		{
			cout<<"\n==========Event estimate for : hetal sarvaiya===========\n";
			
		}
		//count the number of server using method
		void get_Numberofserver()
		{
			Test = NumberofGuests/20;
		    Numberofserver = ceil(Test);
		    cout<<"\nNumber of server : "<<Test;
		}
		//cost the one server
		void get_costofserver()
		{
			cost1 = (Numberofminutes/60) * 18.50;
			cost2 = (Numberofminutes%60) * .40;
			Costforoneserver = cost1+cost2;
			cout<<"\nThe Cost for server : "<<Costforoneserver;
		}
		//cost of food
		void get_costforfood()
		{
		    TotalFoodCost = NumberofGuests * 20.7;
            cout<<"\nThe Cost for Food is : "<<TotalFoodCost; 
		}
		//average cost per person
		void get_avaerage()
		{
			Averagecost = TotalFoodCost/NumberofGuests;
			cout<<"\nAverage cost per person : "<<Averagecost;
		}
		//total cost
		void get_totalcost()
		{
			total_cost = TotalFoodCost + (Costforoneserver * Numberofserver);
			cout<<"\n\nTotal cost is : "<<total_cost;
		}
		//deposit amount
		void get_depositeamount()
		{
			cout<<"\nPlease deposite a 25% deposit to reserve the event";
			DepositAmount = total_cost*.25;
			cout<<"\nThe deposit needed is : "<<DepositAmount;
		}
};
main()
{
	Event e1;
	e1.get_details();
    e1.get_data(); 
    e1.get_Numberofserver();
    e1.get_costofserver();
    e1.get_costforfood();
    e1.get_avaerage();
    e1.get_totalcost();
    e1.get_depositeamount();
}
