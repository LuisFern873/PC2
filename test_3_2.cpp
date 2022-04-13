//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "global.h"
#include "get_equivalent_pairs.h"
using namespace std;

static void pregunta_3() {
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

TEST_CASE("Pregunta #3_2") {
    execute_test("test_3_2.in", pregunta_3);
}