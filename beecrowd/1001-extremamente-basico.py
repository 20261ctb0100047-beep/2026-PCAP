'''
Problema: beecrowd | 1001
data: 2026.04.16
estudante: Renan
'''
# objetivo: ler dois inteiros nas varíaveis A e B, calcular a soma X e exibir o resultado

# ---  ANÁLISE (LIAC) ---
# Entrada: dois números inteiros, cada um em uma linha separada
# Processamento: somar A e B e armazenar em X
# saída: exibir no formato exato "X = valor" (espaços ao redor do =, sem mensagem extras)

# input()       converte o texto lido para número inteiro
# input()       lê o valor fornecido (digitando ou pelo beecrowld)
# int(input())     lê e converte em uma única instrução
A = int(input())
B = int(input())

# O enunciado específicado explicitamente as vaíaveis A, B e X - seguir à risca
X = A + B

# f-string: insere o valor de X dentro do texto com {}
# Atenção: espaço antes e depois do = é obrigatório conforme o enunciado
print(f"X = {X}")