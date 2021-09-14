void mx_printchar(char c);

void mx_pyramid(int n) {
    if (n <= 1 || n % 2 != 0)
        return;
    int i = 0;
    while (i < n) {
        if (i == 0) {
            int j = 0;
            while (j < n - 1) {
                mx_printchar(' ');
                j++;
            }

            mx_printchar('/');
            mx_printchar('\\');
        }
        else if (i !=n -1 && i + 1 <= n / 2) {
            int j = 0;
            while (j < n - i - 1) {
                mx_printchar(' ');
                j++;
            }
                
            mx_printchar('/');

            j = 0;

            while (j < i * 2 -1) {
                mx_printchar(' ');
                j++;
            }

            mx_printchar('\\');

            j = 0;

            while (j < i) {
                mx_printchar(' ');
                j++;
            }
            mx_printchar('\\');
        }
        else if (i != n -1) {
            int j = 0;
            while (j < n - i - 1) {
                mx_printchar(' ');
                j++;
            }
            mx_printchar('/');

            j = 0;

            while (j < i * 2 -1) {
                mx_printchar(' ');
                j++;
            }

            mx_printchar('\\');

            j = 0;

            while (j < n - i - 1) {
                mx_printchar(' ');
                j++;
            }

            mx_printchar('|');
        }
        else {
            int j = 0;
            mx_printchar('/');

            while (j < i * 2 -1) {
                mx_printchar('_');
                j++;
            }
            mx_printchar('\\');
            mx_printchar('|');
        }
        i++;
        mx_printchar('\n');
    }
}

