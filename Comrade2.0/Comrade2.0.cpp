// Comrade2.0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

    int luckynumbers[5];
    /*cout << luckynumbers << endl;
    cout << &luckynumbers[0] << endl;
    cout << luckynumbers[2] << endl;
    cout << *(luckynumbers + 2) << endl;*/


    for (int i = 0; i <= 4; i++) {
        cout << "Number:";
        cin >> luckynumbers[i];
        
    }
    for (int i = 0; i <= 5; i++) {
        
        cout << *(luckynumbers + i) << " ";
    }
       

    
}

