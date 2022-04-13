//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include <iostream>
#include <string>
#include "global.h"
#include "remove_comments.h"

using namespace std;

static void pregunta_1() {
#ifdef ENABLE_TEST
    string text;
    string line;
    while (getline(cin, line))
        text.append(line+"\n");
    cout << remove_comments(text);
#endif
}

TEST_CASE("Pregunta #1_2") {
    execute_test("test_1_2.in", pregunta_1);
}