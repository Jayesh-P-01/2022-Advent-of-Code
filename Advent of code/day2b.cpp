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
    string win[] = {"A Y", "B Z", "C X"};
    string draw[] = {"A X", "B Y", "C,Z"};
    while(getline(file, data)) {

        int delta = (data[2] + data[0] - 128 - 25) % 3; 
        if (delta == 0) {
            delta = 3;
        }

        points += delta + ((data[2] - 'X') * 3);
}

    file.close();
    cout << points << endl;
    return 0;
}
