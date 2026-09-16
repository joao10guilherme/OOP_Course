#include <iostream>
using namespace std;

struct Lecture{
    string title;
    int duration; // duration in sec

    // Define the method of the structure
    void print(){
        cout << "Title:\t\t" << lec.title << endl;
        cout << "Duration:\t" << lec.duration / 60 << " minutes";
        cout << " and " << lec.duration % 60 << " seconds" << endl;
    }

    bool islongLecture(){
        if(duration > (60*60)) return true;
        else return false;
    }
};

// void printLecture(const Lecture& lec);
Lecture createLecture(const string& title, int duration);

int main(){

    Lecture oop;

    oop.title = "Classes and Objects";
    oop.duration = 50*60;

    cout << oop.title << " " << oop.duration << endl;

    Lecture math = createLecture("Logic and Formal Proofs", 75 * 60);
    math.print();

    if(math.islongLecture()) cout << "Long lecture:\t" << "Yes" << endl;
    else cout << "Long lecture:\t" << "No" << endl;

    return 0;

}

// void printLecture(const Lecture& lec){
//     cout << "Title:\t\t" << lec.title << endl;
//     cout << "Duration:\t" << lec.duration / 60 << " minutes";
//     cout << " and " << lec.duration % 60 << " seconds" << endl;
// }

Lecture createLecture(const string& title, int minutes){
    // create lecture object
    Lecture lecture;
    lecture.title = title;
    lecture.duration = minutes * 60;
}
