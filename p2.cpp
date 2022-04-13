//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include <sstream>
#include "global.h"
#include "p2.h"
using namespace std;

void pregunta_2() {
#ifdef ENABLE_TEST
    accumulator<int> ac {1, 2, 5, 6, 5, 3, 4};
    auto pos = 0;
    stringstream result;
    while (cin >> pos) {
        if (pos >= ac.size())
            result << "fuera de rango\n";
        else
            result << ac(pos) <<endl;
    }
    cout << result.str();
#endif
}
