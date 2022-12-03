using namespace std;
#include<fstream>
//open() and eof() functions
int main()
{
    ofstream out;
    out.open("sample.txt");
    out<<"This is important file";
    out<<"\nSomethging is written";
    out<<"\nokay bye";
    out.close();

    ifstream in;
    in.open("sample.txt");
    string st;
    // in>>st;
    // cout<<st;

    while(in.eof() == 0)
    {
        getline(in, st);
        cout<<st;
    }
    return 0;
}