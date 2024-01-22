#include "functions_to_implement.h"

#include <iostream>
#include <vector>

using namespace std;


int main() {

    //testing NthFibonacci
    cout << NthFibonacci(5) << endl;

    //testing Sum
    vector<double> list1 = {1, 2, 3.5, 4};
    cout << Sum(list1) << endl;

    //test LessMask
    vector<int> list2 = {1, 2, 3, 4};
    vector<bool> list2out = LessMask(list2, 3);

    for (auto it = list2out.begin(); it != list2out.end(); it++)
        cout << *it << endl;
}