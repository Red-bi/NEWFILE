
#include <clocale>
#include <iostream>
/// Часть 1
/// Номер 4
/*
#include <functional>
using namespace std;

int fib(int n) {
    if (n <= 1)
        return n;

    return fib(n - 1) + fib(n - 2);
}
int main() {
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}
*/
/// Номер 5
/*
using namespace std;
int sum(int n) {
    if (n == 0)
        return 0;
    return n % 10 + sum(n / 10);
}
int main() {
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}
*/
/// Часть 2
/// Номер 14
/*
using namespace std;

int sum(int a[], int n) {
    if (n == 1) return a[0];
    return a[n - 1] + sum(a, n - 1);
}

int main() {
    int a[100], n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << sum(a, n);
}
    */
///Номер 15
using namespace std;
int max(int a[], int n) {
    if (n==1) return a[0];
    if (a[n-1] > max(a,n-1))
        return a[n-1];
    return max(a,n-1);
}
int main() {
    int a[100],n;
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
    cout <<max(a,n);
    return 0;
}