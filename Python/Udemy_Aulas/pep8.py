"""
PEP8 - Python enhancement Proposal

São propostas de melhorias para a linguagem Python

Zem of Python

import this
A Ideia da PEP8 é que possamos escrever códigos Python de forma Pythonica.

[1] - Utilize Camel Case para nomes de Classes;

[2] - Utilizar nomes em minusculo, separados por underline (_)
 para funcões ou variáveis;

[3] - Utilize 4 espaços para identação!!!
 
"""


"[1] - Utilize Camel Case para nomes de Classes;"
class Calculadora:
    pass

class CalculadoraCientifica:
    pass

"[2] - Utilizar nomes em minusculo, separados por underline (_) para funcões ou variáveis;"

def soma():
    pass

def soma_dois():
    pass

numero = 4

numero_impar = 5


"[3] - Utilize 4 espaços para identação!!! (Não Use TAB)"

if 'a' in 'banana':
    print ('Tem')


"""
[4] - Linhas em Branco"
 - Separear Funções e definições de classe com duas linhas em branco;
 - Métodos dentro de uma classe devem ser separados com uma única linha em branco
[5] - Imports
 - Importes devem ser sempre feitos em linhas separadas;

"""
# Import Errado

import sys, os

# Import Certo

import sys
import os

# Não há problemas em utilizar:

from types import StringType, ListType

# Caso tenha muitos imports de um mesmo pacote, recomenda-se fazer:

from types import (
    StringType,
    ListType,
    SetType,
    OutroType
)

# Imports devem ser colocados no topo do arquivo, logo depois de quaisquer comentários ou 
# docstrings e antes de constantes e variáveis globais.

