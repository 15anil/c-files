#include <iostream>
    using namespace std;
    int main()
    {
        int n = 5;
        void *p = &n;
        int *pi = static_cast<int*>(p);
        cout << *pi << endl;
        return 0;
    }