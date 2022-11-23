#include <iostream>
using namespace std;

int main() {
      int n=0,a=1, b=1;
    cin >> n;
    if(n>=2) {
        cout << a << endl;
        for (int i = 0; i < n ; i++) {
            int c = a;
            a += b;
            b = c;
            cout << c << endl;
        }
    }else{
        cout << "errore"<<endl;
    }
   return 0;
}
