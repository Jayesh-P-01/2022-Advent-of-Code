#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <deque>
#include <fstream>
using namespace std;

int main(){
    ifstream file("day1.txt");
    string data;
    int highestCalorie = 0;
    int currentCalorie = 0;
    int arr[3] = {0,0,0};
    while (getline(file,data)){
        if (data.length() == 0){
            for (int i = 0; i<3; i++){
                if (currentCalorie > arr[i]){
                    for (int j = i; j<2;j++){
                        arr[j+1] = arr[j];
                    }
                arr[i] = currentCalorie;
                break;
                }
            }
        currentCalorie = 0;
        } else{
            currentCalorie += stoi(data);
        }
    }
    file >> data;
    file.close();
    int total = 0;
    for (int i = 0; i<3;i++){
        total += arr[i];
    }
    cout<<total<<endl;
    return 0;
}