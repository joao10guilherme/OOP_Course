#include <iostream>
#include <string>
using namespace std;

int main(){

    string name, animal, introduction;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your favorite animal: ";
    getline(cin, animal);

    introduction = "Agent, " + name;
    introduction += ", also known as The " + animal + ".";

    int intro_size = introduction.length();

    cout << '\n' << introduction << endl;
    cout << "Your identity consists " << intro_size << " characters" << endl;

    if(intro_size > 50){
        cout << "Your secret identity is too long\n";
    }else{
        cout << "Your secret identity is fine\n";
    }

    return 0;
}