#include<iostream>
using namespace std;
#include<fstream>
//Read/Write in the same program & closing files
int main()
{
    string str;
    ofstream out("sample.txt");
    cout<<"Enter your name :";
    cin>>str;
    out<<str<<" is my name";
    out.close();
    

    ifstream in("sample.txt");
    string content;
    in>>content;
    cout<<"The content is : "<<content;
    //getline(in, str);
    in.close();
    return 0;
}