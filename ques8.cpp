// double getAverage(int arr[], int size);
// int main () {
// int balance[5] = {1000, 2, 3, 17, 50};
// double avg;
// avg = getAverage( balance[0], 5 ) ;
// cout << "Average value is: " << avg << endl;
// return 0;
// }

//ANSWER: The error was in the way the array was passed to the function. In C++, when passing an array to a function, pass the array's name (like balance),
//         not an individual element (like balance[0]).