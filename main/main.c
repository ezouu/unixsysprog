#include <stdio.h>
#include <stdlib.h>

char **makeargv(const char *str);  // Ensure this function is declared somewhere

int main() {
    int i;
    char **myargv;
    char mytest[] = "this is a test";

    if ((myargv = makeargv(mytest)) == NULL) {
        fprintf(stderr, "Failed to construct\n");
    } else {
        for (i = 0; myargv[i] != NULL; i++) {
            printf("%d %s\n", i, myargv[i]);
        }
    }

    return 0;
}
