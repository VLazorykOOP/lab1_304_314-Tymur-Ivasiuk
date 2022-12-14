#include <iostream>
#include <time.h>

using namespace std;

void Zap(int *d, int t){
    for(int i=0; i<t; i++) {
        d[i] = rand() % 100-50;
        cout << d[i] << " ";
    }
    cout << endl;
}

int Max_E(int *d, int start, int end) {
    int max = -99;
    for(int i = start; i<end; i++){
        if(max<d[i]){
            max = d[i];
        }
    }
    return max;
}

int main()
{
    srand(time(NULL));
    int k = 15, n[k], ak, bk, max_index;
    Zap(n, k);
    
    cout << "Введіть початок діапазону: ";
    cin >> ak;
    cout << "Введіть кінець діапазону: ";
    cin >> bk;
    
    for(int i=ak; i<bk; i++) {
        if(n[i] > 0) {
            max_index = Max_E(n, i+1, bk);
            break;
        }
    }
    
    cout << max_index;
}
