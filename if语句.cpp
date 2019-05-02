#include <iostream>
using namespace std;
int main()
{ int amount ;
float pay,tax;
cin>>amount;
if amount<1000 tax=0.95;
else tax=0.9;
pay=amount*tax;
cout << pay;
}
