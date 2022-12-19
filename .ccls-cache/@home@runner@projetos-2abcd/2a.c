#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

char stack[MAX_SIZE];
int TOP = -1;

void push(char value)
{
	stack[++TOP] = value;
}

void pop()
{
	stack[TOP--] = '\0';
}


int main (void){
  char token = getchar();

  q0: 
    push('S');
    goto q1;
  q1:
      //emplilhando
    if (token == '0' && stack[TOP] == 'S')
    {
      pop();
      push('0');
      goto q1;
    }
    else if (token == '+' && stack[TOP] == 'X')
    {
      pop();
      push('+');
      goto q1;
    }
    else if (token == '-' && stack[TOP] == 'X')
    {
      pop();
      push('-');
      goto q1;
    }
    else if (token == '*' && stack[TOP] == 'X')
    {
      pop();
      push('*');
      goto q1;
    }
    else if (token == '/' && stack[TOP] == 'X')
    {
      pop();
      push('/');
      goto q1;
    }
    // desempilhando
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
  
}
