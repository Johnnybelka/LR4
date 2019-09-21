//??4
#include <iostream>

using namespace std;

int main() {
    char a[30];
    int i = 0, k = 0;
    cout << "?";
    cin >> a;
    while (a[i]!='\0')
    {
        if ((a[i] > 64 && a[i] < 91) || (a[i] > 96 && a[i] < 123) || (a[i] > 47 && a[i] < 58) || (a[i] == 45) || (a[i] == 95) || (a[i] == 46))
            k = 0;
        else k = 1;
        i++;
    }
    if (k == 0)
        cout << "OK";
    else
        cout << "Error";
    return 0;
}