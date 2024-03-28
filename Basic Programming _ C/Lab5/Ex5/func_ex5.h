extern int N; //Declare the variable N and can use in both Ex5.c and this file

float sum(float A[N][N]){
    float sum = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            sum += A[i][j];
        }
    }

    return sum;
}

void print_trans(float A[N][N]){
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%.3f ", A[j][i]);
        }
        printf("\n");
    }
    
}

void get_cofac(float A[N][N], float temp[N][N], int n, int p, int q){
    int i =0;
    int j =0;
    for (int row = 0; row < n; row++)
    {
        for (int column = 0; column < n; column++)
        {
            if(row != p && column != q){
                temp[i][j] = A[row][column];
                j++;
                if (j == n-1)
                {
                    j=0;
                    i++;
                }
            }
        }
    }
}

float det(float A[N][N], int n){
    float out = 0;
    int sign = 1;//this is sign of cofactor: 00-> +; 01-> - and so on. We will change the sign (1 -> -1 or -1 -> 1) after changing the column
    // We will use only row [0] and use int "i" : 0 -> n (through all the column of row[0])
   
    if(n==1) 
        return A[0][0];
    float temp[N][N];
    for (int i = 0; i < n; i++)
    {
        get_cofac(A, temp, n, 0, i);
        //example we have matrix 
        //1 2 3
        //4 5 6
        //7 8 9
        //Det = C00+C01+C02
        //C01 = sign*minor(a00)
        //we want to find matrix in minor a00 so we define matrix "temp" to store it.
        out += sign*A[0][i]*det(temp, n-1);
        sign *= -1;
    }
    return out;
}

void print_invert(float A[N][N], int n){
    float determinant = det(A, N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            float temp[N][N];
            float k;
            get_cofac(A, temp, n, j, i);
            k = (1/determinant) *pow(-1, (i+j))*det(temp, n-1);
            printf("%.4f ", k);
        }
        printf("\n");
    }
    
}
