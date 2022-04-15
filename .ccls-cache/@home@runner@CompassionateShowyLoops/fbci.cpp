#include <iostream>
using namespace std;

class fibonacci{
    public :
        void iteratif(int n){
            cout << "Menggunakan iteratif :" <<endl;
            cout << "Masukan Batas Deret Bilangan Fibonacci :  ";
            cin >> n ;
            cout << "Deret Fibonacci: ";

            for (int i = 1; i <= n; ++i)
            {
                if (i == 1)
                {
                    cout << " " << f1 << " ";
                    continue;
                }
                if (i == 2)
                {
                    cout << f2 << " ";
                    continue;
                }
                selanjutnya = f1 + f2;
                f1 = f2;
                f2 = selanjutnya;
                cout << selanjutnya << " ";
            }
        }

        int rekursif(int m){
            if (m == 0 || m == 1)
            {
                return m;
            }
            else
            {
                return (rekursif(m - 1) + rekursif(m - 2));
            }
        }

    private :
        int f1 = 0, f2 = 1, selanjutnya = 0, m = 0;

};

int main (){
    int n, m = 0, p;

    fibonacci fibo;

    fibo.iteratif(n);

    cout << endl<<endl;
    cout << "Menggunakan rekursif :"<<endl;
    cout << "Masukan Batas Deret Bilangan Fibonacci :  ";
    cin  >> p;
    cout << "Deret Fibonacci: ";
    for (int i = 1; i <= p; i++)
    {
        cout << fibo.rekursif(m) << " ";
        m++;
    }


    return 0;
}