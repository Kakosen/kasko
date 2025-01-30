#include<iostream>

int main(int argc, char** argv)
{
    int a[6] = {7, 1, 4, 8, 6, 10};

    for (int i = 0; i < 6; ++i){
        int min_index = i;
        for (int j = i+1; j < 6; ++j){
            if(a[j] < a[min_index])
                min_index = j;
        }

        if(min_index != i) {
            int temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
        }
    }

    for (int x : a)
        std::cout << x << "\n";

    return 0;
}