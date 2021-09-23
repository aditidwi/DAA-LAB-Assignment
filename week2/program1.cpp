#include <stdio.h>
int main()
{
    int temp;
    scanf("%d", &temp);
    while (temp--)
    {
        int size;
        scanf("%d", &size);
        int a[size], i, count = 0;
        for (i = 0; i < size; i++)
            scanf("%d", &a[i]);
        int key;
        scanf("%d", &key);
        int start = 0, end = size - 1, mid;
        while (start <= end)
        {
            mid = (start + end) / 2;
            if (a[mid] == key)
            {
                i = mid;
                while (a[i++] == key)
                    count++;
                i = mid - 1;
                while (a[i--] == key)
                    count++;

                printf("%d - %d\n", key, count);
                break;
            }
            else if (key < a[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
        if (count == 0)
            printf("Key not present.\n");
    }
    return 0;
}
