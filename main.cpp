#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const char alphanum[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int string_length = sizeof(alphanum)-1;

int main() {

    int n;
    cout << "Enther the length of password: ";
    cin >> n;
    srand(time(0));
    cout << "Generated Passwrod: ";
    for (int i = 0; i < n; i++) {
    cout << alphanum[rand() % string_length];
    }
    return 0;
}

//orice