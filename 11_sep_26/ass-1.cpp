#include <iostream>
using namespace std;

void sparseMatrix(int matrix[][10], int rows, int cols)
{
    int table[101][3];
    int nonZero = 0;

    // Count non-zero elements
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] != 0) 
                nonZero++;
        }
    }

    // Header row: rows, columns, non-zero count
    table[0][0] = rows;
    table[0][1] = cols;
    table[0][2] = nonZero;

    // Store non-zero elements row by row
    int k = 1;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] != 0)
            {
                table[k][0] = i;
                table[k][1] = j;
                table[k][2] = matrix[i][j];
                k++;
            }
        }
    }

    // Print original matrix
    cout << "\nOriginal Matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    // Print three-column table
    cout << "\nThree-Column Sparse Table:\n";
    cout << "Row\tColumn\tValue\n";

    for (int i = 0; i <= nonZero; i++)
    {
        cout << table[i][0] << "\t"
             << table[i][1] << "\t"
             << table[i][2] << endl;
    }

    // Rebuild matrix FROM TABLE ALONE
    int rebuilt[10][10] = {0};

    int r = table[0][0];
    int c = table[0][1];
    int count = table[0][2];

    for (int i = 1; i <= count; i++)
    {
        int row = table[i][0];
        int col = table[i][1];
        int value = table[i][2];

        rebuilt[row][col] = value;
    }

    // Print rebuilt matrix
    cout << "\nRebuilt Matrix:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << rebuilt[i][j] << "\t";
        }
        cout << endl;
    }

    // Check whether rebuilt matrix is identical
    bool identical = true;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (matrix[i][j] != rebuilt[i][j])
            {
                identical = false;
                break;
            }
        }
    }

    cout << "\nRebuild Status: ";
    if (identical)
        cout << "Identical";
    else
        cout << "Not Identical";

    // Storage comparison
    int matrixNumbers = rows * cols;
    int tableNumbers = 3 * (nonZero + 1);

    cout << "\nFull Matrix needs: " << matrixNumbers << " numbers";
    cout << "\nThree-Column Table needs: " << tableNumbers << " numbers";

    if (tableNumbers < matrixNumbers)
        cout << "\nSmaller: Three-Column Table";
    else if (tableNumbers > matrixNumbers)
        cout << "\nSmaller: Full Matrix";
    else
        cout << "\nBoth need the same number of numbers";

    cout << "\n";
}

int main()
{
    // -------------------------------
    // Matrix 1: 6 x 6
    // About five non-zero elements
    // -------------------------------

    int matrix1[10][10] = {
        {0, 0, 0, 5, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 7, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 9},
        {0, 0, 3, 0, 0, 0},
        {0, 0, 0, 0, 8, 0}
    };

    cout << "========================================\n";
    cout << "        MATRIX 1 (6 x 6)\n";
    cout << "========================================\n";

    sparseMatrix(matrix1, 6, 6);


    // -------------------------------
    // Matrix 2: 4 x 4
    // Almost no zeros
    // -------------------------------

    int matrix2[10][10] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    cout << "\n========================================\n";
    cout << "        MATRIX 2 (4 x 4)\n";
    cout << "========================================\n";

    sparseMatrix(matrix2, 4, 4);


    // Maximum non-zero elements for table
    // to remain smaller than full matrix
    cout << "\n========================================\n";
    cout << "Maximum Non-Zero Elements\n";
    cout << "========================================\n";

    cout << "For a 6 x 6 matrix: 10 non-zero elements maximum.\n";
    cout << "For a 4 x 4 matrix: 4 non-zero elements maximum.\n";

    return 0;
}