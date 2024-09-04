%{
#include <stdio.h>
#include <stdlib.h>

int lambda_found = 0;
int print_found = 0;
%}

%%

"lambda"         { lambda_found = 1; }
"print"          { print_found = 1; }
[a-zA-Z_][a-zA-Z0-9_]*   { /* Identifier */ }
[0-9]+           { /* Number */ }
"*"              { /* Power operator */ }
"="              { /* Assignment operator */ }
":"              { /* Colon */ }
"("              { /* Left parenthesis */ }
")"              { /* Right parenthesis */ }
[ \t\n]+         { /* Ignore spaces, tabs, and newlines */ }
.                { /* Ignore everything else */ }

%%

int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <file>\n", argv[0]);
        return 1;
    }

    // Open the file
    FILE *file = fopen(argv[1], "r");
    if (!file) {
        fprintf(stderr, "Error opening file %s\n", argv[1]);
        return 1;
    }

    // Set the input file for Lex
    yyin = file;

    // Scan the input file
    yylex();

    // Check if lambda expression and print statement were found
    if (lambda_found && print_found) {
        printf("ACEPTA\n");
    } else {
        printf("NO ACEPTA\n");
    }

    fclose(file);
    return 0;
}
