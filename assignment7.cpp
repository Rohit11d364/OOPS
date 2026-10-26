#include <iostream>
#include <string>
using namespace std;

class String
{
    string str;

public:
    
    String()
    {
        str = "";
    }

    
    String(string s)
    {
        str = s;
    }

   
    void Accept()
    {
        cout << "Enter a string: ";
        getline(cin, str);
    }

    void Display()
    {
        cout << "String is: " << str << endl;
    }

    ~String()
    {
    
    }
};

int main()
{
    String s1;

    s1.Accept();
    s1.Display();

    String s2("Hello C++");
    cout << "\nUsing parameterized constructor:" << endl;
    s2.Display();

    return 0;
}
