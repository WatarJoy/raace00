void mx_printchar(char c);

void mx_cube(int n) {
    int i = 0;
    int j = 0;
    if (n <= 1)
        return;

    int z = (double)(n / 2) != (int)(n / 2) ? 0 : 1;

    while (i < n / 2 + z) {
        mx_printchar(' ');
        i++;
    }
    
    mx_printchar('+');

    i = 0;

    while (i < 2 * n) {
        mx_printchar('-');
        i++;
    }

    mx_printchar('+');
    mx_printchar('\n');

    i = 0;

    for (int k = 1, i = n / 2, m = (int)(n / 2) * 2 - n / 2;
         i > 0; i--, m--, k++) {
        j = m;
        while (j > 0) {
            mx_printchar(' ');
            j--;
        }
        mx_printchar('/');

        j = 0;

        while (j < n * 2) {
            mx_printchar(' ');
            j++;
        }
        mx_printchar('/');

        j = 1;

        while (j < k) {
            mx_printchar(' ');
            j++;
        }

        mx_printchar('|');
        mx_printchar('\n');
    }

    mx_printchar('+');

    i = 0;

    while (i < 2 * n) {
        mx_printchar('-');
        i++;
    }

    mx_printchar('+');

    j = 1;

    while (j < n / 2 + 1) {
        mx_printchar(' ');
        j++;
    }

    mx_printchar('|');
    mx_printchar('\n');

    i = 0;

    while (i < n / 2.0 - z) {
        mx_printchar('|');
        i++;

        j = 0;

        while (j < n * 2) {
            mx_printchar(' ');
            j++;
        }

        mx_printchar('|');

        j = 0;

        while (j < n / 2) {
            mx_printchar(' ');
            j++;
        }
        
        mx_printchar('|');
        mx_printchar('\n');
    }

    mx_printchar('|');

    j = 0;

    while (j < n * 2) {
        mx_printchar(' ');
        j++;
    }

    mx_printchar('|');

    j = 0;

    while (j < n / 2) {
        mx_printchar(' ');
        j++;
    }
    
    mx_printchar('+');
    mx_printchar('\n');

    int k = n / 2.0 - 1;

    for (int i = n / 2; i > 0; i--, k--) {
        mx_printchar('|');

        j = 0;

        while (j < n * 2) {
            mx_printchar(' ');
            j++;
        }

        mx_printchar('|');

        j = 0;

        while (j < k) {
            mx_printchar(' ');
            j++;
        }

        mx_printchar('/');

        mx_printchar('\n');
    }

    mx_printchar('+');

    i = 0;

    while (i < n * 2) {
        mx_printchar('-');
        i++;
    }

    mx_printchar('+');
    mx_printchar('\n');
}

