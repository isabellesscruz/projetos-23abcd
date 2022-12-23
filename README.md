# projetos-23abcd
Projetos avaliativos da matéria compiladores, ministrada pelo professor Cesar Alberto Bravo

Instruções para os projetos
- Testar com os seguintes inputs:
  - m(){(y/y);r(y);}
  - m(){o((1+1);(1+1);(1+1)){h=0;};r(1);}
  - m(){z=x;r(0);}
  - m(){(0*y);r(y);}
  - m(){h=1;r(x);}
  - m(){f((1+1)){h=0;};r(1);}

  - f(){o((1+1);(1+1);(1+1)){h=0;};r(1);}
  - f(){(y/y);r(y);}
  - f(){z=x;r(0);}
  - f(){(0*y);r(y);}
  - f(){h=1;r(x);}
  - f(){f((1+1)){h=0;};r(1);}

  - g(){o((1+1);(1+1);(1+1)){h=0;};r(1);}
  - g(){(y/y);r(y);}
  - g(){z=x;r(0);}
  - g(){(0*y);r(y);}
  - g(){h=1;r(x);}
  - g(){f((1+1)){h=0;};r(1);}
  
  - m(){f(1){o(1;1;1){z=0}};z=0.;r(0);}
  - m(){w(0){f(1){z=0;k=1;h=g()}};z=0.;r(0);}
  - m(){f(0){f(1){j=0}};z=0.;r(0);}
