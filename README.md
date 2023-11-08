# Sudoku-Validator-
This C program validates a given Sudoku solution. It checks each row, column, and 3x3 box to ensure that each number from 1 to 9 appears exactly once.

Approach
The program uses three functions to validate the Sudoku solution:

rowcheck(int arr[9][9]): This function checks each row of the Sudoku grid. It uses a frequency array to count the occurrences of each number in a row. If any number appears more than once, it returns 0 (false), indicating that the Sudoku solution is invalid.

colcheck(int arr[9][9]): This function checks each column of the Sudoku grid in a similar way to rowcheck.

boxcheck(int arr[9][9]): This function checks each 3x3 box of the Sudoku grid. It iterates over each box and uses a frequency array to count the occurrences of each number. If any number appears more than once, it returns 0 (false).

In the main function, the Sudoku grid is defined as a 2D array. The program then calls rowcheck, colcheck, and boxcheck on the Sudoku grid. If all three functions return 1 (true), the program prints “success”, indicating that the Sudoku solution is valid. Otherwise, it prints “failed”.

Usage
To run the program, compile it with a C compiler and execute the resulting binary. The Sudoku grid is currently hardcoded into the program, so you’ll need to modify the source code to check a different Sudoku solution.

Please note that this program assumes that the input Sudoku grid is a 9x9 grid and contains only numbers from 1 to 9. It does not perform any error checking on the input.
