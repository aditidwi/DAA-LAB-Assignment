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
        int key;
        cin >> key;
        for (int i = 0; i < size; i++)
        {
            int temp = 0;
            cin >> temp;
            v.push_back(temp);
        }

        int count = 0;
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (abs(v[i] - v[j]) == key)
                {
                    count++;
                }
            }
        }
        cout << count << "\n";
    }
    return 0;
}

/*
input: - 


1
10
2
1 2 3 4 5 6 7 8 9 10


output:-
8


*/
