#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string st = "Harry bhai";
    string st2;
    // Opening files using constructor and writing it
    // ofstream out("sample.txt"); // Write operation
    // out<<st;
    // Opening files using constructor and reading it
    ifstream in("sample.txt"); // Read operation
   
    getline(in, st2);
    cout << st2;

    return 0;
}
