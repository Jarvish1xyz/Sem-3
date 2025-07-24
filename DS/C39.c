#include<stdio.h>
#include<string.h>
#define sizeR 20
#define sizeC 2

int Stack[sizeR][sizeC];
int top=-1;

void push(int n1, int n2) {
    if (top >= sizeR - 1) {
        printf("Stack overflow\n");
    } else {
        top++;
        Stack[top][0] = n1;
        Stack[top][1] = n2;
    }
}

// int pop() {
//     if (top == -1) {
//         printf("Stack underflow\n");
//         return -1;
//     } else {
//         return Stack[top--];
//     }
// }

void display() {
    for(int i=0; i<=top; i++) {
        printf("{%d, %d}", Stack[i][0], Stack[i][1]);
    }
}

int main() {
    int n1, n2=2;
    printf("Enter total intervavls : ");
    scanf("%d", &n1);

    int intervals[n1][n2], min=-1, max=-1;
    for(int i=0; i<n1; i++) {
        printf("Enter interval %d: ", i+1);
        scanf("%d %d", &intervals[i][0], &intervals[i][1]);
        if(i==0 || min>intervals[i][0]) {
            min = intervals[i][0];
        }
        if(i==0 || max<intervals[i][1]) {
            max = intervals[i][1];
        }
    }

    for(int i=0; i<n1; i++) {
        if(intervals[i][0]==min && intervals[i][1]==max) {
            push(intervals[i][0], intervals[i][1]);
            display();
            printf("\n");
            return 0;
        }
    }

    for (int i = 0; i < n1 - 1; i++) {
        for (int j = i + 1; j < n1; j++) {
            if (intervals[i][0] > intervals[j][0]) {
                int t1 = intervals[i][0];
                intervals[i][0] = intervals[j][0];
                intervals[j][0] = t1;

                int t2 = intervals[i][1];
                intervals[i][1] = intervals[j][1];
                intervals[j][1] = t2;
            }
        }
    }

    push(intervals[0][0], intervals[0][1]);

    for(int i=1; i<n1; i++) {
        if(intervals[i][0]<=Stack[top][1]) {
            if(intervals[i][1] > Stack[top][1]) {
                Stack[top][1] = intervals[i][1];
            }
        } else {
            push(intervals[i][0], intervals[i][1]);
        }
    }

    printf("Merged Intervals:\n");
    display();
    printf("\n");
}
