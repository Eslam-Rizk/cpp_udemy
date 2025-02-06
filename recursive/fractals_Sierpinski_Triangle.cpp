#include <iostream>
using namespace std;

/*
Fractals are self-similar patterns at different scales. The Sierpiński Triangle is a famous recursive fractal.

Base Case: If the size is small enough, print a single triangle.
Recursive Case: Divide the triangle into smaller sub-triangles.
 */

void sierpinski(int n, int x, int y, char canvas[][64])
{
    // Base case: when n == 0, print a single '*' character at the position (x, y)
    if (n == 0)
    {
        canvas[y][x] = '*'; // Mark the current position on the canvas
        return;             // Exit the function (no further recursion)
    }

    // Calculate the size of the current triangle (2^(n-1))
    int size = 1 << (n - 1); // This is equivalent to 2^(n-1)

    // Recursive cases: break the larger triangle into smaller sub-triangles
    // Call for the top triangle
    sierpinski(n - 1, x, y, canvas); // Top: stays at the same (x, y)

    // Call for the bottom-left triangle, move the position down and to the left by 'size'
    sierpinski(n - 1, x - size, y + size, canvas); // Bottom-left: move by 'size' to the left and down

    // Call for the bottom-right triangle, move the position down and to the right by 'size'
    sierpinski(n - 1, x + size, y + size, canvas); // Bottom-right: move by 'size' to the right and down
}

int main()
{
    const int N = 6;         // Set the level of recursion for the Sierpiński Triangle (controls the depth of the fractal)
    const int SIZE = 1 << N; // Calculate the size of the canvas, which is 2^N

    // Create a 64x64 canvas initialized with spaces (' ') to represent empty spots
    char canvas[64][64] = {{' '}}; // Initialize the 2D array with spaces

    // Start the fractal drawing at the top-center of the canvas
    sierpinski(N, SIZE / 2, 0, canvas); // (SIZE / 2, 0) is the top-center of the canvas

    // Print the canvas with the fractal pattern
    // Loop through each row of the canvas
    for (int i = 0; i < SIZE; i++)
    {
        // Loop through each column of the current row
        for (int j = 0; j < SIZE; j++)
            // Print '*' for filled spots and space for empty spots
            cout << (canvas[i][j] == '*' ? '*' : ' ');
        cout << endl; // Move to the next row after printing all columns
    }

    return 0; // Return 0 to indicate the program executed successfully
}
