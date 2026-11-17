# Fliperama em C++ (MeuApp v4.0)

## O que e
[duas linhas suas: o que o programa faz e de onde ele veio]

## Como compilar e rodar
g++ -Wall fliperama.cpp -o fliperama
./fliperama

## Arquivos
- fliperama.cpp: [uma linha]
- jogadores.csv: [uma linha: o que cada coluna guarda]

## C x C++: o que mudou

| O que | No fliperama.c (linha) | No fliperama.cpp (linha) |
|---|---|---|
| guardar um jogador | strcpy(apelidos[qtd], novo) (l. __) | apelidos.push_back(novo) (1. _) |
| comparar apelidos | strcmp(...) == 0 (l. __) | == (l. __) |
| a funcao que cadastra | int cadastrar(..., int qtd) (l. __) | void cadastrar(... &apelidos, ...) (1. _) |

## O que o C++ decidiu por mim
[duas linhas: uma coisa que em C voce escrevia e em C++ a linguagem faz]

## Autoavaliacao

| Criterio | Conceito que espero | Onde se prova (arquivo e linha) |
|---|---|---|
| 1. Estrutura, compilacao e Git | | |
| 2. Cadastro: vectors e referencia | | |
| 3. Jogo e partidas | | |
| 4. Persistencia | | |
| 5. Documentacao e comparacao | | |
