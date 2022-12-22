#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100
#define Tree_size 99999

char Tree[Tree_size];
char stack[MAX_SIZE];
int TOP = -1;
int ind=0;

int esq(int ind){
    int x = (2*ind) + 1;
    return (x);
}

void push(char value){
    TOP++;
    stack[TOP] = value;
    Tree[esq(ind)] = value;
}

void pop(){
	stack[TOP] = '\0';
    TOP--;
}

void imprime(char token){
    printf("Token: %c - Stack: %s \n", token, stack);
}

int main (void){
  char token;
  q0: 
    push('S');
    Tree[0] = 'S';
    goto q1;
  q1:
    imprime(token);
    token = getchar();
      //emplilhando
    if (token == 'm' && stack[TOP] == 'S')
    {
      imprime(token);
      pop();
      push('}');
      push(';');
      push(')');
      push('E');
      push('(');
      push('r');
      push(';');
      push('c');
      push('{');
      push(')');
      push('(');
      push('m');
      imprime(token);
      pop();
      goto q1;
    }
    if (token == 'g' && stack[TOP] == 'S')
    {
      imprime(token);
      pop();
      push('}');
      push(';');
      push(')');
      push('E');
      push('(');
      push('r');
      push(';');
      push('c');
      push('{');
      push(')');
      push('(');
      push('g');
      imprime(token);
      pop();
      goto q1;
    }
    if (token == 'f' && stack[TOP] == 'S')
    {
      imprime(token);
      pop();
      push('}');
      push(';');
      push(')');
      push('E');
      push('(');
      push('r');
      push(';');
      push('c');
      push('{');
      push(')');
      push('(');
      push('f');
      pop();
      imprime(token);
      goto q1;
    }
    if (token == '0' && stack[TOP] == 'E')
    {
      imprime(token);
      pop();
      push('0');
  	  imprime(token);
      pop();
      goto q1;
    }
    else if (token == '1' && stack[TOP] == 'E')
    {
      imprime(token);
      pop();
      push('1');
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == 'x' && stack[TOP] == 'E')
    {
      imprime(token);
      pop();
      push('x');
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == 'y' && stack[TOP] == 'E')
    {
      imprime(token);
      pop();
      push('y');
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == '(' && stack[TOP] == 'E')
    {
      imprime(token);
      pop();
      push(')');
      push('E');
      push('X');
      push('E');
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
    else if (token == 'h' && stack[TOP] == 'c')
    {
      imprime(token);
      pop();
      push('E');
      push('=');
      push('h');
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == 'j' && stack[TOP] == 'c')
    {
      imprime(token);
      pop();
      push('E');
      push('=');
      push('j');
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == 'i' && stack[TOP] == 'c')
    {
      imprime(token);
      pop();
      push('E');
      push('=');
      push('i');
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == 'k' && stack[TOP] == 'c')
    {
      imprime(token);
      pop();
      push('E');
      push('=');
      push('k');
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == 'z' && stack[TOP] == 'c')
    {
      imprime(token);
      pop();
      push('E');
      push('=');
      push('z');
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == '(' && stack[TOP] == 'c')
    {
      imprime(token);
      pop();
      push(')');
      push('E');
      push('X');
      push('E');
      push('(');
      imprime(token);
      pop();
      goto q1;
    }
   else if (token == 'w' && stack[TOP] == 'c')
    {
      imprime(token);
      pop();
      push('}');
	  push(';');
  	  push('C');
  	  push('{');
  	  push(')');
  	  push('E');
  	  push('(');
  	  push('w');
  	  imprime(token);
      pop();
      goto q1;
    }
    else if (token == 'f' && stack[TOP] == 'c')
	  {
  		imprime(token);
        pop();
  		push('}');
  		push(';');
  		push('C');
  		push('{');
  		push(')');
  		push('E');
  		push('(');
  		push('f');
  		imprime(token);
        pop();
  		goto q1;
  	}
    else if (token == 'o' && stack[TOP] == 'c')
	  {
  		imprime(token);
        pop();
  		push('}');
  		push(';');
  		push('c');
  		push('{');
  		push(')');
  		push('E');
  		push(';');
  		push('E');
  		push(';');
  		push('E');
  		push('(');
  		push('o');
  		imprime(token);
        pop();
  		goto q1;
  	}
    
     
    // desempilhando
    else if (token == 'm' && stack[TOP] == 'M')
    {
      imprime(token);
      pop();
      push('}');
      push(';');
      push(')');
      push('E');
      push('(');
      push('r');
      push(';');
      push('c');
      push('{');
      push(')');
      push('(');
      push('m');
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == 'g' && stack[TOP] == 'G')
    {
      imprime(token);
      pop();
      push('}');
      push(';');
      push(')');
      push('E');
      push('(');
      push('r');
      push(';');
      push('c');
      push('{');
      push(')');
      push('(');
      push('g');
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == 'f' && stack[TOP] == 'F')
    {
      imprime(token);
      pop();
      push('}');
      push(';');
      push(')');
      push('E');
      push('(');
      push('r');
      push(';');
      push('c');
      push('{');
      push(')');
      push('(');
      push('f');
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == '(' && stack[TOP] == '(')
    {
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == ')' && stack[TOP] == ')')
    {
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == '{' && stack[TOP] == '{')
    {
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == '}' && stack[TOP] == '}')
    {
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == 'r' && stack[TOP] == 'r')
    {
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == '=' && stack[TOP] == '=')
    {
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == ';' && stack[TOP] == ';')
    {
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == '+' && stack[TOP] == '+')
    {
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == '-' && stack[TOP] == '-')
    {
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == '*' && stack[TOP] == '*')
    {
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == '/' && stack[TOP] == '/')
    {
      imprime(token);
      pop();
      goto q1;
    }
   else if (token == '0' && stack[TOP] == '0')
    {
      imprime(token);
      pop();
      goto q1;
    }
   else if (token == '1' && stack[TOP] == '1')
    {
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == 'y' && stack[TOP] == 'y')
    {
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == 'x' && stack[TOP] == 'x')
    {
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == 'w' && stack[TOP] == 'w')
    {
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == 'f' && stack[TOP] == 'f')
    {
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == 'h' && stack[TOP] == 'h')
    {
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == 'z' && stack[TOP] == 'z')
    {
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == 'k' && stack[TOP] == 'k')
    {
      pop();
      goto q1;
    }
    else if (token == 'i' && stack[TOP] == 'i')
    {
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == 'j' && stack[TOP] == 'j')
    {
      imprime(token);
      pop();
      goto q1;
    }
    else if (token == 'o' && stack[TOP] == 'o')
    {
      imprime(token);
      pop();
      goto q1;
    }
    else goto FIM;
  FIM:
    if(TOP == -1) printf("Gramatica completamente consumida");
    else{ printf("impossivel concluir. Pilha: %s", stack);}

    return 0;
}
