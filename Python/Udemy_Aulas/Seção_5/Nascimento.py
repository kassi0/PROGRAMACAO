from datetime import date
import datetime

# Entrada de valores
print('='*18)
print('Exercício 2: idade')
print('='*18)
nome = input("Como se chama? ")
ano = eval(input("Nasceu em que ano? "))
mes = eval(input("Nasceu em que mês? "))
dia = eval(input("Nasceu em que dia? "))
dataNasc = datetime.date(ano, mes, dia)
dataAtual = date.today()

# diferença retorna em timedelta
diferenca = (dataAtual - dataNasc)
# Cálculos e Resultados
rslt = (diferenca.days / 365.25)
print("O %s tem %d anos!" %(nome, rslt))
