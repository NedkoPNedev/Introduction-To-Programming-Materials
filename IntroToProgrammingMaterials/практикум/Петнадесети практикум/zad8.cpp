#include<iostream>
#include<string.h>
using namespace std;
struct Person
{ int age;
  char name[128];
};

void in(int &n, Person a[])
{ cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i].name >> a[i].age;
}

bool CompareTwoPersons(Person p1, Person p2)
{ if (strcmp(p1.name, p2.name) == 0)
    return p1.age > p2.age;
  
  return strcmp(p1.name, p2.name) > 0;
}

void SortPersons(bool (*compare)(Person, Person), int n, Person a[])
{ for (int i = 0; i < n - 1; i++)
  { int k = i;
    Person minn = a[i];
    
    for (int j = i + 1; j < n; j++)
      if (compare(minn, a[j]) == true)
      { minn = a[j];
        k = j;
      }
    
    Person t = a[i];
    a[i] = a[k];
    a[k] = t;
  }
}

void print(int n, Person a[])
{ cout << n << endl;
  for (int i = 0; i < n - 1; i++)
    cout << a[i].name << ' ' << a[i].age << endl;
  cout << a[n - 1].name << ' ' << a[n - 1].age << endl;
}

int main()
{ 
  int n;
  Person a[128];
  
  in(n, a);
  
  bool (*compare)(Person, Person);
  compare = CompareTwoPersons;
  
  SortPersons(compare, n, a);
  
  print(n, a);
  
  return 0;
}
