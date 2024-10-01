#include <iostream>
#include "pet2.0.h"
using namespace std;

void checkPet () {
    string friendly, playful;
    int age;
    int year;

    cout << "Is your pet friendly" << endl;
    cin >> friendly;
    cout << "Is your pet playful" << endl;
    cin >> playful;
    if((friendly == "yes") && (playful == "yes")){
        cout << "my pet is nice" << endl;
        cout << "How old is your pet?" << endl;
        cin >> age;
        if(age > 7){
            for(int i = 0; i <= age; i++){
                cout << i << endl;
            }
        } 
    } else {
            cout << "my pet is awesome too!" << endl;
            cout << "what year was your pet born?" << endl;
            cin >> year;
            if(year < 2024){
                int i = 2024;
                while(i >= year){
                    cout << i << endl;
                    i--;
                }
            }
        }


}

