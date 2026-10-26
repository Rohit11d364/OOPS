#include <iostream>
using namespace std;

namespace p1
{
    int value = 15;

    void display()
    {
        cout << "first namespace value: " << value << endl;
    }
}

namespace p2
{
    int value = 19;

    void display()
    {
        cout << "second namespace value: " << value << endl;
    }
}

int main()
{
    p1::display();
    p2::display();

    cout << "Value from first namespace: "
         << p1::value << endl;

    cout << "Value from second namespace: "
         << p2::value << endl;

    return 0;
}
