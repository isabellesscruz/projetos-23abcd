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
int O();
int E();
int C();
int X();

int main(void){
    lex();
    M();
    return 0;
}

int M(){
    if(token=='m'){lex();
        if(token=='('){lex();
           if(token==')'){lex();
                if(token=='{'){lex();
                    if(token=='c'){lex();
                        if(token==';'){lex();
                            if(token=='r'){lex();
                                if(token=='('){lex();
                                    if(token=='E'){lex();
                                        if(token==')'){lex();
                                            if(token==';'){lex();
                                                if(token=='}'){lex();}
                                                else {erro('M', '}');}
                                            else {erro('M', ';');}
                                        else {erro('M', ')');}
                                    else {erro('M', 'E');}
                                else {erro('M', '(');}
                            else {erro('M', 'r');}
                        else {erro('M', ';');}
                    else {erro('M', 'c');}
                else {erro('M', '{');}
            else {erro('M', ')');}
        else {erro('M', '(');}
    else {erro('M', 'm');}
    
}

int N(){
    if(token=='n'){lex();
        if(token=='('){lex();
           if(token==')'){lex();
                if(token=='{'){lex();
                    if(token=='c'){lex();
                        if(token==';'){lex();
                            if(token=='r'){lex();
                                if(token=='('){lex();
                                    if(token=='E'){lex();
                                        if(token==')'){lex();
                                            if(token==';'){lex();
                                                if(token=='}'){lex();}
                                                else {erro('N', '}');}
                                            else {erro('N', ';');}
                                        else {erro('N', ')');}
                                    else {erro('N', 'E');}
                                else {erro('N', '(');}
                            else {erro('N', 'r');}
                        else {erro('N', ';');}
                    else {erro('N', 'c');}
                else {erro('N', '{');}
            else {erro('N', ')');}
        else {erro('N', '(');}
    else {erro('N', 'n');}
}

int G(){
    if(token=='g'){lex();
        if(token=='('){lex();
           if(token==')'){lex();
                if(token=='{'){lex();
                    if(token=='c'){lex();
                        if(token==';'){lex();
                            if(token=='r'){lex();
                                if(token=='('){lex();
                                    if(token=='E'){lex();
                                        if(token==')'){lex();
                                            if(token==';'){lex();
                                                if(token=='}'){lex();}
                                                else {erro('G', '}');}
                                            }else {erro('G', ';');}
                                        }else {erro('G', ')');}
                                    }else {erro('G', 'E');}
                                }else {erro('G', '(');}
                            }else {erro('G', 'r');}
                        }else {erro('G', ';');}
                    }else {erro('G', 'c');}
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
    if(token=='0'|| token=='1' || token=='x' || token=='y'){lex();
    else if (token=='('){lex();
        E();
        X();
        E();
        if(token==')'){lex();}
        else{erro('E', ')');}
    }else{erro('E', 'T');}
    return(0);
}

int W(){
    if(token=='(')
}
void lex(){
    token = getchar;
