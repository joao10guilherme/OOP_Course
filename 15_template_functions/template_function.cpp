#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <typename T>
T smallest(const T& v1, const T& v2, const T& v3){
    if(v1 <= v2 && v1 <= v3){
        return v1;
    }else if(v2 <= v3){
        return v2;
    }else{
        return v3;
    }
}

template <typename T>
T findMax(vector<T>& v){
    
    if(v.empty()){
        // return T(); // T() default value for template type

        // throw an exception
        throw string("findMax: empty vector");

    }
 
    int temp = v[0];
    for(T i : v){
        if(i > temp){
            temp = i;
        }
    }
    return temp;
}

int main(){

    int i1 = 2, i2 = -1, i3 = 5;

    cout << smallest(i1, i2, i3) << endl;

    double d1 = 2.3, d2 = -1.5, d3 = 1.3;

    cout << smallest(d1,d2,d3) << endl;

    string s1 = "hi", s2 = "bye", s3 = "good";

    cout << smallest(s1, s2, s3) << endl;

    vector<int> v1 {1,2,3,-2,-21};

    cout << findMax(v1) << endl;

    vector<char> v2 {'g', 't', '4', 'M'};

    cout << findMax(v2) << endl;

    return 0;
}