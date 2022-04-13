//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "global.h"
#include "p1.h"
using namespace std;

void pregunta_1() {
#ifdef ENABLE_TEST
    string source =
        "#include <iostream>\n"
        "#include <string>\n"
        "using namespace std;\n"
        "/* Este es un comentario */\n"
        "int main() {\n"
        "  // ingreso de datos \n"
        "  string text;\n"
        "  cin >> text;\n"
        "  // mostrar resultado \n"
        "  cout << \"El valor ingresado es: \" << text;\n"
        "}\n";

    cout << remove_comments(source);
#endif
}
