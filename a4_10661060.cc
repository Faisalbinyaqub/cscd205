#include <iostream>
#include <math.h>

using namespace std;
int GCD(int a, int b)
{
    int rem = a%b;
    while(rem !=0)
    {
        a = b;
        b = rem;
        rem = a%b;
    }
    return b;
}
int main()
{


int a,b;
cout << "Please enter the first number : ";
cin >> a;
cout << "Please enter the second number : ";
cin >> b;

cout << " The GCB of "<<a<<" and "<<b<<" is "<<GCD(a,b);



    return 0;
}
