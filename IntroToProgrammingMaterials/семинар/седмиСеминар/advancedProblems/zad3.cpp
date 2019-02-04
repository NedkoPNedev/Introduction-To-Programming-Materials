#include <iostream>

using namespace std;

bool isFound(int n, int* pat, int* seq, int position)
{
    for (int i = 0; i < n; i++)
    {
        if (pat[i] != seq[i + position])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    const int SIZE = 100;
    int patLen, seqLen, pat[SIZE], seq[SIZE], found = 0;
    cin >> patLen;
    for (int i = 0; i < patLen; i++)
    {
        cin >> pat[i];
    }
    cin >> seqLen;
    for (int j = 0; j < seqLen; j++)
    {
        cin >> seq[j];
    }
    for (int i = 0; i < seqLen - patLen + 1; i++)
    {
        found += isFound(patLen, pat, seq, i);
    }
    cout << found << endl;
    /// KMP Search Algorithm - better solution https://www.youtube.com/watch?v=GTJr8OvyEVQ
    return 0;
}
