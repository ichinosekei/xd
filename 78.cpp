#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
void start() {
    cout << "Сыграй со мной в классическую игру ним " << '\n';
    cout << "Перед тобой 3 ряда. В первом 3 фишки, во втором 4, в третьем 5." << '\n';
    cout << "Ты можешь взять любое количество фишек из любого ряда. Выигрывает тот кто последний забирает фишки." << '\n';
    cout << "Твой ход. Укажи сначала номер ряда из которого хочешь взять фишки через пробел укажи количество фишек которых надо взять" << '\n';
}
int game(int &x, int &y, int &z) {
    cout << " Компьютер сходил. Расклад такой:";
    if (true) {
        if (x != 0) {
            for (int i = 1; i != x; ++i) {
                if (((x - i) ^ y ^ z) == 0) {
                    x = x - i;
                    return 0;
                }
            }
        }
        if (y != 0) {
            for (int j = 1; j != y; ++j) {
                if (((y - j) ^ x ^ z) == 0) {
                    y = y - j;
                    return 0;
                }
            }
        }
        if (z != 0){
            for (int k = 1; k != z; ++k) {
                if (((z - k) ^ x ^ y) == 0) {
                    z = z - k;
                    return 0;
                }
            }
        }
    }
    if (x != 0) {
        x = 0;
        return 0;
    }
    else if (y != 0) {
        y = 0;
        
        return 0;
    }
    else { z = 0;
    return 0;
    }
}


int main() {
    start();
    int raw1=3, raw2=4, raw3=5;
    bool proverka = true;
    int choice_raw, choice_count;
    while (proverka) {
        cin >> choice_raw >> choice_count;
        switch (choice_raw)
        {
        case 1:  
            raw1 -= choice_count;
            break;
        case 2: 
            raw2 -= choice_count;
            break;
        case 3:
            raw3 -= choice_count;
            break;
        }
        if (raw1 + raw2 + raw3 == 0) {
            cout << "Human win";
            proverka = false;
            break;
        }
        game(raw1, raw2, raw3);
        if (raw1 + raw2 + raw3 == 0) {
            cout << "Computer win";
            proverka = false;
            break;
        }
        else {
            cout << "В 1ом ряду = " << raw1 << " В 2ом ряду = " << raw2 << " В 3ом ряду = " << raw3<<"\n" << "Ваш ход" << "\n";
        }
    }
    
}