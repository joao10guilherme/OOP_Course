#include<iostream>
#include<vector>

using namespace std;

void print(vector<int>& v);
void print_backwards(vector<int>& v);

int main(){

    vector<int> v; //Dynamic array of integers

    // Create and Initialize
    vector<int> v2 = {1,2,10,4,5,6};
    print(v2);

    // Create and provide the size and default value
    vector<int> v3(10, 1);
    print(v3);

    // Copy from another vector
    vector<int> v4(v2); // or v4{v2} also work
    print(v4);

    // Get the size (number of elements)
    cout << "v2 size: " << v2.size() << endl;

    //first and last element
    cout << "v2 first: " << v2.front() << endl;
    cout << "v2 last: " << v2.back() << endl;

    //Add the element at the end
    v2.push_back(10);
    print(v2);

    //Remove from the end
    print(v4);
    v4.pop_back();
    print(v4);

    //Iterator - object points to a certain location in the vector
    // begin() - points to the first element
    // end() - points to the last element
    cout << *v2.begin() << endl;
    cout << *(v2.begin() + 2) << endl;

    // Insert (location (iterator), value)
    v2.insert(v2.begin() + 1, 999);
    print(v2);
    v2.insert(v2.end(), 1000);
    print(v2);

    // Erase (location)
    v2.erase(v2.begin());
    print(v2);

    // print_backwards(v2);

    return 0;
}

void print(vector<int>& v){
    for(int i = 0; i < v.size(); i++){
        cout << v.at(i) << " ";
    }
    cout << endl;
}

void print_backwards(vector<int>& v){
    for(int i = v.size()-1; i < 0; i--){
        cout << v.at(i) << " ";
    }
    cout << endl;
}