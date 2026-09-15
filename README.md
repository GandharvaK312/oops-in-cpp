## Hello World

Date: 15-09-2026
Restarting my C++ journey and making it right!!

Referring to the book "A Tour of C++" by Bjarne Stroustrup to understand
the syntax, semantics, and the standard template libraries of C++.

The ISO C++ standard defines two kinds of entities:
- **Core language features** — built-in types (e.g., `char`, `int`) and
  control structures (e.g., `for`, `while`)
- **Standard-library components** — containers (e.g., `vector`, `map`)
  and I/O operations (e.g., `<<`, `getline()`)

---

### `constexpr` — compile-time evaluation

constexpr: compile-time evaluation:
A constexpr specifier guarantees that a variable or function can be completely evaluated at compile time.
While a plain const variable ensures an object is read-only from the moment it is initialized, constexpr goes a step further by ensuringthat the initialization happens entirely while the compiler is building your program.

``` cpp

constexpr int max_size = 100;     // Evaluated at compile time
int arr[max_size];                // OK: max_size is a true compile-time constant

int x = 5;
const int runtime_size = x;       // OK: read-only, but initialized at runtime
 int arr2[runtime_size];        // Error: size not known at compile time

constexpr int square(int n) {     // A constexpr function
    return n * n;
}
constexpr int result = square(5); // Evaluated at compile time

```
When to reach for constexpr over a plain const:
- Use constexpr whenever a value is entirely known beforehand (like mathematical constants, fixed array sizes, or configuration flags). This unlocks maximum compiler optimization and catches errors early during compilation.
- Use const when a variable must remain immutable (read-only) once created, but its value can only be determined at runtime (such as reading a value from user input, a file, or a hardware clock).

---

### Function overloading

C++ allows multiple functions with the same name, distinguished by
their parameter types — the compiler picks the right one based on the
argument types at the call site.

```cpp
void print(int);     // takes an integer argument
void print(double);  // takes a floating-point argument
void print(string);  // takes a string argument

void user(){
    print(42);         // calls print(int)
    print(9.65);        // calls print(double)
    print("Barcelona"); // calls print(string)
}
```

**Ambiguous overloads** — if the compiler can't uniquely determine
which overload matches, it's a compile error rather than a silent
guess:

```cpp
void print(int, double);
void print(double, int);

void user2(){
    print(0, 0); // error: ambiguous — both overloads are equally valid
}
```

---

### Built-in types

| Type | Meaning | Example |
|---|---|---|
| `bool` | Boolean — `true` or `false` | |
| `char` | character | `'a'`, `'z'`, `'9'` |
| `int` | integer | `-273`, `42`, `1066` |
| `double` | double-precision floating-point | `-273.15`, `3.14`, `6.626e-34` |
| `unsigned` | non-negative integer (used for bitwise logical ops) | `0`, `1`, `999` |

---

### `auto` — type inference

No need to specify the type explicitly; the compiler deduces it from
the initializer.

```cpp
auto b = true;       // a bool
auto ch = 'x';        // a char
auto i = 123;         // an int
auto d = 1.2;          // a double
auto z = sqrt(y);      // z has the type of whatever sqrt(y) returns
auto bb {true};        // bb is a bool
```

---

### Scope

```cpp
vector<int> vec; // vec is global (a global vector of integers)

struct Record {
    string name; // name is a member of Record
    // ...
};

void fct(int arg) // fct is global; arg is local (an integer argument)
{
    string motto {"Who dares wins"};   // motto is local
    auto p = new Record{"Hume"};       // p points to an unnamed Record
                                        // (created by new)
    // ...
}
```
