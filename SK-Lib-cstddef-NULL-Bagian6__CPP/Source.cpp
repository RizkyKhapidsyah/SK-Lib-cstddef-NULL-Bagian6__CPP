#include <iostream>
#include <cstddef>
#include <conio.h>

/*
    Source by AlphaCodingSkills
    Modified For Learn by RK
    I.D.E : VS2019
*/

using namespace std;

void print(int* ptr) {
    if (!ptr) {
        cout << "print(int*): It is null.\n";
    } else {
        cout << "print(int*): " << *ptr << '\n';
    }  
}

int main() {
    int x = 25;

    //using print function with null pointer
    int* p1 = NULL;
    print(p1);

    //using print function with pointer
    int* p2 = &x;
    print(p2);

    _getch();
    return 0;
}

