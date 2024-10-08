//Crystal Zhang 
//10/07/2024 
//Lab 5 

#include <iostream> 
 using namespace std; 

 int main() {
  //declaring variables needed for this problem
double account; 
double debit; 
double credit; 
double total;
double transactions;
int pay; 
  //variables needed for the mandatory extra credit
double totaldebit = 0; 
double totalcredit = 0; 

//asking the user ti input variablo/number for account
cout << "How much money did your bank account have from the start?" << endl; 
  //allows the user to input variale number
cin >> account; 

  //asking the user to input number for transactions which will be how many times the code is looped
cout << "How many transactions did you do today?" << endl;
  //allows the user to input number for tranctions
cin >> transactions; 

//the code with continue to loop until the number of tranactions, which starts with one, equals to the number the user inputted;increases by one each time
for (int i = 1; i <= transactions; i++) 
{ 
    //asking user to input values that will define if it's credit or debit. seperating the outcomes in two different choices
    cout << "Did you use debit or credit? If you used debit, input 1, if credit, input 2" << endl;
    //allows user to input values
    cin >> pay; 

    //code if the user chose that they used debit (1) 
    if (pay == 1) 
    {
    //asking user to input a value for debit 
    cout << "How much did you use in this transaction?" << endl; 
    //allows the user to inut a value for debit 
    cin >> debit; 

    //the math the occurs in order to find the total after the user used debit on their transaction
    total = (account) - (debit);
    //defining the new balance of the account to be saved for future repititions
    account = total; 
    //adding up the total amount of debit used. Debit is negative. 
    totaldebit = totaldebit - debit;
    //prints what the total balance is after this transaction
    cout << "After this transaction, your balance is " << total << endl;
    } 

    //code if the user chose that they used credit (2) 
    else if (pay == 2) 
    { 
        //asking user to input a value for credit
        cout << "How much did you use in this transaction?" << endl; 
        //allows user to input a value for credit 
        cin >> credit; 

        //the math that occurs in order to find the total after the user used credit on their transaction
        total = (account) + (credit); 
        //defining the new balance of the account to be saved for future repitions
        account = total; 
        //adding up the total amount of credit used. Credit is positive
        totalcredit = totalcredit + credit;
        //prints what the total balance is after this transaction
        cout << "After this transaction, your balance is " << total << endl; 
    }
    //code if nothing else applies/user input a value for pay (credit or debit) that is not 1 or 2 
    else 
    //tells user to retry with the right number
    cout << "Please retry and input a number of 1 or 2" << endl; 
}
    //prints users final total
    cout << "Your total at the end of the day is " << total << endl; 
    //prints user's debit total
    cout << "Your total debit amount at the end of the day is " << totaldebit << endl; 
    //prints user's credit total
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
    return 0; //return code
 }
