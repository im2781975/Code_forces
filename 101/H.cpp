/*
#include <stdio.h>
#include <stdlib.h>
int min(int a, int b) {

    return (a > b) ? b : a;

}

int main() {

    int n, m, a, b;

    scanf("%d %d %d %d", &n, &m, &a, &b);
    int price = 0;

    int c=a*m;
    int d, e, f, g, h, k, l;
    if(c<b||c==b) printf("%d",a*n);
    else if(c>b){
        if(n%m==0) printf("%d", b*(n/m));
        else if(n%m!=0){
            d=n/m+1;
            e=d*b;

            f=n%m;
            g=f*a;
            h=n/m;
            k=h*b;
            l=g+k;
            printf("%d",min(e,l));
        }
    }

    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {

    int sum;
    scanf("%d", &sum);

    if (sum >= 0) {
        printf("%d",sum);
    } else {
        int a = -sum/10%10;
        int b = -sum%10;
        printf("%d",a > b ? sum/100*10-b : sum/10);
    }

    return 0;

}*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int x1, y1, x2, y2;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    if(abs(x1-x2)==abs(y1-y2))
        printf("%d %d %d %d", x1, y2, x2, y1);
    else if(x1 == x2 || y1 == y2) {

        float l = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

        if(x1==x2) {
            printf("%d %d %d %d", x1+(int)l, y1, x1+(int)l, y2);
        } else
            printf("%d %d %d %d", x1, y1+(int)l, x2, y2+(int)l);
    } else
    printf("-1");

    return 0;

}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sort(int** matrix, int n) {

    int done = 0;

    while(!done) {

        done = 1;

        for(int i = 0; i < n -1; i++) {

            if((float) matrix[i][1] / matrix[i][0] < (float) matrix[i + 1][1] / matrix[i + 1][0]) {

                int aux1 = matrix[i][0];
                int aux2 = matrix[i][1];

                matrix[i][0] = matrix[i + 1][0];
                matrix[i][1] = matrix[i + 1][1];

                matrix[i + 1][0] = aux1;
                matrix[i + 1][1] = aux2;

                done = 0;

            }
        }
    }
}

int main() {

    int n, strength;

    scanf("%d %d", &strength, &n);

    int** matrix = (int**)malloc(sizeof(int*) * n);

    for(int i = 0; i < n; i++)
        matrix[i] = (int*)malloc(4 * 2);

    for(int i = 0; i < n; i++)
        scanf("%d %d", &matrix[i][0], &matrix[i][1]);

    sort(matrix, n);

    for(int j = 0; j < n; j++)
        for(int i = 0; i < n; i++) {

            if(strength > matrix[i][0] && matrix[i][0] != -1) {

                strength += matrix[i][1];
                matrix[i][0] = -1;

            }
        }

    int finish = 0;


    for(int i = 0; i < n; i++)
        if(matrix[i][0] != -1)
            finish = 1;

    if(!finish)
        printf("YES");
    else
        printf("NO");
    return 0;

}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {


    int n, m;

    scanf("%d %d", &n, &m);

    int cnt = (n + 1) / 2;
    int ans = (cnt  + m - 1) / m * m;

    if (ans > n) {
        ans = -1;
    }
    printf("%d", ans);

return 0;

}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int min(int a, int b) {

    return (a > b) ? b : a;

}

int main() {

    int n;
    scanf("%d", &n);

    int array[n + 1];

    int m1 = 0, m2 = 0, m3 = 0;

    for(int i = 1; i <= n; i++) {

        scanf("%d", &array[i]);

        switch(array[i]) {

        case 1:
            m1++;
            break;

        case 2:
            m2++;
            break;

        case 3:
            m3++;
            break;

        }
    }
    int minim = min(m1, m2);
    minim = min(minim, m3);

    int aux[4];
    int k = 0;

    printf("%d\n", minim);

    for(int i = 0; i < minim; i++) {

        k=1;

        for(int j = 1; k < 4; j++) {

            if(j == n + 1)
                j = 1;

            if(array[j] == k) {

                aux[k++] = j;
                array[j] = -1;

            }
        }

        for(int j = 1; j < k; j++)
            printf("%d ", aux[j]);
        printf("\n");


    }
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sort(int n, int array[n]) {

    int done = 0;

    while(!done) {

        done = 1;

        for(int i = 0; i < n - 1; i++) {

            if(array[i] > array[i + 1]) {

                int aux = array[i];
                array[i] = array[i + 1];
                array[i + 1] = aux;
                done = 0;

            }
        }
    }
}
int main() {

    int n, d;
    scanf("%d %d", &n, &d);

    int array[n];
    int sum = 0;
    for(int i = 0; i < n; i++) {

        scanf("%d", &array[i]);
        sum += array[i];

    }

    sum += 10 * (n - 1);

    if(sum > d)
        printf("-1");
    else {

        //sort(n, array);

        int ct = 2 * (n - 1);
        while(sum + 5 <= d) {

            ct++;
            sum+=5;

        }
        printf("%d", ct);

    }


    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int n, m;
    scanf("%d %d", &n, &m);

    int first = 0;
    int last = 1;
    for(int i = 0; i < n; i++) {

        if(i % 2 == 1)
            if(first == 1) {

                printf("#");
                first = 0;

            }
        for(int j = 0; j < m - i % 2; j++) {

            if(i % 2 == 0) {

                printf("#");

            } else
                printf(".");

        }

        if(i % 2 == 1)
            if(last == 1) {

                first = 1;
                printf("#");
                last = 0;

            }

        if(first == 0)
            last = 1;
        printf("\n");
    }

    return 0;

}




#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int n;
    scanf("%d", &n);

    int nr;

    int odd = 0;
    int even = 0;
    int pos1 = -1;
    int pos2 = -1;

    for(int i = 0; i < n; i++) {

        scanf("%d", &nr);
        if(nr % 2 == 0) {

            even++;
            pos1 = i + 1;

        } else {

            odd ++;
            pos2 = i + 1;

        }
    }

    if(odd == 1)
        printf("%d", pos2);
    else
        printf("%d", pos1);
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sort(int* array, int size) {

    int done = 0;

    while(!done) {

        done = 1;
        for(int i = 0; i < size - 1; i++)
            if(array[i] > array[i + 1]) {

                int aux = array[i];
                array[i] = array[i + 1];
                array[i + 1] = aux;
                done = 0;

            }
    }
}

int main() {


    int n, v;
    scanf("%d %d", &n, &v);

    int* array = (int*)malloc(sizeof(int) * 50);
    int k;
    int* deals = (int*)malloc(sizeof(int) * 50);
    int sizeDeals = 0;
    int done;
    for(int i = 0; i < n; i++) {

        scanf("%d", &k);
        done = 0;
        for(int j = 0; j < k; j++) {

            scanf("%d", &array[j]);
            if(array[j] < v)
                done = 1;

        }

        if(done)
            deals[sizeDeals++] = i + 1;
        done = 0;

    }

    if(sizeDeals != 0) {


        sort(deals, sizeDeals);
        printf("%d\n", sizeDeals);
        for(int i = 0; i < sizeDeals; i++)
            printf("%d ", deals[i]);

    } else
        printf("0");
    return 0;

}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {

    int n;

    scanf("%d", &n);

    char* string = malloc(101);
    char* string1 = malloc(10000);
    char* string2 = malloc(10000);

    for(int i = 0; i <= n; i++) {

        gets(string);
        strcat(string1, string);

    }

    strcpy(string2, string1);
    strrev(string2);

    if(strncmp(string1 + 1, string2, strlen(string2) - 2) == 0)
        printf("YES");
    else
        printf("NO");


    return 0;

}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {

    int n, k;

    scanf("%d %d", &n, &k);
    int maximum = (-1) * (1 << 31);

    for(int i = 0; i < n; i++) {

        int fi, ti;

        scanf("%d %d", &fi, &ti);

        if(k >= ti) {

            if(fi > maximum)
                maximum = fi;


        } else {

            if((fi - (ti - k)) > maximum)
                maximum = fi - (ti - k);

        }

    }

    printf("%d", maximum);


    return 0;

}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {

    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {

        int price, quality;
        scanf("%d %d", &price, &quality);

        if(price != quality) {

            printf("Happy Alex");
            return 0;
        }
    }

    printf("Poor Alex");

    return 0;

}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {

    int friends, bottles, milliliters, limes, slices, salt, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &friends, &bottles, &milliliters, &limes, &slices, &salt, &nl, &np);

    int allMilliliters = bottles * milliliters / nl / friends;
    int allSalt = salt / np / friends;
    int allLimes = limes * slices / friends;

    int minim = -1;

    minim = (allLimes < allMilliliters) ? allLimes : allMilliliters;
    minim = (minim < allSalt) ? minim : allSalt;

    printf("%d", minim);
    return 0;

}



#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {

    int dice1, dice2;
    scanf("%d %d", &dice1, &dice2);

    int dice1Wins = 0;
    int draw = 0;
    int dice2Wins = 0;

    for(int i = 1; i <= 6; i++) {

        if(abs(dice1 - i) > abs(dice2 - i))
            dice2Wins++;
        else if(abs(dice1 - i) < abs(dice2 - i))
            dice1Wins++;
        else
            draw++;

    }

    printf("%d %d %d", dice1Wins, draw, dice2Wins);

    return 0;

}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {

    int n;
    scanf("%d", &n);
    int* array = (int*)malloc(n * 4);
    int minimum = (1 << 28);
    int pos;
    for(int i = 0; i < n; i++) {

        scanf("%d", &array[i]);

        if(i > 1) {

            if(array[i] - array[i - 2] < minimum) {

                minimum = array[i] - array[i - 2];
                pos = i - 1;

            }
        }
    }

    minimum = -999999;
    for(int i = 0 ; i < n - 1; i++) {

        if(i + 1 == pos) {
            if(array[i + 2] - array[i] > minimum) {

                minimum = array[i + 2] - array[i];
                i++;

            }
        } else {

            if(array[i + 1] - array[i] > minimum) {

                minimum = array[i + 1] - array[i];


            }

        }
    }

    printf("%d", minimum);
    return 0;

}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {


    int n;
    scanf("%d", &n);
    int* exercises = (int*)malloc(sizeof(int) * (n + 1));

    int chest = 0;
    int biceps = 0;
    int back = 0;

    for(int i = 0; i < n; i++) {

        scanf("%d", &exercises[i]);

        switch(i % 3){

        case 0:
            chest += exercises[i];
            break;

        case 1:
            biceps += exercises[i];
            break;

        case 2:
            back += exercises[i];
            break;


        }
    }

    if(chest > back && chest > biceps)
        printf("chest");
    else if(back > chest && back > biceps)
        printf("back");
    else
        printf("biceps");
    return 0;

}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int cmmdc(int a, int b) {

    int r;

    while(b != 0) {

        r = a % b;
        a = b;
        b = r;

    }

    return a;
}

int main() {

    long int l, r;

    scanf("%ld %ld", &l, &r);
    printf("%d", sizeof(long int));
    if(r - (l += l%2) < 2)
        printf("-1");
    else
        printf("%d %d %d", l, l + 1, l + 2);
    return 0;

}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {

    int n;
    scanf("%d", &n);

    char matrix[n][n];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%c", &matrix[i][j]);

    char diagonal = matrix[0][0];

    for(int i = 0; i < n; i++)
        if(matrix[i][i] != diagonal) {

            printf("NO");
            return 0;

        }
    printf("aaa");
    for(int i = n; i >= 0; i--)
        if(matrix[i][n - i] != diagonal) {

            printf("NO");
            return 0;

        }
    printf("aaa");

    char notDiag = matrix[0][1];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) {

            if(i == j || i + j == n -1)
                j++;
            else {

                if(matrix[i][j] != notDiag) {

                    printf("NO");
                    return 0;

                }
            }
        }

    printf("YES");
    return 0;

}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {

    int n, m;
    scanf("%d %d", &n, &m);

    char** matrix = (char**)malloc(sizeof(char*) * n);
    for(int i = 0; i < n; i++)
        matrix[i] = malloc(m);

    getchar();

    for(int i = 0; i < n; i++) {

        gets(matrix[i]);
        for(int j = 0; j < m; j++)
            if(matrix[i][j] == '.') {
                if((i + j) % 2 == 0)
                    matrix[i][j] = 'B';
                else
                    matrix[i][j] = 'W';

            }

    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            printf("%c", matrix[i][j]);
        printf("\n");


    }
    return 0;

}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>

int freq1[27], freq2[27];

int main() {

    int n;
    scanf("%d", &n);
    getchar();
    char* question = malloc(15);

    int left = INT_MIN / 2;
    int right = INT_MAX / 2;

    for(int i = 0; i < n && left <= right; i++) {

        gets(question);

            if(question[0] == '>' && question[strlen(question) - 1] == 'Y' ||
               (question[0] == '<' && question[strlen(question) - 1] == 'N')) { /// > or >=

                if(question[1] == '=') {

                    char* tok = strtok(question, " ");
                    tok = strtok(NULL, " ");
                    left = atoi(tok) + 1;

                } else {

                    char* tok = strtok(question, " ");
                    tok = strtok(NULL, " ");
                    left = atoi(tok);

                }
            } else if(question[0] == '<' && question[strlen(question) - 1] == 'Y' || (question[0] == '>' && question[strlen(question) - 1] == 'N')) {

                if(question[1] == '=') { /// <=

                    char* tok = strtok(question, " ");
                    tok = strtok(NULL, " ");
                    right = atoi(tok);

                } else {

                    char* tok = strtok(question, " ");
                    tok = strtok(NULL, " ");
                    right = atoi(tok) - 1;

                }
            }


        if(question[0] == '>' && question[1] == '=' && question[strlen(question) -1 ] == 'Y' ||
                (question[0] == '<' && question[1] != '=' && question[strlen(question) - 1] == 'N')) {

            char* tok = strtok(question, " ");
            tok = strtok(NULL, " ");
            if(atoi(tok) > left)
                left = atoi(tok);


        } else if(question[0] == '>' && question[1] != '=' && question[strlen(question) - 1] == 'Y' ||
                  (question[0] == '<' && question[1] == '=' && question[strlen(question) - 1] == 'N')) {

            char* tok = strtok(question, " ");
            tok = strtok(NULL, " ");
            if(atoi(tok) + 1 > left)
                left = atoi(tok) + 1;

        } else if(question[0] == '<' && question[1] == '=' && question[strlen(question) - 1] == 'Y' ||
                  (question[0] == '>' && question[1] != '=' && question[strlen(question) - 1] == 'N')) {

            char* tok = strtok(question, " ");
            tok = strtok(NULL, " ");
            if(atoi(tok) < right)
                right = atoi(tok);

        } else if(question[0] == '<' && question[1] != '=' && question[strlen(question) - 1] == 'Y' ||
                  (question[0] == '>' && question[1] == '=' && question[strlen(question) - 1] == 'N')) {

            char* tok = strtok(question, " ");
            tok = strtok(NULL, " ");
            if(atoi(tok) - 1 < right)
                right = atoi(tok) - 1;

        }
    }

    if(left <= right) {

        printf("%d", right);

    } else
        printf("Impossible");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>

void mergeSort(int left, int mid, int right, int* array, int n) {

    int*aux = (int*)malloc(sizeof(int) * n);

    int i = left;
    int j = mid + 1;
    int index = i;

    while(i <= mid && j <= right) {

        if(array[i] > array[j]) {

            aux[index++] = array[i++];

        } else {

            aux[index++] = array[j++];

        }

    }

    for(int l = i; l <= mid; l++)
        aux[index++] = array[l];

    for(int l = j; l <= right; l++)
        aux[index++] = array[l];

    for(int l = left; l <= right; l++)
        array[l] = aux[l];

}

void merge(int left, int right, int* array, int n) {

    int mid;

    if(left < right) {

        mid = (left + right) / 2;
        merge(left, mid, array, n);
        merge(mid + 1, right, array, n);
        mergeSort(left, mid, right, array, n);

    }
}

int main() {

    int devices, sockets, supply;

    scanf("%d %d %d", &supply, &devices, &sockets);
    int array[supply];

    for(int i = 0; i < supply; i++)
        scanf("%d", &array[i]);

    merge(0, supply - 1, array, supply);

    if(devices <= sockets)
        printf("0");
    else {

        int i = 0;
        while(sockets < devices && i < supply) {

            sockets += array[i] - 1;
            i++;

        }

        if(i != supply)
            printf("%d", i);
        else if(sockets >= devices)
            printf("%d", i);
        else
            printf("-1");
    }
    return 0;

}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>

int main() {

    int x, y;
    scanf("%d %d", &x, &y);
    int s = 0;
    if(y>x && x>=-y) {

        printf("a");
        s=-2+y*4;

    }

    if(y<x && x<=-y+1) {

        printf("b");
        s=-y*4;

    }

    if(y<=x && x>-y+1) {

        printf("c");
        s=-3+x*4;

    }

    if(y>=x && x<-y) {

        printf("d");
        s=-1-4*x;

    }

    printf("%d", s);


    return 0;

}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>

int max(int a, int b) {

    return (a > b) ? a : b;

}

int main() {

    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    printf("%d %d %d", 2-(a==c||b==d), ((a+b)%2==(c+d)%2)*(2-(a-b==c-d||a+b==c+d)), max(abs(c-a),abs(d-b)));
    return 0;

} */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>

int main() {

    int n, k;
    scanf("%d %d", &n, &k);

    int array[n + 1];
    int ct = 0;

    for(int i = 1; i <= n; i++) {

        scanf("%d", &array[i]);

        if(i <= k) {

            if(array[i] > 0)
                ct++;

        } else {

            if(array[i] >= array[k] && array[i] > 0)
                ct++;

        }

    }

    printf("%d", ct);

    return 0;

}
