#include <iostream>
using namespace std;
long Function_one(long n)
{
    if (n <= 0)return 1;        //0��1
    long current = 1;               //����1
    long last = 1;
    long beforelast = 0;
    for (long i = 2; i <= n; i++)
    {
        current = last + beforelast;        
        beforelast = last;                  //�´�ѭ���ĵ�n-2��
        last = current;                     //�´�ѭ����n-1��
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

