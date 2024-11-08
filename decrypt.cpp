#include <fstream>
#include <iostream>
using std::cout;
using std::endl;

int main(){
    cout << "Decrypting";
    ofstream outFile('DecryptedText.txt');

    //replace this with input of how far
    int shift = 1;
    
    ifstream inFile('file.txt');
    string cryptText, decryptText;
    getline(inFile, cryptText);
    
    int n = cryptText.length();
    char working[n +1];
    for (int i = 0; i<n;i++) {
        int value = int(cryptText[i]);
        // 'A' = 65, 'Z' = 90, 'a' = 97, 'z' = 122;
        int result = value + shift;
        if(value > 65 && value < 90){
            if(result > 90){
                result - 26;
            }
            working[i] = char(result);
        }
        else if(value > 97 && value < 122){
            if(result > 122){
                result - 26;
            }
            working[i] = char(result);
        }
        else{
            cout << "Invalid Character. Skipping...";
            working[i] = cryptText[i];
        }

    }

    
    
    inFile.close;
    outFile << decryptText;
    outFile.close;
}