#include <iostream>

class Numpy {
    private:
        const int size = 10;  // const bcs numpy array always takes 10 values!!
    public:
        Numpy() {
            int arr1[size];
            std::cout << "Enter 10 integers with spaces to populate your first (Numpy) array!" << std::endl;
            for (int i = 0; i < 10; i++){
                std::cin >> arr1[i];
                // std::cout << arr1[i]  << " ";
            }

            int arr2[size] ;
            std::cout << "Enter 10 integers with spaces to populate your second (Numpy) array!" << std::endl;
            for (int i = 0; i < 10; i++){
                std::cin >> arr2[i];
                // std::cout << arr2[i] << " ";

            }

            int add_int;
            std::cout << "Enter integer to add to array: ";
            std::cin >> add_int;

        }

        int[] add (arr1[], arr2[]) {
            for (int i = 0; i < 10; i++){
                std::cout << arr2[i] + arr1[i] << " ";

            }
        }



};
int main() {

    

    return 0;
}