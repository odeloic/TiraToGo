//Author: Manzi I.Ode Loic
/* project: TiraToGo
Description: An Airtime borrowing Service, Inspired from TiraTigo Service form Tigo
Base code written in c++
*/

#include<conio.h> //necessary library for the clrscr() function
#include<iostream.h> //necessary library for all the output and input
#include<stdio.h>//necessary library for the string management.


to_pay(float debt, float profit)//a function to calculate the amount to pay
{

float toPay;
profit = (debt * 10) /100; //the amount that will be added to the money borrowed
toPay = debt + profit;
return toPay;


}

payslip( float payback, float debt,float newbalance) //function to present the payslip
{
int i;
char name[20];
for(i= 0; i < 3; i++)
{
cout<<"\t";
}
cout<<"copyright@2014-An Ode Production"<<endl;
cout<<"-------------------------Preparing The Payslip----------------------------------"<<endl;
cout <<"What is your name: ";
gets(name);
clrscr();
for(i= 0; i < 3; i++)
{
cout<<"\t";
}
cout<<"copyright@2014-An Ode Production"<<endl;
cout<<"--------------------------------------------------------------------------------";
for(i=0; i <=3; i++);
{
cout<<endl;

}
for(i=0; i<=3; i++)
 {

 cout<<"\t";
 }
 cout <<"Name: "<<name;
 cout<<endl;
 for(i=0; i<=3; i++)
 {

 cout<<"\t";
 }
 cout<<"Borrowed: "<<debt<<"Rwf";
 cout<<endl;
 for(i=0; i<=3; i++)
 {

 cout<<"\t";
 }
  cout<<"Debt(Money To Pay): -"<<payback<<"Rwf";
  cout<< endl;

 for(i=0; i<=3; i++)
 {

 cout<<"\t";
 };
cout<<"New Balance: "<<newbalance<<"Rwf"<<endl;

 for(i = 0; i <=3; i++)
 {
 cout<<endl;
 }
 for(i=0; i<=3; i++)
 {

 cout<<"\t";
 }

 cout<<"Thank you Dear customer!";
 cout<<endl<<endl;
 cout<<"--------------------------------------------------------------------------------";

}



main()
{
int choice, x, i ;
float balance = 0 , debt , profit, pay_back = 0,new_balance = 0, fine= 0;
a:
balance = new_balance;



 cout<<"************************Welcome to TiraToGo Service ***************************";
 cout<<"                       Official Partner of the world cup 2014    ";
 cout << endl;
 cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
 for(i=0; i < 3; i++)
 {
 cout<<"\t";
 }
 cout <<"Warning: ";
 cout<<endl<<endl;
  for(i=0; i < 1; i++)
 {
 cout<<"\t";
 }
 cout<<"This service is used by people having a balance that is below 50 rwf...";
 cout<<endl<<endl;
  for(i=0; i < 3; i++)
 {
 cout<<"\t";
 }
 cout<<"Enter the balance: ";
 cin>> balance;

 balance = balance+ (fine - pay_back) + (pay_back - new_balance);




clrscr();

 if((balance <= 50) && (pay_back == 0))
 {

 b:
 for(i= 0; i < 3; i++)
{
cout<<"\t";
}
cout<<"copyright@2014-An Ode Production"<<endl;

cout<<endl<<endl<<endl<<endl<<endl<<endl;

		 cout<<"***********You Are required to Choose from the following Options: ********"<<endl<<"Balance: "<<balance<<"Rwf"<<endl<<endl;
		 cout<<"Press 1 for 100 Rwfs"<<endl;
		 cout<<"Press 2 for 200 Rwfs"<<endl;
		 cout<<"Press 3 for 300 Rwfs"<<endl;
		 cout<<"Press 4 for 400 Rwfs"<<endl;
		 cout<<"Press 5 for  500 Rwfs"<<endl<<endl<<endl;
		 cout<<"Any transaction is made in Rwandan Francs, And 10% of the amount borrowed plus the amount is paid back. "<<endl<<endl<<endl;
		 cout<< "Reply: ";
		 cin >> choice;

		 clrscr();
		 switch(choice)

		 {

		 case 1:
		 debt = 100;
		 pay_back = to_pay(debt , profit);
		 new_balance = debt + balance;
		 payslip(pay_back, debt, new_balance);
		 cout<<endl;
		 cout<<"Press 5 to finalize the borrowing or 0 to return to the main menu: ";


		 cin >> x;
		 clrscr();
		 if( x == 5 )
		 {
		 cout<<"--------------------------------------------------------------------------";
			 for( i = 0; i <= 6; i++)
			 {

				  cout<<endl;

			 }

						for(i=0; i <= 2; i++)
						{
							  cout <<"\t";

						}
						cout<<"Thank You Dear customer, your balance is now: "<<new_balance<<" Rwf";
						cout<<endl;
						cout<<endl;
						for(i=0; i <= 2; i++)
						{
							  cout <<"\t";

						}
						cout<<"Press 0 to return to main menu: ";
						cin >> x;
						clrscr();
						if(x == 0)
						{
						goto a ;
						}

						else
						{
						cout<<"Operation Ended by the user!";
						}



		 }
		 else if(x == 0)
		 {
		 goto b;
		 }
		 else
		 {
		 cout <<"Operation ended by the user";
		 }

		 break;

		 case 2:
		 debt = 200;
		  pay_back = to_pay(debt , profit);
		  new_balance = debt + balance;
		  payslip(pay_back, debt, new_balance);
			cout<<endl;
		cout<<"Press 5 to finalize the borrowing or 0 to return to the main menu:  ";

		 cin >> x;
		 clrscr();
		 if( x == 5 )
		 {
		 cout<<"-----------------------------------------------------------------------";
			 for( i = 0; i <= 6; i++)
			 {

				  cout<<endl;

			 }

						for(i=0; i <= 2; i++)
						{
							  cout <<"\t";

						}
						cout<<"Thank You Dear customer, your balance is now: "<<new_balance<<" Rwf";
						cout<<endl;
						cout<<endl;
						for(i=0; i <= 2; i++)
						{
							  cout <<"\t";

						}
						cout<<"Press 0 to return to main menu: ";
						cin >> x;
						clrscr();
						if(x == 0)
						{
						goto a ;
						}

						else
						{
						cout<<"Operation Ended by the user!";
						}



		 }
		 else if(x == 0)
		 {
		 goto b;
		 }
		 else
		 {
		 cout <<"Operation ended by the user";
		 }
		  break;


		  case 3:
		  debt = 300;
			pay_back = to_pay(debt , profit);
			new_balance = debt + balance;
			payslip(pay_back, debt, new_balance);
			 cout<<endl;
			 cout<<"Press 5 to finalize the borrowing or 0 to return to the main menu: ";
		 cout <<"Reply: ";
		 cin >> x;
		 clrscr();
		 if( x == 5 )
		 {
		 cout<<"-----------------------------------------------------------------------";
			 for( i = 0; i <= 6; i++)
			 {

				  cout<<endl;

			 }

						for(i=0; i <= 2; i++)
						{
							  cout <<"\t";

						}
						cout<<"Thank You Dear customer, your balance is now: "<<new_balance<<" Rwf";
						cout<<endl;
						cout<<endl;
						for(i=0; i <= 2; i++)
						{
							  cout <<"\t";

						}
						cout<<"Press 0 to return to main menu: ";
						cin >> x;
						clrscr();
						if(x == 0)
						{
						goto a ;
						}

						else
						{
						cout<<"Operation Ended by the user!";
						}



		 }
		 else if(x == 0)
		 {
		 goto b;
		 }
		 else
		 {
		 cout <<"Operation ended by the user";
		 }
			break;

			case 4:
			debt  = 400;
			 pay_back = to_pay(debt , profit);
			 new_balance = debt + balance;
			 payslip(pay_back, debt, new_balance);
			  cout<<endl;
			  cout<<"Press 5 to finalize the borrowing or 0 to return to the main menu: ";

		 cin >> x;
		 clrscr();
		 if( x == 5 )
		 {
		 cout<<"-----------------------------------------------------------------------";
			 for( i = 0; i <= 6; i++)
			 {

				  cout<<endl;

			 }

						for(i=0; i <= 2; i++)
						{
							  cout <<"\t";

						}
						cout<<"Thank You Dear customer, your balance is now: "<<new_balance<<" Rwf";
						cout<<endl;
						cout<<endl;
						for(i=0; i <= 2; i++)
						{
							  cout <<"\t";

						}
						cout<<"Press 0 to return to main menu: ";
						cin >> x;
						clrscr();
						if(x == 0)
						{
						goto a ;
						}

						else
						{
						cout<<"Operation Ended by the user!";
						}



		 }
		 else if(x == 0)
		 {
		 goto b;
		 }
		 else
		 {
		 cout <<"Operation ended by the user";
		 }
			 break;


			 case 5:
			 debt = 500;
			  pay_back = to_pay(debt , profit);
			  new_balance = debt + balance;
			  payslip(pay_back, debt, new_balance);
				cout<<endl;
				cout<<"Press 5 to finalize the borrowing or 0 to return to the main menu: ";

		 cin >> x;
		 clrscr();
		 if( x == 5 )
		 {
		 cout<<"-----------------------------------------------------------------------";
			 for( i = 0; i <= 6; i++)
			 {

				  cout<<endl;

			 }

						for(i=0; i <= 2; i++)
						{
							  cout <<"\t";

						}
						cout<<"Thank You Dear customer, your balance is now: "<<new_balance<<" Rwf";
						cout<<endl;
						cout<<endl;
						for(i=0; i <= 2; i++)
						{
							  cout <<"\t";

						}
						cout<<"Press 0 to return to main menu: ";
						cin >> x;
						clrscr();
						if(x == 0)
						{
						goto a ;
						}

						else
						{
						cout<<"Operation Ended by the user!";
						}



		 }
		 else if(x == 0)
		 {
		 goto b;
		 }
		 else
		 {
		 cout <<"Operation ended by the user";
		 }
			  break;



			  default:

			  cout<<"The selection you've made is not listed , Try again!"<<endl;
			  cout<<"Press 0 to return back to the menu or else to end the operation: "<<endl;
			  cin >> x;
			  if ( x == 0)
			  {
			  clrscr();
			  goto b;
			  }
			  else
			  {
			  cout<<"Operation Ended by The USER!";
			  }




		 }





}
else if(pay_back > 0)
{
  clrscr();
  cout <<"You still have "<<pay_back<<"rwf to pay";
  cout<<endl;
  cout<<"press 1 to Pay the debt and 0 to quit";
  cin >> x;
  if ( x == 0)
  {
  clrscr();
  cout <<"Operation ended by the user";
  }
  else if(x == 1)
  {
		clrscr();
		cout<<"-------------------------------------------------------------------------";
		for(i = 0 ; i <= 4 ; i++)
		{
		cout <<endl;
		}
		for ( i = 0; i <= 3 ; i++)
		{
		cout <<"\t";
		}
		x:
		cout <<"Enter the money to pay: ";
		cin >> fine;
		if ( fine > pay_back)
		{
			  pay_back= 0;

			  balance = (fine - pay_back) + (pay_back - new_balance);
			  clrscr();
			  cout<<"You have succesfully Paid the debt!";
			  cout <<endl<<"your balance is now "<<balance;
			  cout<<endl;
			  cout<<endl<<"Press 1 to return back to the main menu: ";
			  cin>> x;
			  if(x == 1)
			  {
			  clrscr();
			  goto a;
			  }
			  else
			  {
			  clrscr();
			  cout <<"OPERATION ENDED BY THE USER!";
			  }
		}
		else
		{
			pay_back = pay_back - fine;
			clrscr();
			cout<<"You have paid "<<fine<<" Rwf";
			cout<<endl;
			cout<<"The remaining is: "<<pay_back;
			cout<<endl;
			if(pay_back> 0)
			{
			cout<<"Press 1 to pay the debt ";
			cin >> x;
			if ( x == 1)
			{
			clrscr();
			  goto x;
			}
			else
			{
				clrscr();
				cout<<"OPERATION ENDED BY THE USER";
			}
			}
			else
			{
			  clrscr();
			  cout<< "Debt succesfully paid!";
			  cout<<endl;
			  cout<<"Press 1 to return to main menu ";
			cin >> x;
			if ( x == 1)
			{
			clrscr();
			  goto a;
			}
			else
			{
				clrscr();
				cout<<"OPERATION ENDED BY THE USER";
			}

			}
		}




  }
  else
  {
		clrscr();
		cout<<"OPERATION ENDED BY THE USER!";
  }
}
else
{
for(i= 0; i < 3; i++)
{
cout<<"\t";
}
cout<<"copyright@2014-An Ode Production";
cout<<endl<<endl<<endl<<endl<<endl<<endl;
 for(i= 0; i < 2; i++)
{
cout<<"\t";
}

cout <<"Sorry, your balance is Above 10 Rwfs rwf, your balance is: "<<balance <<endl<<endl<<endl<<endl;

 for(i= 0; i < 1; i++)
{
cout<<"\t";
}
cout<<"Press 0 to return to the main menu, or 5 to spend your balance"<<endl;
  for(i= 0; i < 1; i++)
{
cout<<"\t";
}
cout<<"Or  else to end opeation: ";
cin >> x;
if(x == 0)
{
clrscr();
goto a;
}
else if( x == 5)
{
clrscr();
cout <<"Are you sure you want to spend all your money?(press 1 for ok and 0 to return to menu : ";
cin >> x ;
if( x == 1 )
{
  balance = 0;
  pay_back = 0;
  new_balance = 0;
  fine = 0;
  goto a;
}
else
{
	goto a;
}
}
else
{
clrscr();
cout<<"OPERATION ENDED BY THE USER!";
}
}
}

