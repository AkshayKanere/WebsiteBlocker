/* C++ Program blocks a web site*/
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    char site[20],ch;
    ifstream in;
    ofstream out;

    cout<<"Enter the Name of the Site to Block \n";
    cin>>site;

    out.open("C:/Windows/System32/drivers/etc/hosts",ios::app);
    if(!out)
        cout<<"Either File Not Found or Permission Denied, Run as Admin the EXE of the Program";
    else
    {
        out<<"127.0.0.1"<<"\t"<<site<<"\n";
       cout<<site;
       cout<<"is blocked";
   }
    out.close();
    return 0;
}