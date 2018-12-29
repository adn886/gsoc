#include<iostream>
using namespace std;
#include<fstream>
main()
{
    ifstream fin; ofstream fout;
    char ch;
    // create object of file
    fin.open("abcde.txt");

    fout<<"writyetext";
    
    while(!fin.eof())
    {
        fin>>ch;
        cout<<ch;
    }
    endl(cout);
    fin.close();
    return 0;
}
