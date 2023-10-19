#include <iostream>
using namespace std;
int main() {

    //Task 1. Write a program that loads 10 real numbers into an array.
    // At the end of the program, write out the sum of all the elements of the array
    int table_size = 10;
    double board[table_size];
    double sum;

    cout << "Give 10 real numbers " << endl;

    for(int i = 0; i < table_size; i++){
        cout << "Number " << i + 1 << " : ";
        cin >> board[i];
        sum += board[i];
    }
    cout << "Sum of all elements of the array" << sum;


    //Task 2. Write a program that will print the average value of the elements of an array.
    // It will take from the user the size of the array n<=200 and the n elements of the array

    int sizeTable;
    do{
        cout << "Specify an array size less than 200 ";
        cin >> sizeTable;
    }
    while (sizeTable <= 0 || sizeTable > 200);
    int TABLET[sizeTable];
    int Sum;
    cout << "Enter " << sizeTable << " real numbers \n";
    for (int i = 0; i < sizeTable; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> TABLET[i];
        Sum += TABLET[i];
    }
    int average = Sum / sizeTable;
    cout << "The average value of the array elements is " << average << endl;


    //Task 3. Write a program that counts the number of even and odd numbers in an array.
    // Get the size of the array n<=200 and n elements of the array from the user
    int SizeTable;

    do {
        cout << "Specify an array size less than 200 ";
        cin >> SizeTable;
    } while (SizeTable <= 0 || SizeTable > 200);

    int Board[SizeTable];
    int even_number = 0;
    int odd_number = 0;

    cout << "Enter " << SizeTable << " integers \n";
    for (int i = 0; i < SizeTable; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> Board[i];

        if (Board[i] % 2 == 0) {
            even_number++;
        } else {
            odd_number++;
        }
    }
    cout << "Number of even numbers: " << even_number << endl;
    cout << "Number of odd numbers: " << odd_number << endl;

    
    //Task 4. Write a program to check if an array has values set ascending.
    // Get the user os the size of the array n<=200 and n elements of the array
    int Size_table;

    do {
        cout << "Specify a tab size no larger than 200 ";
        cin >> Size_table;
    } while (Size_table <= 0 || Size_table > 200);

    int BOARD [Size_table];
     cout << "Podaj " << Size_table << " liczb całkowitych " << endl;
     for (int i=0; i < Size_table; i++){
         cout << "Number " << i + 1 << " ";
         cin >> BOARD[i];
     }
     bool arranged_in_ascending_order = true;
     for ( int i = 1; i <Size_table; i++ ){
         if (BOARD [i] < BOARD[i - 1]){
             arranged_in_ascending_order = false;
             break;
         }
     }
     if (arranged_in_ascending_order){
         cout << "The array is arranged in ascending order";
     }
     else {
         cout << "The array is not arranged in ascending order";
     }








    return 0;
}
