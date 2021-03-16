"""
Loop For
Loop -> Estrutura de Repetição
For -> Uma dessas estruturas

C ou Java

for (int i = 0; i < 10; i++) {
    // Execução do Loop
}

Python

for item in interavel:
    //execução do loop

Utilizamos loops para interar sobre sequencias ou sobre valores iteráveis

Exemplos de Iteráveis:
 - String
    nome = 'Cassio Telles'
 - Lista
    lista = [1, 3, 6, 7]
 - Range
    numeros = range (1, 100)
"""
nome = 'Cassio Telles'
lista = [1, 2, 5, 4, 6, 8, 10]
numeros = range(1, 10)  # Temos que transformar em uma lista
"""
# Exemplo de FOR 1 (Iterando em uma String)
for letra in nome:
    print(letra)

# Exemplo de FOR 2 ( Iterando sobra uma lista)
for numero in lista:
    print(numero)

# Exempro de FOR 3 ( Iterando sobre um range)

range(valor_inicial,  valor_final)
OBS:  O valor final não é incluso:


for numero in range(1, 10):
    print(numero)

# Enumerate:

l = ['hello', 'world', 'hi', 'earth']
for i, word in enumerate(l):
    print(i, word)

# Traz os Indices das letras

for valor in enumerate(nome):
    print(valor)
    
for valor in enumerate(nome): 
    print(valor[0])  # Somente os Numeros

for valor in enumerate(nome): 
    print(valor[0])  # Somente as Strings
    
    
qtd = int(input('Quantas vezes vamos rodar? '))
soma = 0

for n in range(1, qtd+1):
    num = int(input(f'Informe o {n} / {qtd} valor: '))
    soma = soma + num
print(f'A Soma é {soma}')


for letra in nome:
    print(letra, end='')
    
"""




