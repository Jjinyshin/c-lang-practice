#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
#define MAXOP 100

main()
{
    int type;
    double op2;
    char s[MAXOP];
    char op_stk[MAXOP];
    int op_stk_size;
    int op_idx = 0;
    char operand;

    while ((type = getop(s)) != EOF) {
        switch (type) {
        case '+': case '-': case '*': case '/':
            op_stk[op_idx++] = type;
            op_stk_size = size();
            break;
        case '\n':
            printf("\t%.8g\n", pop());
            break;
        case NUMBER:
            push(atof(s));
            while (op_stk_size == 2)
            {
                operand = op_stk[--op_idx];
                switch (operand){
                case '+':
                    push(pop() + pop());
                    break;
                case '*':
                    push(pop() * pop());
                    break;
                case '-':
                    op2 = pop();
                    push(pop() - op2);
                    break;
                case '/':
                    op2 = pop();
                    if (op2 != 0.0)
                        push(pop() / op2);
                    else
                        printf("error: zero divisor\n");
                    break;
                default:
                    printf("error: unknown command %s\n", s);
                    break;
                }
            }
            break;
        }
    }
    return 0;
}
// 수정 필요한 코드