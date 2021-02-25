"""
Estruturas lógicas: and (e), or (ou), not (não), is (é)

Operadores Unários:
    - not, is

Operadores Binários:
    - and, or , is

Para o 'and', ambos os valores precisam ser True
Para o 'or', um ou outro valor precise ser True
Para o 'not', o valor do booleano é invertido, ou seja, se for True vira False e vice-versa.
Para o 'is', o valor é comparado com um segundo

"""

ativo = True
logado = True

if ativo and logado:
    print('Bem-vindo Fulano!')
else:
    print('Precisa ativar sua conta')