#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <deque>
#include <fstream>
using namespace std;

int main(){
    ifstream file("day3.txt");
    string data;
    int total = 0;
    int inRow = 0; // this will track how many rucksacks are being stored and therefore whether to be searching or not 
    while(getline(file, data)) {
        string firstCompartment = data.substr(0,(data.length()/2));
        string secondCompartment = data.substr(data.length()/2, data.length()-1);
        bool found = false;
        for (int i = 0; i<secondCompartment.length();i++){
            for (int j = 0; j < firstCompartment.length();j++){
                if (secondCompartment[i] == firstCompartment[j]){
                    int value = static_cast<int>(secondCompartment[i]);
                    cout<<secondCompartment[i];
                    if (value < 97){
                        cout<<static_cast<int>(secondCompartment[i]) - 38<<endl;
                        total += static_cast<int>(secondCompartment[i]) - 38;
                    } else{
                        cout<<static_cast<int>(secondCompartment[i]) - 96<<endl;
                        total += static_cast<int>(secondCompartment[i]) - 96;
                    }
                    found = true;
                    break;
                }
            }
            if (found){
                break;
            }
        }
    }

    file.close();
    cout<<total<<endl;
    return 0;
}
