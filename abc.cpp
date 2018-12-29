#include<iostream>
using namespace std;
#include<fstream>
main()
{
    ifstream fin; ofstream fout;
    char ch;
    fin.open("abcde.txt");

    fout<<"writyetext";
    
    while(!fin.eof())
    {
        fin>>ch;
        cout<<ch;
    }
    fin.close();
    return 0;
}
