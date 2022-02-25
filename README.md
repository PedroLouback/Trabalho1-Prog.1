Trabalho 1 de Programação de Computadores 1
===========
[![Linguagem C](https://img.shields.io/badge/Linguagem-C-green.svg)](https://github.com/PedroLouback/TrabalhoFinal-Prog.2)
[![IDE](https://img.shields.io/badge/IDE-Dev--C%2B%2B-orange.svg)](http://orwelldevcpp.blogspot.com/)

# Trabalho1-Prog.1
 Primeiro trabalho feito durante o 1º período na matéria de `Programação de Computadores 1 do curso de Engenharia da Computação no CEFET-MG Campus Divinópolis`. Neste trabalho foi utilizado estruturas de decisões e de repetições na linguagem C.

## Enunciado e observações

* O trabalho consiste em obter uma data como entrada e a partir dessa data ser feito o cálculo dos dias da semana em que serão nos próximos 10 anos, levando em consideração as observações abaixo:

a. Ler dia, mês e ano.

b. Se data possui mês anterior a março (03), fazer a seguinte correção nos cálculos: 
i. ano = ano - 1 e mês = mês + 12.

c. Se data for igual ou posterior a 15/10/1582, faça:
i. A = parte inteira de (ano / 100)
ii. B = parte inteira de (A / 4)
iii. C = 2 - A + B
iv. Senão C = 0.

d. Faça:
i. D = parte inteira de 365,25 x (ano + 4716)
ii. E = parte inteira de 30,6001 x (mês + 1)

e. O dia juliano será igual a: D + E + dia + C - 1524.

f. Para saber o dia da semana, divide-se dia juliano por 7. O dia será: 
i. segunda-feira se resto=0; 
ii. terça-feira se resto=1;
iii. quarta-feira se resto=2;
iv. quinta-feira se resto = 3;
v. sexta-feira se resto = 4;
vi. sábado se resto=5; 
vii. domingo se resto=6.

## Sobre o Programa

* Feito em Linguagem C
* Plataforma Windows
* IDE Dev-C++

## Autor

Criado por [Pedro Henrique Louback Campos](https://www.linkedin.com/in/pedro-henrique-louback-campos-0a4a03205/)

Aluno do 3° periodo do curso de `Engenharia da Computação` no [CEFET-MG](https://www.cefetmg.br)