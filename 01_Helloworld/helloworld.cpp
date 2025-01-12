#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    //first exercise in C++
    /*  
    cout << "Hello World!" << endl;
    cout << "I'm a C++ program" << endl;
     */
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}
