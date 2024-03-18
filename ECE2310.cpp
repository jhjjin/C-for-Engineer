#include <iostream>
using namespace std;

int Larger(int num1, int num2);

int main()
{
    cout << Larger(15, 20);
}

int Larger(int num1, int num2)
{
    if(num1 > num2)
    {
        return num1;
    }
    else 
    {
        return num2;
    }
}