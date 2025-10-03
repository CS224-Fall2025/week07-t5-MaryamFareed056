//dont make syntactical erors in quizzes
//easy marks lost!!


// Function to compute max crops Johnny can harvest in 1 turn
#include <iostream>
using namespace std;

//since i am returning an array , therefore my return type should be int * = pointer to that array!!!! ! !  ! ! ! 
int* MaxCropHarvested(int **field, int n, int m); //double pointer = 2D array!

int main() {

    int n, m;
    cout << "Enter n";
    cin >> n;
    cout << "Enter m";
    cin >> m;

    // int field[n][m];
    //initialize 2nd array // allocate memory space to it!!
    int ** field = new int*[n]; //rows memory allocated //3 empty arrays
    // so rn field is 
    // field = [   n empty line,
    //             .,
    //             .,
    //              nth empty line,
    //         ]
    for (int i = 0; i < n; i++) {
        // field[i] = new int[n] //array method
        *(field + i) = new int[m]; //pointer to each row (remeber each row is an array)
        //so each row arry has now a capacity of m (col) integers!!
    }
       // so rn field is 
    // field = [
    //          [m integers],
    //          [m integers],
    //          [m integers],
    //         ]

    //2D array has been initialized above, now u should populate it.

    //Populate the Initialized 2D array
    for (int i=0; i < n; i++) {
        for (int j =0; j <n; j++){
            cin >> *(*(field + i) + j); //why the initial * needed?? //  we need to derefernce here too?? for cin??;
        }
    } 

    //now call the initialized array in main
    int* result = MaxCropHarvested(&field, n, m);  // how to call??

    if (result[0] == 1) {
        cout << "Col" << result[1];
    }else{
        cout << "Row" << result[1];
    }

    return 0;
}

int* MaxCropHarvested(int **field, int n, int m){

    // int* ptr_field = &field;
    // int* ptr_row = &row_count;
    // int* ptr_col = &col_count;
    int row_count[n];
    int sum_rows;

    // TRying to ACCESS each cell in the 2D array using pointer notation
    // for (i = 0; i < n; i++) {
    //     for (j = 0; j < m; j++) {
    //         sum_rows += *(ptr_field[j][i]);
    //         *(ptr_row + i) = sum_rows;
    //     }
    // }

    // CORRECT way to ACCESS each cell in the 2D array using pointer notation
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << *( * (field+i) + j ) ) << " "; // first * is for dereferencing // this is to print
             //to manipulate u can store in a variable
             int cell = *( * (field+i) + j ) );
        }
    }



    int col_count[m];
    int sum_cols;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum_cols += *(ptr_field[j][i]);
            *(ptr_col + i) = sum_cols;
        }
    }

    //calc max of rows
    int max_row = 0;
    for (int i = 0; i < n; i++){
        if (row_count[i] > max_row) {
            max_row = row_count[i];
        }
    }

    int max_col = 0;
    for (int i = 0; i < n; i++){
        if (col_count[i] > max_col) {
            max_col= col_count[i];
        }
    }

    //now compare max and col
    int arr[2];
    if (max_col > max_row){
        arr[0] = 1; //1 means its a col, 2 means its a row
        arr[1] = max_col;
        return arr; 
    }else {
        arr[0] = 2; //1 means its a col, 2 means its a row
        arr[1] = max_row;
        return arr;
    }

    // ____________________________________________
    // OR if u want to assign array directly then do assignment while initalizing
    // otherise u have to assignment one by one, either use a loop or do one by one!
    //now compare max and col
    
    // if (max_col > max_row){
    //     int arr[2] = {1, max_col}
    //     return arr; 
    // }

}