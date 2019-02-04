/// Задача 1
#include <iostream>
using namespace std;

int getCombinationsWithStartTube(int nLeft, int numTubes, int last) {
    if (nLeft < 1) return 0;
    if (numTubes == 1) {
        if (nLeft >= 1 && nLeft <= last) return 1;
        else return 0;
    }
    int sum = 0;
    for (int i = last; i >= 1; i--) {
        sum += getCombinationsWithStartTube(nLeft - i, numTubes - 1, i);
    }
    return sum;
}

int getCombinations(int n){
    int sum = 0;
    int maxNumForFirst = n - 3;
    int minNumForFirst = n / 4;
    if (n % 4 != 0) minNumForFirst++;
    for (int i = maxNumForFirst; i >= minNumForFirst; i--) {
       sum += getCombinationsWithStartTube(n - i, 3, i);
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    cout << getCombinations(n) << endl;
}

/// Задача 2
/*
#include <iostream>

using namespace std;

const int SIZE = 100;

bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int getNumLetters(char *word) {
    int numLetters = 0;
    while ((*word) != '\0') {
        numLetters++;
        word++;
    }
    return numLetters;
}

void printAllPrimeLengthWords(char words[][SIZE], int numWords, int (*numLettersPtr)(char*)) {
    for (int i = 0; i < numWords; i++) {
        if (isPrime(numLettersPtr(words[i]))) {
            cout << words[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    char arr[SIZE][SIZE];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    printAllPrimeLengthWords(arr, n, getNumLetters);
}
*/
/// Задача 3
/*
#include <iostream>
using namespace std;

const int SIZE = 100;

int getNumRows(int arr[][SIZE], int rows, int cols) {
    int lastSum = 0, currSum;
    int numRows = 0;
    for (int i = 0; i < rows; i++) {
        currSum = 0;
        for (int j = 0; j < cols; j++) {
            currSum += arr[i][j];
        }
        if (currSum > lastSum) {
            numRows++;
            lastSum = currSum;
        }
    }
    return numRows;
}

int main() {
    int n, m;
    int matrix[SIZE][SIZE];
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int newRows = getNumRows(matrix, m, n);
    int** newMatrix = new int*[newRows];
    for (int i = 0; i < newRows; i++) {
        newMatrix[i] = new int[n];
    }
    int lastSum = 0, currSum, currPos = 0;
    for (int i = 0; i < m; i++) {
        currSum = 0;
        for (int j = 0; j < n; j++) {
            currSum += matrix[i][j];
        }
        if (currSum > lastSum) {
            lastSum = currSum;
            for (int j = 0; j < n; j++) {
                newMatrix[currPos][j] = matrix[i][j];
            }
            currPos++;
        }
    }
    for (int i = 0; i < newRows; i++) {
        for (int j = 0; j < n; j++) {
            cout << newMatrix[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < newRows; i++) {
        delete[] newMatrix[i];
    }
    delete[] newMatrix;
}*/
/// Задача 4
/*
#include <iostream>
using namespace std;

const int SIZE = 100;

int strlen(char* str) {
    int cnt = 0;
    while (*str != '\0') {
        cnt++;
        str++;
    }
    return cnt;
}

void getIndexes(char* str) {
    int currDepth = 0, maxDepth = 0, positionOpening = -1, positionClosing;
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == '(') {
            currDepth++;
            if (maxDepth < currDepth) {
                positionOpening = i;
                maxDepth = currDepth;
            }
        }
        if (str[i] == ')') {
            currDepth--;
        }
    }
    if (positionOpening == -1) {
        cout << "Empty string!\n";
    }
    else {
        positionClosing = positionOpening;
        while (str[positionClosing] != ')') {
            positionClosing++;
        }
        cout << positionOpening << " " << positionClosing << endl;
    }
}

int main() {
    char arr[SIZE];
    cin.getline(arr, SIZE);
    getIndexes(arr);
}*/
/// Задача 5
/*
#include <iostream>

using namespace std;

int numWays(int m, int nLeft) {
    if (m == 1) return 1;
    int sum = 0;
    for (int i = 0; i <= nLeft; i++) {
        sum += numWays(m - 1, nLeft - i);
    }
    return sum;
}

int main() {
    int m, n;
    cin >> m >> n;
    cout << numWays(m, n) << endl;
}
*/
/*
/// Задача 6
#include <iostream>
#include <string.h>
using namespace std;

const int SIZE = 100;

bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int getNumLetters(char *word) {
    int numLetters = 0;
    while ((*word) != '\0') {
        numLetters++;
        word++;
    }
    return numLetters;
}

int getNumWordsWithPrimeLength(char matrix[][SIZE], int num) {
    int cnt = 0;
    for (int i = 0; i < num; i++) {
        if (isPrime(getNumLetters(matrix[i]))) {
            cnt++;
        }
    }
    return cnt;
}

char** getNewMatrix(char matrix[][SIZE], int num, int (*getNumLettersPtr)(char*)) {
    int numRows = getNumWordsWithPrimeLength(matrix, num);
    char** newMatrix = new char*[numRows + 1];
    for (int i = 0; i < numRows + 1; i++) {
        newMatrix[i] = new char[SIZE];
    }
    int currPos = 0;
    for (int i = 0; i < num; i++) {
        if (isPrime(getNumLettersPtr(matrix[i]))) {
            strcpy(newMatrix[currPos], matrix[i]);
            currPos++;
        }
    }
    newMatrix[numRows][0] = '\0';
    return newMatrix;
}

int main() {
    int n;
    char matrix[SIZE][SIZE];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> matrix[i];
    }
    char** newMatrix = getNewMatrix(matrix, n, getNumLetters);
    int len = 0;
    while (**newMatrix != '\0') {
        char* str = *newMatrix;
        while (*str != '\0') {
            cout << *str;
            str++;
        }
        cout << endl;
        newMatrix++;
        len++;
    }
    for (int i = 0; i < len; i++) {
        delete[] newMatrix[i];
    }
    delete[] newMatrix;
}*/
/*
5
aba
kaba
pizza
bcdefg
abbakab
*/
/*
5 4
1 2 3 4
3 2 1 1
5 6 7 8
2 3 4 5
10 9 11 12
*/
