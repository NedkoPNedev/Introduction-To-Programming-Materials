#include <iostream>
#include <cstdio>

using namespace std;
/// TOWERS OF HANOI (RECURSION EXAMPLE)
/*void hanoi(int n, char a, char b, char c)
{
    if (n > 0)
    {
        hanoi(n - 1, a, c, b);  /// prehvurlqme n - 1 ot A na B, izpolzvaiki C
        cout << a << " " << c << endl; /// prehvurlqme ot A na C
        hanoi(n - 1, b, a, c);  /// prehvurlqme n - 1 ot B na C, izpolzvaiki A
    }
}

int main()
{
    int n = 3;
    hanoi(n, 'A', 'B', 'C');   /// iskame da prehvurlim ot purvo na treto, izpolzvaiki vtoro
    printf("the %d disks are successfully moved \n", n);
    return 0;
}*/
 /// TRANSFORMING NUNBER RESCURSION (FROM LECTURE) ; MAIN FUNCTION PARAMETERS
/*int getNewNumber(int number)
{
    if (number < 10)return (number == 5) ? 8 : number;
    return ((number % 10 == 5) ? 8 : number % 10) + 10 * getNewNumber(number / 10);
}

int main(int argc, char* argv[])
{
    for (int i = 0; i < argc; i++)
    {
        cout << argv[i] << endl;
    }
    int n;
    cin >> n;
    cout << getNewNumber(n) << endl;
    return 0;
}*/

/// ERATOSTENS SIEVE
/*const int MAX_SIZE = 100;
bool prime[MAX_SIZE + 1];

void eratostensSieve()
{
    int currNum;
    for (int i = 2; i <= MAX_SIZE; i++) prime[i] = 1;
    for (int i = 2; i <= MAX_SIZE; i++)
    {
        if (prime[i])
        {
            currNum = i * 2;
            //currNum = currNum << 1;
            while (currNum <= MAX_SIZE)
            {
                prime[currNum] = false;
                currNum += i;
            }
        }
    }
    for (int i = 2; i <= MAX_SIZE; i++)
    {
        if (prime[i]) cout << i << " ";
    }
    cout << endl;
}

int main()
{
    eratostensSieve();
}
*/

/// REFERENCE TO A POINTER
/*
int main()
{
    char *str = "Hello";
    char *ptr = str;
    char *&rptr = str;

    char *world = "World";
    rptr = world;
    cout << str << endl;
}
*/

/// POINTER TO POINTER
void cant_change(int *x, int *z)
{
    x = z;
}

void change(int **x, int **z)
{
    *x = *z;
}

int main()
{
    int c = 1;
    int d = 2;
    int e = 3;
    int *a = &c;
    int *b = &d;
    int *f = &e;
    int **pp = &a;
    cant_change(a, f);
    cout << a << " " << f << endl;
    change(pp, &f);
    cout << *pp << " "<< f << endl;
}
