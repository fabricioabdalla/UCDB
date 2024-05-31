# Pacman Básico

## Descrição do Projeto

Este projeto é um jogo básico do Pacman, desenvolvido como parte da disciplina de Lógica Aplicada, com o objetivo de obtenção de nota semestral. Utilizei a ferramenta Scratch para criar e implementar o jogo, aproveitando seu ambiente visual e intuitivo para programar a lógica necessária.

## Objetivo do Jogo

O objetivo do Pacman é simples: o jogador deve controlar o Pacman para comer todos os pontos espalhados pelo labirinto, evitando os fantasmas. Se o Pacman for capturado por um fantasma, o jogador perde, e volta do primeiro nível. O jogo termina quando todas as fases forem avançadas.

## Ferramenta Utilizada

- **Scratch**: Scratch é uma linguagem de programação visual, desenvolvida pelo MIT Media Lab. É ideal para iniciantes, permitindo a criação de jogos e animações através de blocos de código arrastáveis.

## Funcionalidades

1. **Movimentação do Pacman**: O Pacman pode ser controlado através das setas do teclado, permitindo movimentação para cima, baixo, esquerda e direita.
2. **Labirinto**: O cenário do jogo é um labirinto fixo com caminhos e obstáculos.
3. **Frutas**: O Pacman deve comer todas as frutas no labirinto. Frutas aparecem no labirinto servindo de pontuação para o jogador avançar de fase.
4. **Fantasmas**: Inimigos que atuam em eixos fixos ao qual o Pacman tem que evitar. Se um fantasma tocar o Pacman, o jogador perde e volta para a primeira fase.
5. **Sistema de Vidas**: O jogador tem somente uma vida. A cada contato com um fantasma, essa vida é perdida, resetando o jogo.
6. **Pontuação**: A pontuação do jogador é exibida na tela, aumentando conforme o Pacman come as frutas.
7. **Tela de Fim de Jogo**: Quando todas as frutas são comidas, o jogo exibe uma tela de fim de jogo e volta para a primeira fase.

## Estrutura do Código

O código do jogo é dividido em diversos blocos, cada um representando uma funcionalidade específica:

- **Movimentação**: Blocos de código que controlam a direção do Pacman com base nas teclas pressionadas.
- **Colisão com Paredes**: Lógica que impede o Pacman de atravessar as paredes do labirinto.
- **Coleção de Frutas**: Blocos que detectam quando o Pacman come uma fruta, atualizando a pontuação.
- **Fantasmas**: Código que controla o movimento dos fantasmas, incluindo a lógica de movimentação.
- **Sistema de Pontuação**: Bloco que gerencia a exibição da pontuação do jogador.
- **Tela de Fim de Jogo**: Lógica que determina quando o jogo termina e exibe a tela final.

## Como Jogar

1. **Iniciar o Jogo**: Abra o projeto no Scratch e clique na bandeira verde para iniciar.
2. **Movimentar o Pacman**: Use as setas do teclado para mover o Pacman pelo labirinto.
3. **Evitar Fantasmas**: Fuja dos fantasmas para evitar perder.
4. **Comer Frutas**: Colete todos as frutas para aumentar sua pontuação.
5. **Vencer o Jogo**: Coma todos as Frutas sem tocar nos fantasmas para vencer.

## Conclusão

Este projeto é uma excelente maneira de aplicar os conceitos aprendidos na disciplina de Lógica Aplicada, utilizando o Scratch para criar um jogo interativo e divertido. Espero que você goste de jogar tanto quanto gostei de desenvolver!

---

Desenvolvido por Fabrício Abdalla Costa para a disciplina de Lógica Aplicada do Curso de Ciência da Computação, 2024.