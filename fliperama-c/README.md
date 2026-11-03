# Fliperama em C (MeuApp v3.0)

## O que é
O programa e um fliperama simples em que o jogador tenta adivinhar um numero de 1 a 100. Ele veio de uma versao feita em Python e foi reconstruida em C, mantendo o cadastro de jogadores e o registro de partidas.

## Como compilar e rodar
gcc -Wall fliperama.c -o fliperama
./fliperama

## Arquivos
- fliperama.c: O codigo do programa, o menu, o cadastro e o jogo.
- jogadores.csv: guarda os apelidos dos jogadores e a quantidade de partidas de cada um.

## Python x C: o que mudou

| O que | No jogadores.py (linha) | No fliperama.c (linha) |
|---|---|---|
| guardar um jogador | jogadores.append(novo) (1. 38;) | strcpy(apelidos[qtd], 76;) |
| comparar apelidos | == (1. 76; 53;) | strcmp(...) == 0 (1. 53) |
| abrir sem arquivo | exists(ARQUIVO) (1. 125; 135; 138;) | fopen == NULL (1. 125; 135; 138; 164;) |

## O que o C me obrigou a decidir
No Python, algumas coisas sao feitas automaticamente, como aumentar uma lista quando
adiciono um jogador. No C, precisei definir a capacidade do cadastro e controlar as posicoes do vetor manualmente

##Autoavaliacao

| Criterio | Conceito que espero | Onde se prova (arquivo e linha) |
|---|---|---|
| 1. Estrutura, compilacao e Git ||| linha 1 ate o final e compilaçao com gcc -Wall. Espero conceito B pelo menos
| 2. Cadastro: menu, funcoes e vetores | | | Linhas 53 a 89 e 142 a 151. Espero conceito B
| 3. Jogo e partidas | | | Linhas 91 a 119. Espero conceito B.
| 4. Persistencia | | | Linhas 121 a 140 e arquivo jogadores.csv. Espero conceito B.
| 5. Documentacao e comparacao | | | README.md, descricao do projeto. Espero conceito B.
