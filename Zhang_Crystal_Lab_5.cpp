//Crystal Zhang 
//10/07/2024 
//Lab 5 

#include <iostream> 
 using namespace std; 

 int main() {
double account; 
double debit; 
double credit; 
double total;
double transactions;
int pay; 
double totaldebit = 0; 
double totalcredit = 0; 

cout << "How much money did your bank account have from the start?" << endl; 
cin >> account; 

cout << "How many transactions did you do today?" << endl;
cin >> transactions; 

for (int i = 1; i <= transactions; i++) 
{ 
    cout << "Did you use debit or credit? If you used debit, input 1, if credit, input 2" << endl;
    cin >> pay; 

    if (pay == 1) 
    {
    cout << "How much did you use in this transaction?" << endl; 
    cin >> debit; 
    total = (account) - (debit);
    account = total; 
    totaldebit = totaldebit - debit;
    cout << "After this transaction, your balance is " << total << endl;
    } 

    else if (pay == 2) 
    { 
       cout << "How much did you use in this transaction?" << endl; 
        cin >> credit; 
        total = (account) + (credit); 
        account = total; 
        totalcredit = totalcredit + credit;
        cout << "After this transaction, your balance is " << total << endl; 
    }

    else 
    cout << "Please retry and input a number of 1 or 2" << endl; 
}
    cout << "Your total at the end of the day is " << total << endl; 
    cout << "Your total debit amount at the end of the day is " << totaldebit << endl; 
    cout << "Your total credit amount at the end of the day is " << totalcredit << endl; 

/*
How much money did your bank account have from the start?
50
How many transactions did you do today?
6
Did you use debit or credit? If you used debit, input 1, if credit, input 2
1
How much did you use in this transaction?
10
After this transaction, your balance is 40
Did you use debit or credit? If you used debit, input 1, if credit, input 2
2
How much did you use in this transaction?
10
After this transaction, your balance is 50
Did you use debit or credit? If you used debit, input 1, if credit, input 2
1
How much did you use in this transaction?
10
After this transaction, your balance is 40
Did you use debit or credit? If you used debit, input 1, if credit, input 2
2
How much did you use in this transaction?
10
After this transaction, your balance is 50
Did you use debit or credit? If you used debit, input 1, if credit, input 2
1
How much did you use in this transaction?
10
After this transaction, your balance is 40
Did you use debit or credit? If you used debit, input 1, if credit, input 2
2
How much did you use in this transaction?
10
After this transaction, your balance is 50
Your total at the end of the day is 50
Your total debit amount at the end of the day is -30
Your total credit amount at the end of the day is 30
*/
    return 0; 
 }