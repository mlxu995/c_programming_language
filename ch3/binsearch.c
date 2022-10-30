# include <stdio.h>


int binsearch(int x, int v[], int n){
    int low, mid, high;
    low = 0;
    high= n-1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (x == v[mid]) {
            return mid;
        } else if (x < v[mid]) {
            high = mid - 1;
        } else if (x > v[mid]) {
            low = mid + 1;
        }
    }
    return -1;
}


int main(int argc, char const *argv[])
{
    int v[] = {1, 3, 6, 8, 12, 15, 16, 18, 22, 26, 35, 36, 52, 63, 76, 88};
    int x = 28;
    int index = binsearch(x, v, sizeof(v) / sizeof(x));
    if (index != -1) {
        printf("find x in index: %d of v.", index);
    } else {
        printf("no result");
    }
}
