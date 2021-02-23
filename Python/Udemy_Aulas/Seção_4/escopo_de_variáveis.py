"""
Escopo de Variáveis

Dois cados de escopo:

1 -  Variáveis Globais;
    - São reconhecidas, ou seja, seu escopo compreende todo o programa.

2 -  Variáveis Locais;
    - são reconhecidas apenas no bloco onde foram declaradas, ou seja, seu escopo está limitado ao bloco onde foi
    declarada.

Para declarar variáveis em Python fazemos:

nome_da_variavel = valor_da_variavel

Python é uma liguagem de tipagem dinâmica, Isso significa que ao declararmos uma variável, não colocamos o tipo de dado
dela. Este tipo é inferido ao atribuirmos o valor a mesma.

Exemplo em C:
int numero = 42

Exemplo em Java:
int numero = 42

"""
"""
numero = 42
print(numero)
print(type(numero))

numero = 'Cassio'
print(numero)
print(type(numero))
"""

numero = 92
novo = 0
if numero > 10:
    novo = numero + 1
    print(novo)

print(novo)