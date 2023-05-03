#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <deque>
#include <fstream>
using namespace std;

int main(){
    ifstream file("day2.txt");
    string data;
    int points = 0;
    while (getline(file,data)){
        points += data[2] - 'X' + 1;
        int delta = (data[2] - data[0] - 23 + 3) % 3; 

        if (delta == 1) {
            points += 6;
        } else if (delta == 0) {
            points += 3;
        }
    }

    file.close();
    cout << points << endl;
    return 0;
}
