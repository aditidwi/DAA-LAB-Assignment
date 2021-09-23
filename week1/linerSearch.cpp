#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int n;
    cin >> n;
    while (n--)
    {
        int size;
        cin >> size;
        vector<int> v;
        for (int i = 0; i < size; i++)
        {
            int temp = 0;
            cin >> temp;
            v.push_back(temp);
        }
        int key = 0;
        cin >> key;
        bool isFound = false;
        int keyFinal = -1;
        for (int i = 0; i < size; i++)
        {
            if (v[i] == key)
            {
                isFound = true;
                keyFinal = i;
                break;
            }
        }
        if (!isFound)
        {
            cout << "not present" << size << "\n";
        }
        else
        {
            cout << "present" << key << "\n";
        }
    }
    return 0;
}

/*
input: - 
3
8
34 35 65 31 25 89 64 30
89
5
977 354 244 546 355
244
6
23 64 13 67 43 56
63

output:-
present89
present244
not present6

*/
