"""
Tipo String

Em Python, um dado é considerado do tipo string sempre que:
- Estiver entre aspas simples -> 'uma string', '234', 'a', 'True','42.3'
- Estiver entre aspas duplas -> "uma string", "234", "a", "True", "42.3"
- Estiver entre Aspas Simples Triplas -> '''uma string''', '''234''', '''a''', '''True''','''42.3'''
"""
# - Estiver entre Aspas Duplas Triplas -> """uma string""", """234""", """a""", """True""", """42.3"""

# nome = 'Cassio Telles'
# print(nome)
# print(type(nome))

# nome = "Gina's Bar"
# print(nome)
# print(type(nome))

# nome = 'Cassio \nTelles'  # \n dá um enter printa o texto na linha abaixo
# print(nome)
# print(type(nome))

# nome = """Sara
# Costa
# Leal"""  # Forma mais fácil de texto por linha
# print(nome)
# print(type(nome))
"""
nome = 'CaSsiO DaNilLo Cardoso Santana Telles'
print(nome[0:6])
print(type(nome))
print('Todas as Letras minúsculas com as posições desejadas \n', nome[6:14].lower())
print('Todas as Letras minúsculas\n', nome.lower())
print('Todas as Letras MAIÚSCULAS \n', nome.upper())
print('Primeira Letra Maiúscula \n', nome.title())
print('Transforma em uma lista de Strings \n', nome.split())
print('Pega a posição da lista \n', nome.split()[4])
"""

nome = 'Cassio Telles'
"""
[::-1] -> Comece do primeiro elemento, vá até o ultimo elemento e inverta
"""
print(nome)
print(nome[::-1])  # Inversão da String Pythonico

# Método Replace
print(nome.replace('T', 'P'))
print(nome.replace('ss', 'c'))


