#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

char token;

void erro(char fun, char caractere);
void lex();
int M();
int G();
int N();
int F();
int W();
int o();
int E();
int c();
int X();
int A();
int B();
int D();

int main(void){
    lex();
    if(token=='m'){
        M();
    }
    else if(token=='g'){
        G();
    }
    else if(token=='n'){
        N();
    }
    else{erro('1','1');}
    if(token=='\n'){
        printf("Concluido! Gramatrica correta.");
    }
    return 0;
}

int M(){
    if(token=='m'){lex();
        if(token=='('){lex();
           if(token==')'){lex();
                if(token=='{'){lex();
                    c();
                    if(token==';'){lex();
                        if(token=='r'){lex();
                            if(token=='('){lex();
                                E();
                                if(token==')'){lex();
                                    if(token==';'){lex();
                                        if(token=='}'){lex();}
                                        else {erro('M', '}');}
                                    }else {erro('M', ';');}
                                }else {erro('M', ')');}
                            }else {erro('M', '(');}
                        }else {erro('M', 'r');}
                    }else {erro('M', ';');}
                }else {erro('M', '{');}
            }else {erro('M', ')');}
        }else {erro('M', '(');}
    }else {erro('M', 'm');}
    
}

int N(){
    if(token=='n'){lex();
        if(token=='('){lex();
           if(token==')'){lex();
                if(token=='{'){lex();
                    c();
                    if(token==';'){lex();
                        if(token=='r'){lex();
                            if(token=='('){lex();
                                E();
                                if(token==')'){lex();
                                    if(token==';'){lex();
                                        if(token=='}'){lex();}
                                        else {erro('N', '}');}
                                    }else {erro('N', ';');}
                                }else {erro('N', ')');}
                            }else {erro('N', '(');}
                        }else {erro('N', 'r');}
                    }else {erro('N', ';');}
                }else {erro('N', '{');}
            }else {erro('N', ')');}
        }else {erro('N', '(');}
    }else {erro('N', 'n');}
}

int G(){
    if(token=='g'){lex();
        if(token=='('){lex();
           if(token==')'){lex();
                if(token=='{'){lex();
                    c();
                    if(token==';'){lex();
                        if(token=='r'){lex();
                            if(token=='('){lex();
                                E();
                                if(token==')'){lex();
                                    if(token==';'){lex();
                                        if(token=='}'){lex();}
                                        else {erro('G', '}');}
                                    }else {erro('G', ';');}
                                }else {erro('G', ')');}
                            }else {erro('G', '(');}
                        }else {erro('G', 'r');}
                    }else {erro('G', ';');}
                }else {erro('G', '{');}
            }else {erro('G', ')');}
        }else {erro('G', '(');}
    }else {erro('G', 'g');}
}

int F(){
    if(token=='('){lex();
        E();
        if (token==')'){lex();
            c();
                if(token==';'){lex();
                    if(token=='}'){lex();}
                    else{erro('F', '}');}
                }else{erro('F', ';');}
        }else{erro('F', ')');}
    }else{erro('F', '(');}
}

int E(){
    if(token=='0'|| token=='1' || token=='x' || token=='y'){lex();}
    else if (token=='('){lex();
        E();
        X();
        E();
        if(token==')'){lex();}
        else{erro('E', ')');}
    }else{erro('E', '0');}
    return(0);
}

int W(){
    if(token=='('){lex();
        E();
        if (token==')'){lex();
            if (token=='{'){lex();
                c();
                D();
            }
            else{erro('W','{');}
        }
        else{erro('W', ')');}
    }else{erro('W', '(');}
    return(0);
}

int X(){
    if(token=='+'||token=='-'||token=='*'||token=='/'){ lex();}
    else {erro('X', '+');}
    return(0);
}

int A(){
    c();
    B();
    return(0);
}

int B(){
    if(token=='.'){lex();}
    else if(token==';'){
        lex();
        c();
        B();
    }
    else{erro('B', '.');}
    return(0);
}

int c(){
    if(token == 'j' || token == 'k' || token == 'z'|| token == 'h'|| token == 'i'){lex();
        if(token=='='){lex();
            E();
        }
        else{erro('c', '=');}
    }
    else if(token=='('){lex();
        E();
        X();
        E();
        if(token==')'){lex();}
        else{erro('c',')');}
    }else if(token=='w'){lex();
        W();
    }
    else if(token=='f'){lex();
        F();
    }
    else if(token=='o'){lex();
        o();
    }
    else{erro('c', 'h');}
    return(0);
}

int D(){
  if (token == '}'){lex();}
  else if (token == ';'){lex();
    c();
    D();
  }
  else{erro('D', '}');}
  return (0);
}

int o(){
    if (token == '('){lex();
        E();
        if (token == ';'){lex();
            E();
            if (token == ';'){lex();
                E();
                if (token == ')'){lex();
                    if (token == '{'){lex();
                        c();
                        D();
                    }
                    else{erro('O', '{');}
                }else{erro('O', ')');}
            }else{erro('O', ';');}
        }else{erro('O', ';');}
    }else{erro('O', ')');}
    return (0);
}

void lex(){
    token = getchar();
    printf("Token lido: %c\n", token);
}

void erro(char fun, char caractere){
    if(fun=='E' && caractere=='1'){
        printf("Erro! Era esperado 0 | 1 | x | y | (, porem obteve-se %c\n", token);
    }
    else if(fun=='X' && caractere=='+'){
        printf("Erro! Era esperado + | - | * | /, porem obteve-se %c\n", token);
    }
    else if(fun=='c' && caractere=='h'){
        printf("Erro! Era esperado h | i | j | k | z | ( | w | f | o, porem obteve-se %c\n", token);
    }
    else if(fun=='c' && caractere=='g'){
        printf("Erro! Era esperado g n, porem obteve-se %c\n", token);
    }
    else if(fun=='1' && caractere=='1'){
        printf("Erro! Era esperado m g n, porem obteve-se %c\n", token);
    }
    else{
        printf("Erro! Era esperado %c, porem obteve-se %c\n",caractere, token);
    }
}
