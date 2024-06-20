#include<iostream>
using namespace std;
#include<cstdlib>
#include<ctime>
bool status;
class loginInfo{   // class for saving coustomers login information
    private:

    int id;
    int pass;

    public:

    loginInfo()
    {
        id=0;pass=0;
    }

    void enterInfo(int num1,int num2)
    {
      id=num1;
      pass=num2;
    }

    bool verify(int userid,int userpass )  // this function verify id password ,when user try to login
    {

     if(userid==id && userpass==pass)
     {
        return true;
     }

     else
     {
        return false;
     }

    }

     void resetPass()
     {
        // cout<<"_\n";
        // cout<<"ENTER YOUR NEW PASSWORD:";
        // cin>>pass;
        // cout<<"PASSWORD RESET SUCESSFUL\n";
            do
        {
             cout<<"\n ENTER YOUR NEW FOUR DIGIT PASSWORD ";
             cin>>pass;
             if(pass <1000 || pass>9999)
             {
                cout<<"INVALID SOURCE ";
             }

        }
        while(pass <1000 || pass>9999 );
        {
            cout<<"PASSWORD RESET SUCESSFULLY : \n";
        }
     }

};
class temp
{
public:

int balance,uniqueId,age;
long long phone_no;
long long adhhar_no;
int birthdate;
string firstName;
string middleName;
string lastName;
char gender;
int pass;

int i=1002;

temp()
{
    i++;
    uniqueId=i;
}

     void getInfo() {
        cout<<"\nHELLO DEAR CUSTOMER!"<<endl;
        cout<<"TO CONTINUE YOUR LOGIN PROCESS PLEASE PROVIDE SOME DETAILS TO OUR BANK: \n"<<endl;
        cout << "FIRST NAME:";
        cin>>firstName;
        cout << "MIDDLE NAME:";
        cin>>middleName;
        cout << "LAST NAME:";
        cin>>lastName;
        do {
        cout << "GENDER (M/F): ";
        cin >> gender;
        if(gender != 'M' && gender != 'F')
        {   
             cout << "PLEASE ENTER IN LETTERS  (*M or F*)" << endl;
          }
          } while (gender != 'M' && gender != 'F');

          do {
            cout << "AGE:";
            cin >> age;
            if (age < 0 || age > 100) {
                cout << "PLEASE ENTER VALID AGE:";
            }
         } while (age < 0 || age > 100);

          do {
            cout << "AADHAR NUMBER (12 DIGITS):";
            cin >> adhhar_no;
            if (to_string(adhhar_no).length() != 12) {
                cout << "(PLEASE ENTER 12 DIGIT NUMBERS.)" << endl;
            }
         } while (to_string(adhhar_no).length() != 12);
         do {
            cout << "PHONE NUMBER (10 DIGITS):";
            cin >> phone_no;
            if (to_string(phone_no).length() != 10) {
                cout << "(PLEASE ENTER  10 DIGIT NUMBERS)\n" << endl;
            }
         } while (to_string(phone_no).length() != 10);
             do
        {
             cout<<"\n CREATE FOUR DIGIT PASSWORD ";
             cin>>pass;
             if(pass <1000 || pass>9999)
             {
                cout<<"PLEASE CREATE FOUR DIGIT PASSWORD ";
             }

        }
        while(pass <1000 || pass>9999 );
        {
            cout<<" \n";
        }
        cout<<"YOUR UNIQUE ID IS:"<<uniqueId;
        cout<<"\n";
     }

      void display()
    {   
        cout<<"\n";
        cout<<"FIRST NAME: "<<firstName<<endl;
        cout<<"MIDDLE NAME: "<<middleName<<endl;
        cout<<"LAST NAME: "<<lastName<<endl;
        cout<<"BIRTH DATE: "<<birthdate<<endl;
        cout<<"ADHHAR NO: "<<adhhar_no<<endl;
        cout<<"PHONE NO: "<<phone_no<<endl;
    }
};

class customer
{

protected:

int balance;
long long phone_no;
long long adhhar_no;
int birthdate;
string firstName;
string middleName;
string lastName;

public:

customer()
    {
        balance=0;
        phone_no=0;
        adhhar_no=0;
        birthdate=0;
        firstName='b';
        middleName='b';
        lastName='b';

    }
    void Initialize(int BALANCE,long long PHONE_NO, long long ADHAR_NO,int BIRTHDATE,string FIRSTNAME, string  MIDDLENAME ,string LASTNAME)
    {
        balance=BALANCE;
        phone_no=PHONE_NO;
        adhhar_no=ADHAR_NO;
        birthdate=BIRTHDATE;
        firstName=FIRSTNAME;
        middleName=MIDDLENAME;
        lastName=LASTNAME;
    }

    void display()
    {   
        cout<<"\n";
        cout<<"FIRST NAME: "<<firstName<<endl;
        cout<<"MIDDLE NAME: "<<middleName<<endl;
        cout<<"LAST NAME: "<<lastName<<endl;
        cout<<"BIRTH DATE: "<<birthdate<<endl;
        cout<<"ADHHAR NO: "<<adhhar_no<<endl;
        cout<<"PHONE NO: "<<phone_no<<endl;
    }
    void Displaybalance()
    {
    cout<<"\n\n";
    cout<<"your account balance is:"<<balance;
    cout<<endl;
    }
    bool TransferMoney(customer& recipient, int amount) {

        if (balance >= amount) {
            balance -= amount;
            recipient.balance += amount;
            cout << "Transfer successful!" << endl;
            return true;
        }
        else {
            cout << "Insufficient balance for transfer!" << endl;
            return false;
        }
    }

    void welcome()
    {
        cout<<"                    WELCOME "<<firstName<<" !!..                    \n";
    }

 void changeinfo()
 {
    int y;

                 back:       
                 do{
                  cout<<"SELECT WHICH INFORMATION YOU WANT TO CHANGE \n";
                   cout<<"1.FIRST NAME\n";
                   cout<<"2.MIDDLE NAME\n";
                   cout<<"3.LAST NAME\n";
                  cout<<"4.DATE OF BIRTH\n";
                  cout<<"5.PHONE NUMBER\n";
                   cout<<"6.BACK\n";
                   cout<<"7.GO TO LOGIN\n";
                   cout<<"8.EXIT\n";
                   cin>>y;
                     switch(y)
                 {
                 case 1:
                 cout<<"FIRST NAME:";
                 cin>>firstName;
                  break;

                 case 2:
                 cout<<"MIDDLE NAME:";
                  cin>>middleName;
                  break;

                  case 3:
                  cout<<"LAST NAME:";
                    cin>>lastName;
                  break;

                  case 4:
                  cout<<"BIRTHDATE:";
                 cin>>birthdate;
                 break;

                 case 5:
                 cout<<"PHONE NO:";
                 cin>>phone_no;
                 break;

                 case 6:

                 goto back;

                 break;

                 case 7:
                //  goto start;
                 break;

                 case 8:
                 exit(0);
                 break;
                    }
                     }
                 while(y!=7);

            }      


};
class AdminInfo:public customer
{   // class for saving admins login information
    private:

    int id;
    int pass;
    string adminName;

    public:

     void enterInfo(int num1,int num2,string name)
    {
      id=num1;
      pass=num2;
      adminName=name;
    }


    bool verify(int userid,int userpass )  // this function verify id password ,when user try to login
    {

     if(userid==id && userpass==pass)
     {
        return true;
     }

     else
     {
        return false;
     }

    }

 void welcome()
    { 
        cout<<"                    WELCOME "<<adminName<<" !!..                    \n";
    }

};

int main()

{
    temp T[100];

    customer C[10];
    loginInfo A[10];
    AdminInfo B[5];
    C[1].Initialize(5000,89778979909,121223432321,26032005,"CHANDRAHAS","DHARAMAVEER","KORI");
    C[2].Initialize(1000,89778979904,121223432322,16032005,"TEJAS","SUDHIR","INGALE");

    B[0].enterInfo(1000,2004,"SWAPNIL"); // admin swapnil
    A[1].enterInfo(1001,2005); // user chandrahas 
    A[2].enterInfo(1002,2006); //user tejas 
    int choice,id,pass,adminID,adminPASS;
   back: 
    do{
    cout<<"\n\n__________________WELCOME TO OUR BANK__________________\n";
    start:
    cout<<"\n\n";
    cout<<"ENTER RESPECTIVE NUMBER:\n";
    cout<<"1.CUSTOMER LOGIN\n2.ADMINS LOGIN\n3.NEW CUSTOMER SIGNUP\n4.EXIT PROGRAM\n";
    cin>>choice;
    cout<<"\n\n";
    }
    while(choice!=1 && choice!=2 &&choice!=3 &&choice!=4);

    if(choice==1)
    {
        cout<<"ENTER YOUR UNIQUE ID:";
        cin>>id;
        cout<<"PASSWORD:";
        cin>>pass;


       if( A[id%1000].verify(id,pass))
       {

        cout<<"\n";
        C[id%1000].welcome();

        // welcome function

        do{

        cout<<"\n\n";
        cout<<"1.DISPLAY INFO\n2.BALANCE\n3.RESET PASSWORD\n4.TRANSFER MONEY\n5.RETURN TO LOGIN\n6.EXIT\n:";
        cin>>choice;
        switch (choice)
        {
        case 1:

           C[id%1000].display();

            break;

        case 2:

           C[id%1000].Displaybalance();

            break;

        case 3:

          A[id%1000].resetPass();


          break;

        case 4:     

                    cout<<"\n\n";

                    int recipientId, amount;
                    cout << "Enter recipient's ID: ";
                    cin >> recipientId;
                    cout << "Enter amount to transfer: ";
                    cin >> amount;
                    C[id % 1000].TransferMoney(C[recipientId % 1000], amount);
                    break;
        case 5:


         goto start;



        break;

        case 6:

            exit (0);

        break;

        default:

        cout<<"INVALID CHOICE.TRY AGAIN !! .......\n";

            break;
        }

        }
        while(choice!=5);


       }

       else
       {
        cout<<"INVALID CREDENTIALS !! TRY AGAIN.....\n";
        goto start;

       }
    }
    else if(choice==2)
    {
        cout<<"ENTER YOUR UNIQUE ID:";
        cin>>adminID;
        cout<<"PASSWORD:";
        cin>>adminPASS;


       if( B[adminID%1000].verify(adminID,adminPASS))
       {
        // add functions for admin here.
        int choice2;
             cout<<"LOGIN SUCESSFUL:\n\n";
              B[adminID%1000].welcome();

         do{

            cout<<"SELECT YOUR CHOICE:\n";
            cout<<"1.VERIFICATION OF CUSTOMER \n";
            cout<<"2.EDIT USER INFORMATION \n";   
            cout<<"3.BACK \n";
            cout<<"4.EXIT \n";   
            cin>>choice;
            switch(choice)
            {
              case 1:

                cout<<"ENTER CUSTOMER'S UNIQUE ID:";
                cin>>id;
                cout<<"DETAILS OF USER:\n";
                T[id%1000].display();

                 cout<<"\n\n";
                 cout<<"ENTER RESPECTIVE NUMBER:\n1.ACCEPT ACCOUNT\n";
                 cout<<"2.REJECT ACCOUNT\n:";
                 cin>>choice2;
                 cin.ignore();

                 switch (choice2) 
                 {
                 case 1:
                   cout<<"CREATING NEW USER....... !!\n";
                   C[T->uniqueId%1000].Initialize(0,T[T->uniqueId%1000].phone_no,T[T->uniqueId%1000].adhhar_no,T[T->uniqueId%1000].birthdate,T[T->uniqueId%1000].firstName,T[T->uniqueId%1000].middleName,T[T->uniqueId%1000].lastName);
                   A[T->uniqueId%1000].enterInfo(T[T->uniqueId%1000].uniqueId,T[T->uniqueId%1000].pass);
                   cout<<"sucessful!!\n";
                   status=true;
                    break;


                 case 2:

                  T[T->uniqueId].i--;
                  status=false;

                 default:
                    break;
                 }

                 goto start;

                 break;

              case 2:

              cout<<"ENTER CUSTOMER'S ID:";
              cin>>id;
              C[id%1000].changeinfo();

              break;

              case 3:

              goto start;

              break;

              default:

              break;

            }

            }
              while(choice!=4);
       }






        //    ___________//



        else
       {
        cout<<"INVALID CREDENTIALS !! TRY AGAIN.......\n";
        goto start;

       }


    }
    else if(choice==3)
    {
        int c;
        cout<<"ENTER RESPECTIVE NUMBER:\n";
        do{

            cout<<"1.SIGN UP\n";
            cout<<"2.CHECK STATUS\n";
            cin>>c;
        }
        while(c!=1 && c!=2);

        switch(c)
            {
                case 1:
                T[T->uniqueId%1000].getInfo();
                cout<<"WAITING FOR ADMINS APPROVAL !!";
                goto start;

                break;

                case 2:
                if(status)
                {
                    cout<<"YOUR ACCOUNT IS CREATED SUCESSFULLY ,YOU CAN LOGIN NOW !!\n";
                    goto start;
                }
                else{

                    cout<<"YOUR REQUEST IS REJECTED BY ADMIN , VISIT YOUR BANK\n";
                    goto start;
                }

            }

    }

    else if (choice==4)
    {
        cout<<" PROGRAM CLOSED....";
    }

    else
    {

        cout<<"INVALID CHOICE.TRY AGAIN !! .......\n";
        goto start;

    }


}



//---------------------------------------------------------------------------------------------------------------------------------