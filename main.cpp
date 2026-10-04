#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

    int max1 = 0, mid1 = 0, min1 = 10000;

    if (a1 >= b1 && a1 >= c1) {
        max1 = a1;
        if (b1 <= c1) {
            min1 = b1;
            mid1 = c1;
        }
        else {
            min1 = c1;
            mid1 = b1;
        }
    }

    else if (b1 >= a1 && b1 >= c1) {
        max1 = b1;
        if (a1 < c1) {
            min1 = a1;
            mid1 = c1;
        }
        else {
            min1 = c1;
            mid1 = a1;
        }
    }

    else {
        max1 = c1;
        if (a1 < b1) {
            min1 = a1;
            mid1 = b1;
        }
        else {
            min1 = b1;
            mid1 = a1;
        }
    }

    // cout << min1 << " " << mid1 << " " << max1 << endl;

    int max2 = 0, mid2 = 0, min2 = 10000;

    if (a2 >= b2 && a2 >= c2) {
        max2 = a2;
        if (b2 < c2) {
            min2 = b2;
            mid2 = c2;
        }
        else {
            min2 = c2;
            mid2 = b2;
        }
    }


    else if (b2 >= a2 && b2 >= c2) {
        max2 = b2;
        if (a2 < c2) {
            min2 = a2;
            mid2 = c2;
        }

        else {
            min2 = c2;
            mid2 = a2;
        }
    }

    else {
        max2 = c2;
        if (a2 < b2) {
            min2 = a2;
            mid2 = b2;
        }

        else {
            min2 = b2;
            mid2 = a2;
        }
    }

    // cout << min2 << " " << mid2 << " " << max2;

/*
    int max1 = max({a1, b1, c1});
    int min1 = min({a1, b1, c1});
    int mid1 = (a1 + b1 + c1) - min1 - max1;

    // cout << max1 << " " << mid1 << " " << min1 << endl;

    int max2 = max({a2, b2, c2});
    int min2 = min({a2, b2, c2});
    int mid2 = (a2 + b2 + c2) - min2 - max2;

    // cout << max2 << " " << mid2 << " " << min2 << endl;
*/

    if (max1 == max2 and mid1 == mid2 and min1 == min2)
        cout << "Boxes are equal" << endl;

    else if (max1 >= max2 and mid1 >= mid2 and min1 >= min2)
        cout << "The first box is larger than the second one" << endl;

    else if (max1 <= max2 and mid1 <= mid2 and min1 <= min2)
        cout << "The first box is smaller than the second one" << endl;

    else
        cout << "Boxes are incomparable" << endl;

/*
    int v1 = a1 * b1 * c1;
    int v2 = a2 * b2 * c2;

    if (v1 == v2) {
        cout << "Boxes are equal" << endl;
    }

    else if (v2 > v1) {
        cout << "The first box is smaller than the second one" << endl;
    }

    else if (v1 > v2) {
        cout << "The first box is larger than the second one" << endl;
    }

    else {
        cout << "Boxes are incomparable" << endl;
    }
*/

    return 0;
}