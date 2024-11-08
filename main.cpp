#include <fstream>
#include <iostream>
using namespace std;

int main(){

    string operations[] = {"Ceaser Encrypt", "Ceaser Decrypt"};
    int operation;
    cout >> "Select an operation:" >> endl;
    for(int i = 0; i< operations.length(); i++){
        cout >> operations[i] >> endl;
    }
    bool cont = false;
    while(!cont){
        operation << cin;
        if(operation <= operations.length() && operation > 0){
            cout << "You have chosen ";
            cout << operations[operation - 1] << endl;
            cont = true;
        }
        else{
            cout << "Invalid selection" << endl;
        }
    }

}