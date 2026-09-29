# ════════════════════════════════════════════════════════════
# Disciplina : Pensamento Computacional, Algoritmos e Programação (PCAP)
# Projeto    : Jogo "Par ou Ímpar"
# Arquivo    : par_impar.py
# Autor      : Renan
# Data       : 25/06/2026
# ════════════════════════════════════════════════════════════

import random

def quem_venceu(soma, aposta):
    # 1) Descobre se a soma é par ou ímpar
    if soma % 2 == 0:
        paridade = "par"
    else:






























                                                                                        
        paridade = "impar"

    # 2) Verifica se o jogador acertou
    if paridade == aposta:
        return "jogador"
    else:
        return "maquina"

# === Loop principal do jogo ===
jogar_novamente = "s"

while jogar_novamente == "s":

    pontos_jogador = 0
    pontos_maquina = 0

    print("\n=== PAR OU ÍMPAR ===")

    for rodada in range(1, 6):
        print(f"\n--- Rodada {rodada} ---")

        aposta = input("Escolha (par/impar): ").lower().strip()

        if aposta not in ["par", "impar"]:
            print(" Opção inválida! Você perde a rodada.")
            pontos_maquina += 1
            continue

        numero_jogador = int(input("Digite um número de 0 a 10: "))
        numero_maquina = random.randint(0, 10)

        soma = numero_jogador + numero_maquina

        print(f" Máquina escolheu: {numero_maquina}")
        print(f"Soma = {numero_jogador} + {numero_maquina} = {soma}")

        vencedor = quem_venceu(soma, aposta)

        if vencedor == "jogador":
            print(" Você ganhou a rodada!")
            pontos_jogador += 1
        else:
            print(" A máquina ganhou a rodada!")
            pontos_maquina += 1

        print(f"Placar parcial -> Você: {pontos_jogador} | Máquina: {pontos_maquina}")

    print("\n=== FIM DO JOGO ===")
    print(f"Placar final -> Você: {pontos_jogador} | Máquina: {pontos_maquina}")

    if pontos_jogador > pontos_maquina:
        print(" Parabéns! Você venceu o jogo!")
    elif pontos_maquina > pontos_jogador:
        print(" A máquina venceu o jogo!")
    else:
        print(" O jogo terminou empatado!")

    jogar_novamente = input("\nDeseja jogar novamente? (s/n): ").lower().strip()

print("Obrigado por jogar! ")