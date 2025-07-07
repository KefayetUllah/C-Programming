#include <stdio.h>
#include <string.h>
#include <ctype.h>

void normalize_spaces(char *line) {
    int i = 0, j = 0;
    int space_flag = 0;

    while (line[i]) {
        if (isspace(line[i])) {
            if (!space_flag) {
                line[j++] = ' ';
                space_flag = 1;
            }
        } else {
            line[j++] = line[i];
            space_flag = 0;
        }
        i++;
    }
    if (j > 0 && line[j - 1] == ' ')
        j--;
    line[j] = '\0';
}

int main() {
    FILE *fp = fopen("input.c", "r");
    FILE *out = fopen("output.c", "w");
    char line[1024];
    int in_comment = 0;

    while (fgets(line, sizeof(line), fp)) {
        char result[1024] = "";
        int i = 0, j = 0;

        while (line[i]) {

            if (!in_comment && line[i] == '/' && line[i + 1] == '*') {
                in_comment = 1;
                i += 2;
            }

            else if (in_comment && line[i] == '*' && line[i + 1] == '/') {
                in_comment = 0;
                i += 2;
            }

            else if (in_comment) {
                i++;
            }

            else if (!in_comment && line[i] == '/' && line[i + 1] == '/') {
                break;
            }

            else {
                result[j++] = line[i++];
            }
        }

        result[j] = '\0';
        normalize_spaces(result);

        char *start = result;
        while (isspace(*start)) start++;

        if (*start != '\0') {
            fprintf(out, "%s\n", start);
        }
    }

    fclose(fp);
    fclose(out);
    printf("Complete Filtering. Clean code saved in output.c\n");
    return 0;
}
