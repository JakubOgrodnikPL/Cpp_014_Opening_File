#include <iostream>
#include <fstream> // library responsible for adding files
#include <cstdlib>

using namespace std;

string name, lastname;
int phonenumber;

int main()
{
    fstream file;
    file.open("card.txt",ios::in);
    if(file.good()==false)
    {
        cout<<"File does not exist";
        exit(0);
    }

    string line;
    int linenumber=1;
    while(getline(file, line))
    {
        switch(linenumber)
        {
            case 1: name = line; break;
            case 2: lastname = line; break;
            case 3: phonenumber = atoi(line.c_str()); break;
        }
        linenumber++;
    }
    file.close();
    cout<<name<<endl;
    cout<<lastname<<endl;
    cout<<phonenumber<<endl;

    cout<<"\nPress any key to exit";
    getchar();
    getchar();
   return 0;
}
