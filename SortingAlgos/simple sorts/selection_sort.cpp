#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

//O(n^2)
template<typename T>
void SelectionSort(vector<T>& input){
    auto runner = input.end();
    auto begin = input.begin();
    while(runner != begin){
        swap(*(max_element(begin, runner)), *(runner - 1));
        --runner;
    }
}

int main(){
    vector<int> a = {4, 3, 2, 1};
    SelectionSort(a);
    for(auto el : a) cout<<el;
    cout << endl;
}