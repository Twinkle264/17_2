#include <iostream>

using namespace std;

void reverseInt(int* arr) {
    for (int i = 0; i < 5; ++i) {
        int tmp = *(arr + i);
        *(arr+i) = *(arr + 9 - i);
        *(arr+9-i) = tmp;
    }
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* pArr = arr;
    /*Как я понял я могу не создавать указатель pArr тк сам массив является указателем на переменные лежащие в нем
     * и я могу передать в функцию сразу массив arr*/
    reverseInt(pArr);

    for (int i = 0; i < 10; ++i) {
        cout << *(arr+i) << " ";
    }
    return 0;
}
