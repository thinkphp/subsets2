#include <stdio.h>
#define FIN "submultimi.in"
#define FOUT "submultimi.out"
#define DIM 100

struct Stack {
       int size;
       int data[ DIM ];
};

typedef struct Stack Stack;

FILE *fin, *fout;

void init_stack(Stack* stack) {

      stack->size = 0;
}

void push(Stack* stack, int elem) {

     if (stack->size > DIM) {

        printf("%s\n", "Stack overflow!");

     } else {

        stack->data [stack->size++ ] = elem;
     }
}

void pop(Stack* stack) {

     if (stack->size == 0) {

        printf("%s\n", "Stack underflow!");

     } else {

        stack->size--;
     }
}

int empty(Stack* stack) {

    if(stack->size == 0) return 1;

                 else
                         return 0;
}

int top(Stack* stack) {

    if (stack->size > 0) {

        return stack->data[stack->size - 1];
    }
}

void topPlusPlus(Stack* stack) {

     if(!empty(stack)) {
         stack->data[stack->size - 1] += 1;
     }
}

void display(Stack *stack) {

     for (size_t i = 0; i < stack->size; i++) {
          printf("%d ", stack->data[i]);
     }

     printf("\n");
}

int main(int argc, char const *argv[]) {
    int n;
    Stack S;
    fin = freopen(FIN,"r",stdin);
    fout = freopen(FOUT,"w",stdout);
    scanf("%d", &n);
    init_stack(&S);
    push(&S, 1);
    display(&S);
    while(!empty(&S)) {

           if (top(&S) < n) {

               push(&S, top(&S) + 1);

           } else {

                pop(&S);

                topPlusPlus(&S);
           }

           display(&S);
    }
  return 0;
}
