#include <iostream>
using namespace std;

int main()
{
    int n1,n2,s;
    cout << "Enter two integers: ";
    cin >> n1 >>n2;
    s = n1 - n2;
    cout << n1 << " is the first integer you entered";
    cout << n2 << " is the second integer you entered";
    cout << s << " is the difference of the two integers you entered";
    return 0;
}
