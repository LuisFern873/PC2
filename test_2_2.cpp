//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "global.h"
#include "accumulator.h"
using namespace std;

static void pregunta_2() {
#ifdef ENABLE_TEST
    int n = 0;
    cin >> n;
    vector<int> vec(n);
    for (auto& item: vec)
     cin >> item;
    accumulator<int> ac(vec);
    int pos = 0;
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

TEST_CASE("Pregunta #2_2") {
    execute_test("test_2_2.in", pregunta_2);
}