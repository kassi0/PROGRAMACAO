"""
Exercícios Python - Seção 4
"""
print ('#### Exercícios Python - Seção 4 ####\n')
print('Escolha o Numero da Questão de 1 a 53')
print('DIGITE 54 PARA SAIR\n')
opcao = 0

while opcao != 54:

    opcao = int(input('Qual a Questão desejada? '))

    if opcao == 1:
        print('Questão 1 \n')
        num1 = 99
        print(num1)
        print('\n')

    elif opcao == 2:
        print('\n Questão 2 \n')

        num2 = 1000
        print(float(num2))
        print('\n')

        print('\n Questão 3 \n')
    elif opcao == 3:
        print('Digite 3 numeros')
        v1 = int(input())
        v2 = int(input())
        v3 = int(input())
        tot = v1 + v2 + v3

        print(f'A soma dos seu valores é igual a {tot} \n')

    elif opcao == 4:
        print('\n Questão 4 \n')

        va1 = float(input('Digite um valor Fracionado: '))
        va2 = va1 ** 2

        print(f'O Valor ao Quadrado de {va1} é igual a {va2} \n')

    elif opcao == 5:
        print('\n Questão 5 \n')

        va1 = float(input('Digite um valor Fracionado: '))
        va2 = va1 * 1/5

        print(f'A quinta parte de {va1} é igual a {va2} \n')


    elif opcao == 6:
        print('\n Questão 6 \n')

        C = float(input('Digite a Temperatura e Celsius: '))
        F = C * (9.0/5.0) + 32.0

        print(f'A conversão de {C}Cº é igual a {F}Fº \n')

    elif opcao == 7:
        print('\n Questão 7 \n')

        F = float(input('Digite a Temperatura e Fahrenheit: '))
        C = 5.0 * (F - 32.0) / 9.0

        print(f'A conversão de {F}Fº é igual a {C}Cº \n')

    elif opcao == 8:
        print('\n Questão 8 \n')

        K = float(input('Digite a Temperatura e Kelvin: '))
        C = K - 273.15

        print(f'A conversão de {K}Kº é igual a {C}Cº \n')

    elif opcao == 9:
        print('\n Questão 9 \n')

        C = float(input('Digite a Temperatura e Celsius: '))
        K = C + 273.15

        print(f'A conversão de {C}Cº é igual a {K}Kº \n')

    elif opcao == 10:
        print('\n Questão 10 \n')

        K = float(input('Digite a velocidade em KM/h: '))
        M = K / 3.6

        print(f'A conversão de {K}km/h é igual a {M}m/s \n')

    elif opcao == 11:
        print('\n Questão 11 \n')

        M = float(input('Digite a velocidade em M/s: '))
        K = M * 3.6

        print(f'A conversão de {M} m/s é igual a {K} km/h \n')

    elif opcao == 12:
        print('\n Questão 12 \n')

        M = float(input('Digite a velocidade em MPH: '))
        K = 1.61 * M

        print(f'A conversão de {M} MPH é igual a {K} km/h \n')

    elif opcao == 13:
        print('\n Questão 13 \n')

        K = float(input('Digite a velocidade em KM/h: '))
        M = K / 1.61

        print(f'A conversão de {K}km/h é igual a {M} Mph \n')

    elif opcao == 14:
        print('\n Questão 14 \n')

        pi = 3.14159265358979323846
        G = float(input('Digite valor do Ângulo: '))
        R = G * pi / 180

        print(f'A conversão de {G}º em Radiano é {R} rad \n')

    elif opcao == 15:
        print('\n Questão 15 \n')

        pi = 3.14159265358979323846
        R = float(input('Digite valor Radiano: '))
        G = R * 180 / pi

        print(f'A conversão de {R} rad em ângulo é {G}º \n')

    elif opcao == 16:
        print('\n Questão 16 \n')

        pi = 3.14159265358979323846
        R = float(input('Digite valor Radiano: '))
        G = R * 180 / pi

        print(f'A conversão de {R} rad em ângulo é {G}º \n')

    elif opcao == 54:
        print ('Finalizando...')

    else:
        print('Opção Inválida')

print('Finalizado com Sucesso!')

