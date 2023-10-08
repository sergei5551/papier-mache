#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int recurs(int n, int b) {
    if (n > 1) {
        recurs(n-1, b+1);
    }
    else if (n == 1) {
        return b;
    }

}

int sins() {
    float k1, k2;
    cout << "Введите противолежайший катет: "; cin >> k1;
    cout << "Введите прилижайший катет: "; cin >> k2;
    float gip = sqrt(pow(k1, 2) + pow(k2, 2));
    cout << (180 * sin(k1 / gip) )/ M_PI ;
    return 0;
}

int coss() {
    float k1, k2;
    cout << "Введите противолежайший катет: "; cin >> k1;
    cout << "Введите прилижайший катет: "; cin >> k2;
    float gip = sqrt(pow(k1, 2) + pow(k2, 2));
    cout << (180 * sin(k2 / gip) )/ M_PI;
    return 0;
}

int discriminant() {
    float D,a,b,c;
    cout << "Введите a: "; cin >> a;
    cout << "Введите b: "; cin >> b;
    cout << "Введите c: "; cin >> c;
    if (a != 0 && b != 0) {


        D = pow(b, 2) - (4 * a * c);
        if (D > 0) {
            float x1, x2;
            x1 = (-(b)+sqrt(D)) / (2 * a);
            x2 = (-(b)-sqrt(D)) / (2 * a);
            cout << "x1 = " << x1 << "; x2 = " << x2;
        }
        else if (D == 0) {
            float x;
            x = -(b) / (2 * a);
            cout << "x = " << x;
        }
        else {
            cout << "нет решений";
        }
    }
    else {
        cout << "Дискрименант можно найти только в квадратичном уровнении";
    }
    return 0;
    }

int matrixDeterminant() {
    float a11, a12, a21, a22;
    cout << "a11: "; cin >> a11;
    cout << "a12: "; cin >> a12;
    cout << "a21: "; cin >> a21;
    cout << "a22: "; cin >> a22;
    cout << "Определитель матрицы: " << (a11 * a22) - (a12 * a21);
    return 0;
}

int main()
{
    int a = 0;
    int i = 0;
    setlocale(0, "ru");
    while (a != 5) {
        if (i == 1){
            cout << "\n";
        }
        i = 1;
        cout << "Введите действие которое хотите сделать: " << endl;
        cout << "1)Решение рекусивной задачи" << endl;
        cout << "2)Нахождение sin/cos" << endl;
        cout << "3)Дискрименант" << endl;
        cout << "4)Нахождение определителя матрицы(только с 2-ой матрицей)" << endl;
        cout << "5)Выход" << endl;
        cout << "Вывод:"; cin >> a;

        switch (a)
        {
        case 1:
            int n; int b;
            cout << "Введите n: "; cin >> n;
            cout << "Введите b: "; cin >> b;
            cout << recurs(n, b);
            break;
        case 2:
            cout << "1)sin\n2)cos\nВывод: "; cin >> a;
            
            if (a == 1) {
                sins();
            }
            else if(a == 2) {
                coss();
            }
            else {
                cout << "Фигню какую-то ввели...";
            }
            
            break;
        case 3:
            discriminant();
            break;
        case 4:
            matrixDeterminant();
            break;
        default:
            return 0;
        }
    }
}