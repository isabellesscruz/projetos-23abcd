#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

char stack[MAX_SIZE];
int TOP = -1;
int step = -1;
int q = 0;
int t = 0;
char p = '#';

void push(char value){
    TOP++;
	stack[TOP] = value;
}
void imprime(char token){
    step++;
    printf("Step: %d | q: %d | Token: %c | Stack: %s |\n",step, q, token, stack);
}

void pop(){
	stack[TOP] = '\0';
    TOP--;
}


int main (void){
  char token;
  q0:
    push('S');
    imprime('#');
    goto q1;
  q1:
    q = 1;
    token = getchar();
      //emplilhando
    if (token == '0' && stack[TOP] == 'S')
    {
      imprime(token);    
      pop();
      push('0');
      imprime(token);
      pop();
      goto q1;
    }
    if (token == '1' && stack[TOP] == 'S')
    {
      imprime(token);
      pop();
      push('1');
      imprime(token);
      pop();
      goto q1;
      
    }
    if (token == '(' && stack[TOP] == 'S')
    {
      imprime(token);
      pop();
      push(')');
      push('S');
      push('X');
      push('S');
      push('(');
      imprime(token);
      pop();
      goto q1;
    }
    
    else if (token == '+' && stack[TOP] == 'X')
    {
      imprime(token);
      pop();
      push('+');
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == '-' && stack[TOP] == 'X')
    {
      imprime(token);
      pop();
      push('-');
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == '*' && stack[TOP] == 'X')
    {
      imprime(token);
      pop();
      push('*');
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == '/' && stack[TOP] == 'X')
    {
      imprime(token);
      pop();
      push('/');
      imprime(token);
      pop();
      goto q1;
    }
    
    // desempilhando
   
    else if (token == '(' && stack[TOP] == '(')
    {
      pop();
      goto q1;
    }
    else if (token == ')' && stack[TOP] == ')')
    {
      pop();
      goto q1;
    }
    
    else if (token == '+' && stack[TOP] == '+')
    {
      pop();
      goto q1;
    }
    else if (token == '-' && stack[TOP] == '-')
    {
      pop();
      goto q1;
    }
    else if (token == '*' && stack[TOP] == '*')
    {
      pop();
      goto q1;
    }
    else if (token == '/' && stack[TOP] == '/')
    {
      pop();
      goto q1;
    }
   else if (token == '0' && stack[TOP] == '0')
    {
      pop();
      goto q1;
    }
   else if (token == '1' && stack[TOP] == '1')
    {
      pop();
      goto q1;
    }
    else goto FIM;
  q2:
    imprime(token);
    pop();
    goto q1;
  FIM:
    if(TOP == -1) printf("Gramatica completamente consumida");
    else{ printf("impossivel concluir. Pilha: %s", stack);}

    return 0;
}