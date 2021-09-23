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

        bool isFound = false;
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                for (int k = +1; k < size; k++)
                {
                    if (v[i] + v[j] == v[k])
                    {
                        cout << i << "," << j << "," << k << "\n";
                        isFound = true;
                    }
                }
            }
        }

        if (isFound)
        {
            cout << "\n";
        }
        else
        {
            cout << "not found\n";
        }
    }
    return 0;
}

/*
input: - 


1
10
1 2 3 4 5 6 7 8 9 10


output:-
0,1,2
0,2,3
0,3,4
0,4,5
0,5,6
0,6,7
0,7,8
0,8,9
1,2,4
1,3,5
1,4,6
1,5,7
1,6,8
1,7,9
2,3,6
2,4,7
2,5,8
2,6,9
3,4,8
3,5,9

*/
