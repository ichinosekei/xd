#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
 
using namespace std;

void start() {
    cout << "Сыграй со мной в классическую игру ним " << '\n';
    cout << "Перед тобой 3 ряда. В первом 3 фишки, во втором 4, в третьем 5." << '\n';
    cout << "Ты можешь взять любое количество фишек из любого ряда. Выигрывает тот, кто последний забирает фишки." << '\n';
    cout << "Твой ход. Укажи сначала номер ряда, из которого хочешь взять фишки, через пробел укажи количество фишек, которые надо взять" << '\n';
}

int game(vector<int>& raws) {
    cout << "Компьютер сходил. Расклад такой:";

    int& x = raws[0];
    int& y = raws[1];
    int& z = raws[2];

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

    if (x != 0)
    {
        x = 0;
        return 0;
    }
    else if (y != 0) 
    {
        y = 0;
        return 0;
    }
    else 
    { 
        z = 0;
        return 0;
    }
}
 
enum {
    EnRow_1 = 1, // первый столбец
    EnRow_2 = 2, // второй столбец
    EnRow_3 = 3 // третий столбец
};
 
int main() {
    start();
    vector<int> raws = {3, 4, 5};
    bool check_working = true;
    int choice_raw, choice_count;
    while (check_working) {
        cin >> choice_raw >> choice_count;
        switch (choice_raw)
        {
        case EnRow_1:  
            raws[0] -= choice_count;
            break;
        case EnRow_2: 
            raws[1] -= choice_count;
            break;
        case EnRow_3:
            raws[2] -= choice_count;
            break;
        }
        if (raws[0] + raws[1] + raws[2] == 0) {
            cout << "Human win";
            check_working = false;
            break;
        }
        
        game(raws);
        
        if (raws[0] + raws[1] + raws[2] == 0) {
            cout << "Computer win";
            check_working = false;
            break;
        }
        else {
            cout << "В 1ом ряду = " << raws[0] << " В 2ом ряду = " << raws[1] << " В 3ом ряду = " << raws[2]<<"\n" << "Ваш ход" << "\n";
        }
    }
}
