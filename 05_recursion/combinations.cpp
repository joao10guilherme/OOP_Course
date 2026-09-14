#include<iostream>
using namespace std;

void combination_helper(string& s, int n, int i){
    if(i <= n){
        cout << s << endl;
        return;
    }

    while(s[i] <= 'z'){
        combination_helper(s, n, i + 1);
        s[i]++;
    }

    s[i] = 'a';
}

void print_combinations(int n){
    string s(n, 'a');

    combination_helper(s, n, 0);
}

int main(){

    print_combinations(25);

    return 0;
}