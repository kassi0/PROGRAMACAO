"""
 Recebendo dados do Usuário
 input() -> Todo dado recebido via input é do tipo String

 Em Python string é tudo que estiver entre:
 - Aspas simples
 - Aspas duplas;
 - Aspas Simples triplas;
 - Aspas Duplas Triplas;
"""

# Entrada de Dados
nome = input('Qual Seu nome? ') # Input -  Entrada
# Exemplo de print 'antigo' 2.x
#print('Seja bem vindo %s' % nome)

# Exemplo de print 'moderno' 3.x
#print('Seja bem-vindo(a) {0}'.format(nome))

# Exemplo de print 'mais atual' 3.7
print(f'Seja bem-vindo(a) {nome}')

idade = int(input('Qual sua idade? '))
# Processamento

# Saida de Dados
# Exemplo de print 'antigo' 2.x
#print('%s tem %s anos' %(nome, idade))

# Exemplo de print 'moderno' 3.x
#print('{0} tem {1} anos'.format(nome, idade))

# Exemplo de print 'mais atual' 3.7
print(f'{nome} tem {idade} anos')
"""
 int(idade) => cast
 cast é uma conversao de um tipo de dado para outro.
"""
print(f'{nome} nasceu em {2021 - idade}')
