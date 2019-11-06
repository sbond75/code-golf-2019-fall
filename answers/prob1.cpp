#include <cstdio>
void run(int offset) {
    for (int i = offset; i < 70 + offset; i++) {
        if (i % 4 == 0) {
            printf("|");
        }
        else {
            printf("_");
        }
    }
    puts("");
}

int main() {
    for (int i = 0; i < 18; i++) {
        run(i % 2 == 0 ? -1 : 1);
    }
}