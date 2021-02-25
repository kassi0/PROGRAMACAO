"""
Estruturas condicionais
if (se), else, elfi
"""
idade = int(input('Digite sua Idade: '))

"""
# Estrutura Condicional if, else em C:

if(idade < 18 {
    printf("menor de idade");
}else if(idade == 18) {
    printf("Tem 18 anos"):
}else {
    printf("Maior de idade"):
}

# Estrutura Condicional if, else em Java:

if(idade < 18) {
    System.out.println("Menor de Idade");
    }
}else if(idade == 18) {
    System.out.println("Tem 18 anos"):
}else {
    System.out.println("Maior de idade"):
}

"""

if idade < 18:
    print('Menor de idade')
    print(idade)
elif idade == 18:
    print('Tem 18 Anos')
elif (idade >= 18) & (idade <= 65):
    print('Maior de Idade')
elif (idade >= 65) & (idade <= 100):
    print('Idoso')
else:
    print('Tá vivo?')