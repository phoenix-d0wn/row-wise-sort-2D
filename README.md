# row-wise-sort-2D

This algorithm sorts a 2D matrix in ascending order row wise.

# How it works

Step 1:
Initiate count to 0.

Step 2:
Start with second column of that row. If the number in the column previously is bigger than the current one, swap the two values.
Reset count to 0.

Else, increment count by 1.

Move on to next column.

Repeat this step until count is equal to the number of columns of the matrix.

Step 3:
Repeat Step 1 - 2 for the next row.