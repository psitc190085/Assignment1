#include <iostream>

using namespace std;

int main()
{
    string nameofthecustomer;
    string itembeensold;
    int uniqueid;
    int printer=450;
    int phone=350;
    int table= 200;
    int quantitybought;
    float vatamount=0.12;
    int totalcost;
    float money;
    int balance;

    string attendentname;
    cout<<"name of the customer"<<endl;
    cin>> nameofthecustomer;
    cout<< "item been sold are"<<endl;
    cout<< "1 printer "<<endl;
    cout<< "2 phone"<<endl;
    cout<< "3 table"<<endl;
    cout<< "vat amount is "<< vatamount <<endl;
    cout<< "attendent name"<<endl;
    cin>>attendentname;
    cout<<"unique id"<<endl;
    cin>>uniqueid;
    cout<<"quantity bought"<<endl;
    cin>>quantitybought;
    cout<<"quantity bought is "<<quantitybought<<endl;
    totalcost=printer*quantitybought+(vatamount*printer);
    cout << "hey, you are to pay "<<totalcost<<endl;
    cout<< "input the costumers money "<<endl;
    cin>>money;
    balance= money- totalcost;
   if(money>totalcost){
        cout<< "you have a balance of "<<balance<<endl;
       }
       else{
        cout<< " Your money is not up to price of the item bought"<<endl;
       }
cout<<" "<<endl;

    cout<< "the customers name is "<<nameofthecustomer<<endl;

    cout<< "the unique id is "<<uniqueid<<endl;

    cout<< "item bought is "<<"printer"<<endl;

    cout<< "vat amount is " <<vatamount<<endl;

    cout<< "total amount owe is "<<totalcost<<endl;

    cout<< "total amount paid is"<<money<<endl;

    cout<< "your balance is"<<balance<<endl;

    cout<< "thank you for transacting with us"<<endl;












}
