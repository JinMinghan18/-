#include <iostream>
using namespace std;
long Function_one(long n)
{
    if (n <= 0)return 1;        //0和1
    long current = 1;               //大于1
    long last = 1;
    long beforelast = 0;
    for (long i = 2; i <= n; i++)
    {
        current = last + beforelast;        
        beforelast = last;                  //下次循环的第n-2项
        last = current;                     //下次循环的n-1项
    }
    return current;
}
long Function_two(long n)
{
    long sum = 0;
    for (long i = 1; i <= n; i++)
    {
        sum += Function_one(i);
    }
    return sum;
}
int main()
{
    long n;
    while (cin >> n)
    {
        cout << Function_one(n) << ',' << Function_two(n) << endl;
    }
    return 0;
}

