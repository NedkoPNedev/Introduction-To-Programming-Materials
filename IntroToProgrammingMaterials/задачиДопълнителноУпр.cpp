#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

/// Задача 1 - Рекурсия
int findPosition(int* arr, int n, int currPos, int newElem) {
    if (currPos == n || newElem <= arr[currPos]) return currPos;
    return findPosition(arr, n , currPos + 1, newElem);
}

/// Задача 2 - Рекурсия
bool checkSubPalind(char* str, int from, int to) {
    if (from >= to) return true;
    if (str[from] != str[to]) return false;
    return checkSubPalind(str, from + 1, to - 1);
}

/// Задача 3 - Рекурсия
void transformMatrix(int matrix[][100], int row, int col, int n, int (*f)(int), int (*g)(int)) {
    if (row >= col) matrix[row][col] = f(matrix[row][col]);
    else matrix[row][col] = g(matrix[row][col]);

    if (col == n - 1) {
        if (row == n - 1) return;
        else transformMatrix(matrix, row + 1, 0, n, f, g);
    } else {
        transformMatrix(matrix, row, col + 1, n, f, g);
    }
}

/// Задача 4 - Рекурсия
double getValueString(int* arr, int n, int pos) {
    if (pos == n - 1) return (double) arr[pos];
    return arr[pos] + 1/getValueString(arr, n, pos + 1);
}

/// Задача 5 - Рекурсия
int f(int a, int b) {
    return (a*a + b*b) % 10;
}

int g(int a, int b) {
    return (3*a + 4*b) % 10;
}

int getValue(char* str, int startPos, int endPos) {
    int x, y;
    char funcName = str[startPos];
    startPos += 2;
    if (str[startPos] >= '0' && str[startPos] <= '9') {
        x = str[startPos] - '0';
    } else {
        int numBraces = 1, pos = startPos + 2;
        while (numBraces != 0) {
            pos++;
            if (str[pos] == '(') numBraces++;
            if (str[pos] == ')') numBraces--;
        }
        x = getValue(str, startPos, pos);
    }
    endPos--;
    if (str[endPos] >= '0' && str[endPos] <= '9') {
        y = str[endPos] - '0';
    } else {
        int numBraces = -1, pos = endPos;
        while (numBraces != 0) {
            pos--;
            if (str[pos] == '(') numBraces++;
            if (str[pos] == ')') numBraces--;
        }
        y = getValue(str, pos - 1, endPos);
    }
    if (funcName == 'f') return f(x, y);
    return g(x, y);
}

/// за задачите с формули ви трябват следните функции :

/// pow(<число>, <степен>) - вдига число на степен
/// sin(<число>) cos(<число>) tan(<число>) cotan няма - използва се 1/tan(<число>)
/// log(<число>) - това е логаритъм при основа e (естествен логаритъм)
/// log у при основа x получавате така =>  log(y)/log(x)
/// exp(<число>) - дава ви Неперовото число на степен това, което сте подали на функцията
/// за модул abs или ако Нора се кара си пишете сами функцията, можете я

/// Задача 2 - Формули
int fact(int n) {
    if (n == 1) return 1;
    return n * fact(n - 1);
}

double getSum(int n) {
    double sum = 0, currNom, currDelim;
    for (int i = 1; i <= n; i++) {
        currNom = 2*i;
        currDelim = (2*i + 1)*(fact(2*i + 2));
        sum += currNom / currDelim;
    }
    return sum;
}

/// Задача 3 - Формули
int getRange(int from, int to) {
    int prod = 1;
    for (int i = from; i <= to; i++) {
        prod *= i;
    }
    return prod;
}

int getSum2(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += getRange(i, i + i);
    }
    return sum;
}

/// Задача 1 - Редици
bool firstIsSmaller(char* str1, char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int i = 0;
    while (i < len1 && i < len2) {
        if (str1[i] < str2[i]) return true;
        if (str1[i] > str2[i]) return false;
        i++;
    }
    if (i == len1) return true;
    return false;
}

void mergeStrings(char arr[][100], int n) {
    char** sorted = new char*[2*n];
    for (int i = 0; i < 2*n; i++) {
        sorted[i] = new char[100];
    }
    int from = 0, to = 2*n - 1, pos = 0;
    while (from < to) {
        if (firstIsSmaller(arr[from], arr[to])) {
            sorted[pos++] = arr[to];
            to--;
        } else {
            sorted[pos++] = arr[from];
            from++;
        }
    }
    sorted[pos++] = arr[from];
    for (int i = 0; i < 2*n; i++) {
        delete[] sorted[i];
    }
    delete[] sorted;
}

/// Задача 2 - Редици

bool isStronglyIncreasing(int* arr, int from, int to) {
    for (int i = from; i < to; i++) {
        if (arr[i] >= arr[i + 1]) return false;
    }
    return true;
}

bool isStronglyDecreasing(int* arr, int from, int to) {
    for (int i = from; i < to; i++) {
        if (arr[i] <= arr[i + 1]) return false;
    }
    return true;
}

bool check(int* arr, int n, int k) {
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0 && !isStronglyIncreasing(arr, i*k, (i + 1)*k - 1)) return false;
        if (i % 2 != 0 && !isStronglyDecreasing(arr, i*k, (i + 1)*k - 1)) return false;
    }
    return true;
}

/// Задача 3 - Редици
void findUandV() {
    double u0 = 0, u1 = 0, v0 = 1, v1 = 1;
    double u2, v2;
    for (int i = 2; i <= 200; i++) {
        u2 = (u1 - 2*u0*v1 - v0) / (1 - u1*u1 + v0*v0);
        v2 = (u1 - v1) / (2 + fabs(u0 + v1));
        u0 = u1;
        u1 = u2;
        v0 = v1;
        v1 = v2;
    }
    cout << u2 << " " << v2 << endl;
}

int main() {
    return 0;
}


/*
g(5,f(g(5,3),f(g(7,9),2)))

4
tgh bdd bcd aba abc bcc dfg ttt

4 3
1 2 3 4 3 2 5 6 7 8 7 6
*/
