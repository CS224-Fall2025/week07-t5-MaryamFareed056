#include <iostream>
#include <cmath>


void FindHappiness (int num);
int sum_of_squares(int a); //helper function

int main() {

    int n; //initialized as garbage value here!
    std::cout << "Enter an integer n: ";
    std::cin >> n;


    while ( n < 1 ) {
        std::cout << "Invalid Input! Try Again!" << std::endl;
        std::cout << "Enter an integer n: ";
        std::cin >> n;
    }
    //if n>=1 that means valid input, then store it in n  and call the function!!
    std::cout << "n = " << n << std::endl;
    FindHappiness (n);
    return 0;
}

int sum_of_squares(int a) {
    int sum = 0; // initialize sum to 0 here otherwise it picks a garbage value!!
    while ( a > 9 ) { //digit extraction has still not reached the first digit i.e. the unit's place
        //a = 234 then 23 
        sum += std::pow ( (a % 10), 2 ); // sum= 4^2 then +3^2
        a = a / 10 ; //integer division in C++
    }
    sum += std::pow ( a, 2); // add the last extracted digit ka square i.e the first digit i.e the unit's place.
    return sum;

}

void FindHappiness (int num){

    int mood_sum = num;
    while (mood_sum > 9) { //until mood_sum is not single digit, run while loop
        mood_sum = sum_of_squares(num);
        // std::cout << "(Mood Sum = " << mood_sum << " )";
        num = mood_sum; //imp line!!
    }

    //when mood_sum is single digit 
    if (mood_sum == 1) { std::cout << "\nHappy Number!";  std::cout << "(Mood Sum = " << mood_sum << " )"; }
    else { std::cout << "\nSad Number!"; std::cout << "(Mood Sum = " << mood_sum << " )"; }

    return;
}
