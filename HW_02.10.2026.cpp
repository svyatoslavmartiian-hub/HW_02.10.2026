#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    {
        long long arr1[5] = { 380674821905, 380509136428, 380932058714, 380687340291, 380956415370 };
        long long arr2[5] = { 1487156304, 1442384192, 1322940857, 1577621483, 1563709216 };
        int num = 0;
        while (true) {
            cout << "\nВідсортувати за номерами мобільних";
            cout << "\nВідсортувати за домашніми номерами телефонів";
            cout << "\nВивести список користувачів";
            cout << "\nВихід";
            cout << "\nВедіть номер дії: ";
            cin >> num;

            if (num == 1) {
                for (int i = 0; i < 5;++i) {
                    for (int j = 5 - 1; j > i; --j) {
                        if (arr1[j - 1] > arr1[j]) {
                            long long temp = arr1[j - 1];
                            arr1[j - 1] = arr1[j];
                            arr1[j] = temp;
                        }

                    }
                }


            }
            else if (num == 2) {

                for (int i = 0; i < 5;++i) {
                    for (int j = 5 - 1; j > i; --j) {
                        if (arr2[j - 1] > arr2[j]) {
                            long long temp = arr2[j - 1];
                            arr2[j - 1] = arr2[j];
                            arr2[j] = temp;
                        }

                    }
                }

            }


            else if (num == 3) {
                cout << "\nМобільні телефони: ";
                for (int x = 0;x < 5;++x) {
                    cout << arr1[x] << ' ';
                }
                
                cout << "\nМобільні телефони: ";
                for (int x = 0;x < 5;++x) {
                    cout << arr2[x] << ' ';
                }
            }

            else if (num == 4) {
                break;
            }

          

            

        }
    
    
    
    }



    //{
    //    const int SIZE = 10;
    //    int arr[SIZE] = { 12,13,14,-14,15,165,-166,167,168,169 };

    //    bool swap = false;
    //    for (int i = 0; i < SIZE;++i) {
    //        swap = false;
    //        for (int j = SIZE - 1; j > i; --j) {
    //            if (arr[j - 1] > arr[j]) {
    //                int temp = arr[j - 1];
    //                arr[j - 1] = arr[j];
    //                arr[j] = temp;
    //                swap = true;
    //            }

    //        }
    //        if (swap == 0) {
    //            break;
    //        }
    //    }

    //    for (int i = 0; i < SIZE;++i) {
    //        cout << arr[i] << ' ';
    //    }
    //}








    //{
    //    const int SIZE = 10;
    //    int arr[SIZE] = { 130, 234, 2, 1, 456, 324, 15, 34, 7, 12 };
    //    int temp = 0;

    //    for (int i = SIZE; i > 1; --i) {
    //        int temp_index = 0;

    //        for (int x = 0; x < i; ++x) {
    //            if (arr[x] > arr[temp_index]) {
    //                temp_index = x;
    //            }
    //        }

    //        if (temp_index != i - 1) {
    //            if (temp_index > 0) {
    //                int start = 0;
    //                int end = temp_index;
    //                while (start < end) {
    //                    temp = arr[start];
    //                    arr[start] = arr[end];
    //                    arr[end] = temp;
    //                    ++start;
    //                    --end;
    //                }
    //            }

    //            int start = 0;
    //            int end = i - 1;
    //            while (start < end) {
    //                temp = arr[start];
    //                arr[start] = arr[end];
    //                arr[end] = temp;
    //                ++start;
    //                --end;
    //            }
    //        }
    //    }

    //    for (int i = 0;i < SIZE;++i) {
    //        cout << arr[i] << ' ';
    //    }

    //}


}


