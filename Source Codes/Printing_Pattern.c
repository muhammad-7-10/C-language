#include <stdio.h>

int main()
{
    printf("---------Number Pattern--------\n");

    int p = 1;
    while (p <= 5)
    {
        char q = 1;
        while (q <= p)
        {
            printf("%d", p);
            q++;
        }
        printf("\n");
        p++;
    }

    printf("---------Star Pattern----------- \n");
    int m, n;
    printf("Enter the number of rows\n");
    scanf("%d", &n);
    m = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m - 1; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        m--;

        printf("\n");
    }

    /*Understanding the star pattern code
    This program prints a pyramid star pattern based on the number of rows (`n`) entered by the user. Let’s break down how it works step-by-step:

### Explanation
#### **Input**
- The user is prompted to enter the number of rows (`n`).
- The variable `m` is initialized with the same value as `n`. This variable controls the number of spaces before the stars on each row.

#### **Loop Structure**
1. **Outer Loop (`for` loop with `i`)**:
   This loop runs `n` times, representing the rows from `1` to `n`.
   Each iteration corresponds to a row of the pyramid.

2. **Inner Loop 1 (`for` loop with `j`)**:
   ```c
   for(int j=1;j<=m-1;j++)
   ```
   - Prints spaces before the stars.
   - On each row, the number of spaces printed is `m - 1`.
   - Initially, `m = n`, so the first row will have `n-1` spaces.
   - `m` is decremented (`m--`) after each row, reducing the number of spaces by one for each subsequent row.

3. **Inner Loop 2 (`for` loop with `k`)**:
   ```c
   for(int k=1;k<=2*i-1;k++)
   ```
   - Prints stars (`*`) on each row.
   - The number of stars in row `i` is `2*i - 1`.
   - This formula generates an increasing odd number sequence: `1, 3, 5, 7, ...`.

4. **Newline**:
   After each row, a newline (`\n`) is printed to move to the next row.

#### **Pattern for n = 4**
Let’s walk through an example where `n = 4`.

| Row | Spaces (m-1) | Stars (2*i - 1) | Printed Output |
|-----|--------------|----------------|----------------|
|  1  |      3       |       1        |    `   *`      |
|  2  |      2       |       3        |    `  ***`     |
|  3  |      1       |       5        |    ` *****`    |
|  4  |      0       |       7        |    `*******`   |

The result is a pyramid of stars centered on each row.

### Key Observations
- The first loop controls the number of rows.
- The second loop aligns the stars by printing spaces.
- The third loop prints the stars in a centered, expanding pattern.

This combination of loops creates the symmetric star pattern.*/

    return 0;
}