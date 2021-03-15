import subprocess
import getpass
print('ACESSO COMPUTADOR TRE-BA')
opcao = 0

while opcao != 4:
    print('''    [ 1 ] COMPUTADOR SECRETARIA
    [ 2 ] COMPUTADOR ZE CAPITAL
    [ 3 ] COMPUTADOR ZE INTERIOR
    [ 4 ] SAIR''')
    opcao = int(input('Qual a Opção desejada? '))

    if opcao == 1:
        print('COMPUTADOR SECRETARIA\n')
        computador = input('Nome do Computador: ')
        titulo = input('Título de Eleitor: ')
        pswd = getpass.getpass('Password:')
        processo = subprocess.call([f"rdesktop -u {titulo} -d tre-ba.gov.br -p {pswd} -g 95% -a 24 -z -x lan -r sound:remote {computador}.tre-ba.gov.br"],shell=True)

    elif opcao == 2:
        print('COMPUTADOR ZE CAPITAL\n')
        computador = input('Nome do Computador: ')
        titulo = input('Título de Eleitor: ')
        pswd = getpass.getpass('Password:')
        processo = subprocess.call([f"rdesktop -u {titulo} -d tre-ba.gov.br -p {pswd} -g 95% -a 24 -z -x lan -r sound:remote {computador}.tre-ba.gov.br"],shell=True)

    elif opcao == 3:
        print('COMPUTADOR ZE INTERIOR\n')
        ze = input('Zona Eleitoral: ')
        std = input('Número da STD (s/ 0): ')
        titulo = input('Título de Eleitor: ')
        pswd = getpass.getpass('Password:')
        processo = subprocess.call([f"rdesktop -u {titulo} -p {pswd} -g 95% -a 24 -z -x lan -r sound:remote 10.171.{ze}.{std}"],shell=True)

    elif opcao == 4:
        print('Finalizando...')

    else:
        print('Opção Inválida')

    print('Finalizado com Sucesso!')
