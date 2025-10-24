#include <iostream>

using namespace std;

void withdraw();
void deposit();
void atm_run();
int cur_amt = 0;

int main()
{
    cout << "*****************************\n" << endl;
    cout << "**  Welcome to ATM  **" << endl;
    cout << "\n*****************************\n" << endl;
    long card , pin;
    cout << "Enter Your 6 digit Card No : ";
    cin >> card;
    if (card == 123456){
        cout << "\nEnter 4 digit Pin : ";
        cin >> pin;
        if (pin == 9898){
        cout << "\nWelcome Haroon Khan " <<endl;
        cur_amt = 659;
        atm_run();
    }
    else {
        cout << "\n***************************\n" << endl;
        cout << "*** Invalid Pin ***";
        cout << "\n***************************\n" << endl;
    }
    }
     else if (card == 504030){
        cout << "\nEnter 4 digit Pin : ";
        cin >> pin;
        if (pin == 7687){
        cout << "\nWelcome Fahad Noor " <<endl;
        cur_amt = 879;
        atm_run();
    }
    else {
        cout << "\n***************************\n" << endl;
        cout << "*** Invalid Pin ***";
        cout << "\n***************************\n" << endl;
    }}
     else if (card == 908765){
        cout << "\nEnter 4 digit Pin : ";
        cin >> pin;
        if (pin == 6754){
        cout << "\nWelcome Hammal baloch " <<endl;
        cur_amt = 700;
        atm_run();
    }

    else {
        cout << "\n***************************\n" << endl;
        cout << "*** Invalid Pin ***";
        cout << "\n***************************\n" << endl;
    }}

     else if (card == 122333){
        cout << "\nEnter 4 digit Pin : ";
        cin >> pin;
        if (pin == 7007){
        cout << "\nWelcome Majid Baloch " <<endl;
        cur_amt = 87505;
        atm_run();
    }
    else {
        cout << "\n***************************\n" << endl;
        cout << "*** Invalid Pin ***";
        cout << "\n***************************\n" << endl;
    }}
    else if (card == 123457){
        cout << "\nEnter 4 digit Pin : ";
        cin >> pin;
        if (pin == 4209){
        cout << "\nWelcome Mir Qasim Baloch " <<endl;
        cur_amt = 6500;
        atm_run();
    }
    else {
        cout << "\n***************************\n" << endl;
        cout << "*** Invalid Pin ***";
        cout << "\n***************************\n" << endl;
    }}
    else {
        cout << "\n***************************\n" << endl;
        cout << "*** No Account Found ***" << endl;
        cout << "\n***************************\n" << endl;
    }

    return 0;
}
void withdraw(){
cout << "\n***************************\n" << endl;
int rem_amt;
cout << "Enter amount to withdrew : ";
cin >> rem_amt;
if (rem_amt > 0 && cur_amt > rem_amt){
cur_amt -=rem_amt ;
cout << "\nYou have successfully  Withdraw " <<rem_amt<< "." << endl;
cout << "Your current amount is " << cur_amt<< endl;}
else if(cur_amt < rem_amt){
cout << " *** You Not have balance *** "<< endl;
}
else {
 cout << "\n***************************\n" << endl;
 cout << " *** Invalid amount *** "<< endl;
}
char key;
cout << "\n***************************\n" << endl;
cout << "for another transition press (y), else exit : ";
cin >> key;
if (key == 'y'){
    atm_run();}
else {
cout << "\n***************************\n" << endl;
cout << "*** Exit ***";
cout << "\n***************************\n" << endl;
}
}

void deposit(){
 cout << "\n***************************\n" << endl;
int add_amt;
cout << "Enter amount to Deposit : ";
cin >> add_amt;
if (add_amt > 0 ){
cur_amt += add_amt ;
cout << "\nYou have successfully  deposit " <<add_amt<< "." << endl;
cout << "Your current amount is " << cur_amt<< endl;}
else {
    cout << "\n***************************\n" << endl;
    cout << " *** Invalid amount *** "<< endl;
}
char key;
 cout << "\n***************************\n" << endl;
cout << "for another transition press (y), else exit : ";
cin >> key;
if (key == 'y'){
    atm_run();}
else {
cout << "\n***************************\n" << endl;
cout << "*** Exit ***" << endl;
 cout << "\n***************************\n" << endl;
}
}
void atm_run(){
    int opp;
    while (true){
    cout << "***************************\n" << endl;
    cout << " 1.Deposit\n 2.Withdraw\n 3.Balance check "<< endl;
    cout << "\nSelect a option (1/3) : ";
    cin >> opp;
    if (opp == 1){
       deposit();
    }
    else if (opp == 2){
      withdraw();
    }
    else if (opp == 3){
        cout << "\n***************************\n" << endl;
        cout << "Your Current Balance is " << cur_amt <<  endl;
        char key;
        cout << "\nfor another transition press (y), else exit : ";
        cin >> key;
        if (key == 'y'){
            atm_run();}
        else {
         cout << "\n***************************\n" << endl;
         cout << "*** Exit ***";
         cout << "\n***************************\n" << endl;
        }
    }
    else {
        cout << "\n***************************\n" << endl;
        cout << "*** Exit ***" <<  endl;
        cout << "\n***************************\n" << endl;
        break;
    }
     break;
    }
}
