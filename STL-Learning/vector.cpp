#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v;
    for (int i = 1; i<10; i++) {
        v.push_back(i);
    }
    for (auto i = v.begin(); i!=v.end(); ++i) {
        cout << *i << " ";
    }
    cout << endl;
    for (auto i = v.cbegin(); i!=v.cend(); ++i) {
        cout << *i << " ";
    }
    cout << endl;

    for (auto i = v.rbegin(); i!=v.rend(); ++i) {
        cout << *i << " ";
    }
    cout << endl;

    for (auto i = v.crbegin();i!=v.crend(); ++i) {
        cout << *i << " "; 
    } 
    cout << endl;

    cout << "Size: " << v.size();
    cout << "\n Capacity: "<< v.capacity();
    cout << "\n Max_Size: " << v.max_size();


    v.assign(5, 10);
    cout << "The vector elements is : ";
    for (int i =0; i<v.size(); i++) {
        cout << v[i] <<" ";
    }
    cout << endl;

    v.push_back(15);
    int n = v.size();
    cout << "The last element is: " << v[n-1];


    v.pop_back();
    cout << "\n Current elements; ";

    for (int i =0; i<v.size(); i++) {
        cout << v[i] << " ";
    }

    v.insert(v.begin(), 5);
    cout <<"\n The first element is : "<< v[0];
    
    v.emplace(v.begin(), 6);
    cout << "\nThe first element is : " << v[0];
    







    return 0; 
}