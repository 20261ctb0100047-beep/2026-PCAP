'''
Problema: beecrowd | 1011
data: 26.05.07
estudante: Renan
'''
# Objetivo: ler o raio de uma esfera e calcular seu volume com a fórmula (4/3) *pi * R³

# --- ANÁLISE (LIAC) ---
# entrada: um número de ponto flutunte (o raio R)
# processamto: aplicar a fórmula do vulume da esfera
# saída: exibir no formato "VOLUME" = valor" com 3 casas decimais

# Float() converte o valor lido para número decimal (ponto flutuante)
R = float(input())

# O enunciado pede para atribuir pi como constante - não usar math.pi
pi = 3.14159

# 4.0/3 garante divisão decimal (não inteira) -  conforme dica do enunciado
# R**3  R elevado á terceira potencia (R³)
V = (4.0 / 3) * pi * R ** 3

# :.3f  formata o número com exatamente  casas decimais
print(f"VOLUME = {V:.3f}")