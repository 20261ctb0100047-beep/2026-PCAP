'''
Problema: beecrowd | 1003
data: 2026.04.23
estudante: Renan
'''
# objetivo: ler dois inteiros nas varíaveis A e B, calcular a SOMA e atribuir a variavel SOMA e exibir o resultado

# ---  ANÁLISE (LIAC) ---
# Entrada: dois números inteiros, cada um em uma linha separada
# Processamento: somar A e B e armazenar em SOMA
# saída: exibir no formato exato "SOMA = valor" (espaços ao redor do =, sem mensagem extras)

# input()       converte o texto lido para número inteiro
# input()       lê o valor fornecido (digitando ou pelo beecrowld)
# int(input())     lê e converte em uma única instrução
A = int(input())
B = int(input())

# O enunciado específicado explicitamente as vaíaveis A, B e SOMA - seguir à risca
SOMA = A + B

# f-string: insere o valor de SOMA dentro do texto com {}
# Atenção: espaço antes e depois do = é obrigatório conforme o enunciado
print(f"SOMA = {SOMA}")