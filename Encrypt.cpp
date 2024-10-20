#include <iostream>
#include <fstream>

using namespace std;

bool IsFile(string fileName)
{
    ifstream file(fileName);
    return (file.is_open());
}

string GetFileContents(string fileName)
{
    ifstream file(fileName);
}

bool Encrypt(string fileName)
{
    if(IsFile(fileName))
    {

    }
}

int main()
{
    string fileName; 
    
    cout << "Enter file name" << endl;
    cin >> fileName;

    cout << IsFile((fileName + ".txt"));

    return 0;
}