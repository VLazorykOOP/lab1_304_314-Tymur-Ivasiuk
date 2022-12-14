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

int main()
{
    srand(time(NULL));
    int n, m;
    cout << "Введіть розмірність масиву А: ";
    cin >> n;
    cout << "Введіть розмірність масиву B: ";
    cin >> m;
    
    int a[n], b[m], c[n+m], count=0;
    
    Zap(a, n);
    Zap(b, m);
    
    for(int i=0; i<n; i++){
        if(a[i]>0) {
            c[count++] = a[i];
        }
    }
    for(int i=0; i<m; i++){
        if(b[i]>0) {
            c[count++] = b[i];
        }
    }
    for(int i=0; i<n; i++){
        if(a[i]<0) {
            c[count++] = a[i];
        }
    }
    for(int i=0; i<m; i++){
        if(b[i]<0) {
            c[count++] = b[i];
        }
    }
    
    
    
    for(int i=0; i<count; i++){
        cout << c[i] << " ";
    }
}
