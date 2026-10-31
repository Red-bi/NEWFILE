
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
/*
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
}*/
/*
#include <iostream>
using namespace std;

///ЧАСТЬ 3
///номер 24
int C(int n,int 
k){
if(k==0||k==n)return 1;
return C(n-1,k-1)+C(n-1,k);
}

///номер 25
int power(int n){
if(n==1)return 1;
if(n<=0||n%2!=0)return 0;
return power(n/2);
}

int main(){
int n,k;
cin>>n>>k;
cout<<C(n,k)<<endl;
cin>>n;
cout<<power(n);
return 0;
}
*/
///Задача (д/з) 22
void transpose(int matrix[][3], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}
int main() {
    int size = 3;
    int myMatrix[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    transpose(myMatrix, size);
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << myMatrix[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
