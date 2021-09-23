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
        int key = -1;
        cin >> key;

        int jump = 4;
        int lastIndex = 0;
        int index = 0;
        bool isFound = false;

        while (v[index] < key)
        {
            if (size > index + jump)
            {
                index += jump;
            }
            else
            {
                break;
            }

            lastIndex = index - jump;
        }

        for (int i = lastIndex; i <= index; i++)
        {
            // cout<<v[i]<<":"<<key;
            if (v[i] == key)
            {
                isFound = true;
            }
        }

        if (!isFound)
        {
            cout << "not present"
                 << "\n";
        }
        else
        {
            cout << "present"
                 << "\n";
        }
    }
    return 0;
}

/*
input: - 


1
10
1 2 3 4 5 6 7 8 9 10
4

output:-
present


*/
