#include<iostream>
using namespace std;
#include<fstream>
//Working with files reading and writing files
int main()
{
    string st = "this is our new text file";
    string st2;
    //Opening file using constructor and writing it
    ofstream out("sample.txt"); //write operation
    out<<st;

    //Opening file using constructor and reading it
    ifstream in("Sample2.txt"); //read operation
    //in>>st2;
    getline(in, st2);
    cout<<st2;
    return 0;
}