#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct Array
{ char arr[1001];
  char SaveArr[1001];
};

int n, MaxLength;
Array a[100001];
char answer[100101001];
void in()
{ cin >> n;
  for (int i = 0; i < n; i++)
  { cin >> a[i].arr;
    strcpy(a[i].SaveArr, a[i].arr);
    int s = strlen(a[i].arr);
    
    if (s > MaxLength)
      MaxLength = s;
  }
}

void ExtendTheWordsInTheArray()
{ for (int i = 0; i < n; i++)
  { int s = strlen(a[i].arr);
    for (int j = s; j < MaxLength; j++)
    a[i].arr[j] = a[i].arr[j % s];
  }
}

bool compare(Array q, Array w)
{ return strcmp(q.arr, w.arr) <= 0;
}

void Solve()
{ ExtendTheWordsInTheArray();
  sort(a, a + n, compare);
  
  for (int i = 0; i < n; i++)
    strcat(answer, a[i].SaveArr);
  
  cout << answer << endl;
}

int main()
{ 
  in();
  Solve();
  
  return 0;
}
/*
5
adf
bcd
aag
bcdaaaa
bcdaaaaaaa
*/
