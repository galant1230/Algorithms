#include <iostream>
using namespace std;
int main()
{
    int a, b;
    while (true)
    {
        cin >> a;
        if (a == 0)
        {
            break;
        }
        else
        {
            cin >> b;
            if (a > b)
            {
                cout << ">" << endl;
            }
            else if (a < b)
            {
                cout << "<" << endl;
            }
            else
            {
                cout << "=" << endl;
            }
        }
    }
}
