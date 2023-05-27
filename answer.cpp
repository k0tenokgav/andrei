#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int i;
    int no = 0;
    int* bot;
    bot = new int[n];
    for (i=1; i <= n; i++) {
        cin >> bot[i];
    }
    for (i=2; i<=n; i++){
        if (bot[i] < bot[i - 1])
            no = 1;
    }
    
    if (no == 1) {
        cout << "-1";
    }
    else {
        int max=1;
        int schet = 0;
        for (i = 1;i <= n;i++) {
            if (bot[i] > max)
                max = bot[i];
        }
        while (bot[1] != bot[n]) {
            bot[1]++;
            schet++;
        }
        cout << schet;
    }
    return 0;
}
