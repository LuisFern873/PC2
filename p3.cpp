//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include <vector>
#include "global.h"
#include "p3.h"
using namespace std;

void pregunta_3() {
#ifdef ENABLE_TEST
    int n = 0, m = 0, sum = 0;
    cin >> n >> m;
    cin >> sum;
    vector<int> vec1(n);
    vector<int> vec2(m);
    for(auto& item: vec1)
        cin >> item;
    for(auto& item: vec2)
        cin >> item;
    for (auto& [a, b]: get_equivalent_pairs(vec1, vec2, sum))
        cout << a << " " << b << endl;
#endif
}
