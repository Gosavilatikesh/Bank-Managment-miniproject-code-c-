//***************************************************************
//                   HEADER FILE USED IN PROJECT
//****************************************************************
#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

//***************************************************************
//                   CLASS USED IN PROJECT
//****************************************************************

class bank

{
//***************************************************************
//      function declaration
//****************************************************************
          char name[100];
          char add[100];
          char y;
          int balance=0;
    public:
         void open_account();
         void deposite_amount();
         void withdraw_amount();
         void display_account();
         };

   void bank::open_account()
   {
  cout<< "Enter your name :- ";
        cin.ignore();
       cin.getline(name,100);
        cout<<"\n Enter your address :- ";
         cin.ignore();
       cin.getline(add,100);
      cout<<"\n Which type of account you want to open\n Saving(s) or Current(c) \n";
        cin>> y;
        cout<<"Enter amount for account activation :-";
        cin>> balance;
        cout<<"\n Congratulatons!!! Your account has breen created\n ";
        }
        void bank::display_account()
{
 cout<<" Your full name:- "<<name;

 cout<<"\n Your address:- "<<add;
cout<<"\n Type of account created:-  "<<y;
cout<<"\n Initial amount you deposit :- "<< balance;
        }
//***************************************************************
//      function to deposit and withdraw amounts
//****************************************************************
        void bank::deposite_amount()
        {
             char q;
           int a;
          cout<<"Enter the amount of money you want to deposit :- \n";
          cin>>a ;
           balance+=a;
        cout<<"\n Total amount of money you deposited :-  "<<balance;
        }

          void bank::withdraw_amount()
         {
              float amount,b;
              cout<< "\n Enter amount of money you want to withdraw :- ";
              cin>>amount;
              balance-=amount;
              cout<< " Balance amount in your account:- "<< balance;
              }

int main()
{
    int ch;
    bank obj;
    char n,x;
  do
  {
//***************************************************************
//      THE MAIN FUNCTION OF PROGRAM
//****************************************************************
 cout<<" WELCOME!!!! \n ";
 cout<<"\n1) Open Account \n";
 cout<<"2) Deposit Amount \n";
 cout<<"3) Withdraw Amount \n";
 cout<<"4) Display Account \n";
 cout<<"5) Exit\n\n";
 cout<<"SELECT the above option to continue further:- \n";
 cin>>ch;
 system("cls");
 switch(ch)
 {
  case 1:
    cout<<"1) Open Account \n";

    obj.open_account();
    break;

    case 2:
        cout<<"2) Deposit Amount \n";
        obj.deposite_amount();
          break;
    case 3:
  cout<<"3) Withdraw Amount \n";
  obj.withdraw_amount() ;
break;
case 4:
 cout<<"4) Display account \n";
 obj.display_account();
break;
case 5:
     if(ch==5)
     {
              exit(1);
              }

default:
        cout<<"Invalid option! Please try again \n";
        }

 cout<<"\n If you want select next option then press :- Y \n";
 cout<<"\n If you want to exit then press:: N ";
  x=getch();
 if(x=='n'||x=='N')
  exit(0);

       }
       while(x=='y'||x=='Y');
getch();
return 0;
}
//***************************************************************
//              END OF PROJECT
//***************************************************************



