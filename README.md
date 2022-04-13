# Práctica Calificada #2 - 2021-0

Practica Calificada # 2 del curso de Programación Orientada a Objetos 2

## Indicaciones Especificas
- El tiempo límite para la evaluación es 150 minutos.
- Cada pregunta deberá ser respondida en un archivo cabecera (`.h`)  y/o en un archivo fuente (`.cpp`) de acuerdo a lo solicitado
- SOLO Deberás subir los siguiente archivos directamente a [www.gradescope.com](https://www.gradescope.com) o se puede crear un `.zip` que contenga todos ellos y subirlo :
  - `remove_comments.h y remove_comments.cpp`
  - `accumulator.h`
  - `get_equivalent_pairs.h`
  - `remove_duplicates.h`

## Problema #1 - Eliminar comentarios - STACK (4 pts)
Diseñar y desarrollar una función `remove_comments` que permita leer un texto que contenga código fuente valido de C++ que incluya comentarios de linea (//) o comentarios multilinea (/* ... */) y que retorne el código fuente valido sin incluir los comentarios.

```cpp
    string remove_comments(const string& source);
```

**Caso de uso**
```cpp
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
```

## Problema #2 - Acumulador concentrico - HEAP (4 pts)

Diseñar y desarrollar el un template de clase `accumulator` que reciba en la construcción un contenedor de `n` valores numéricos y que sobrecargue el operador `operator()` permitiendo recibir como parámetro del operador sobrecargado un número `k` que permita retornar la suma de los números luego de eliminar `k` veces el **`valor mayor`** y el **`valor menor`** de la lista de valores.

Ejemplo:
1. Si se tuviera la siguiente lista de valores: `1, 2, 3, 4, 5` y `k = 0` entonces el operador retornaría la suma total = `15`.
2. Si `k = 1`, se removeria entonces el mínimo = `1` y el máximo  = `5` y se retornaria `9`.
3. Si `k = 2`, se removeria `2` y `4` y se retornaria `3`

Adicionalmente debe implementarse el método `size()` que retornaría el límite máximo de `k` que sería `n/2`.

**Caso de uso**
```cpp
    // Caso de uso #1
    accumulator<int> ac {1, 2, 5, 6, 5, 3, 4}; // uso de std::initializer_list
    auto pos = 0;
    stringstream result;
    while (cin >> pos) {
        if (pos >= ac.size())
            result << "fuera de rango\n";
        else
            result << ac(pos) <<endl;
    }
    cout << result.str();

    // Caso de uso #2
    vector<int> vec = {1, 2, 5, 6, 5, 3, 4};
    accumulator<int> ac2 {vec}; // uso de std::vector
    auto pos2 = 0;
    stringstream result;
    while (cin >> pos2) {
    if (pos2 >= ac2.size())
        result << "fuera de rango\n";
    else
        result << ac2(pos2) <<endl;
}
cout << result.str();
```

## Problema #3 - Par Equivalente - HASH (4 pts)
Diseñar y desarrollar el template de función `get_equivalent_pairs` que al recibir como parametros 2 contenedores del mismo tipo de valores numéricos y un número `k` entonces retorne un contenedor con todos los pares ordenados cuya suma sea igual al valor `k`, **NOTA** los pares ordenados no deben repetirse.

```cpp
template <typename T, template<typename...> class ContainerClass>
ContainerClass<pair<T, T>> get_equivalent_pairs(ContainerClass<T>& cnt1, ContainerClass<T>& cnt2, T sum);
```

**Caso de uso**
```cpp
    int n = 0, m = 0, sum = 0;
cin >> n >> m;
cin >> sum;
vector<int> vec1(n);
vector<int> vec2(m);
for(auto& item: vec1)
cin >> item;
for(auto& item: vec2)
cin >> item;
for (auto& [a, b]: get_equivalent_pair(vec1, vec2, sum))
cout << a << " " << b << endl;
```
