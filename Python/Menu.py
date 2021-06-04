#!/usr/bin/env python
import subprocess
print ('#### Menu de Serviços Linux >>> Windows ####')
opcao = 0
while opcao != 10:
    print ('''    [ 1 ] Desligar PC
    [ 2 ] Listar Serviços
    [ 3 ] Iniciar VNC ZBA
    [ 4 ] Iniciar VNC RBAW
    [ 5 ] Reiniciar PC
    [ 6 ] Teste Ping
    [ 7 ] RBAWCTIS00 N
    [ 8 ] RBAWCTIS00 A
    [ 9 ] FPING
    [ 10 ] Sair''')
#n1 = int(input('Selecione a Opção desejada: '))
    opcao = int(input('Qual a Opção desejada? '))
    if opcao == 1:
        print ('Desligar Computador\n')
        computador = input ('Nome do Computador: ')
        user = input ('Usuário Administrador: ')
        processo = subprocess.call(["net rpc shutdown -f -I %s.tre-ba.gov.br -t 60 -U %s" %(computador, user)], shell=True)
        
    elif opcao == 2:
        print ('Listar serviços do computador Secretarias\n')
        computador = input ('Nome do Computador: ')
        user = input ('Usuário Administrador: ')
        processo = subprocess.call(["net rpc service list -I %s.tre-ba.gov.br -U %s" %(computador, user)], shell=True)

    elif opcao == 3:
        print ('Ativando VNC para Maquinas TRE-SIS\n')
        computador = input ('Nome do Computador: ')
        user = input ('Usuário Administrador: ')
        processo = subprocess.call(["net rpc service start WINVNC -I %s.tre-ba.gov.br -U %s" %(computador, user)], shell=True)

    elif opcao == 4:
        print ("Ativando VNC para Maquinas Sem SIS\n")
        computador = input ('Nome do Computador: ')
        user = input ('Usuário Administrador: ')
        processo = subprocess.call(["net rpc service start uvnc_service -I %s.tre-ba.gov.br -U %s" %(computador, user)], shell=True)

    elif opcao == 5:  
        print ('Reiniciar Computador\n')
        computador = input ('Nome do Computador: ')
        user = input ('Usuário Administrador: ')
        processo = subprocess.call(["net rpc shutdown -r -f -I %s.tre-ba.gov.br -t 10 -U %s" %(computador, user)], shell=True)    
        
    elif opcao == 6:
        #quant = 10
        print ('Teste Ping\n')
        computador = input ('Nome do Computador: ')
        #print ('Quantidades de Ping padrão são 10')
        quant = int(input ('Número de Requests: '))
        processo = subprocess.call(["ping -4 -a %s.tre-ba.gov.br -c %s" %(computador, quant)], shell=True)
    
    elif opcao == 7:
        print ('RBAWCTIS00 Normal\n')
        #computador = input ('Nome do Computador: ')
        processo = subprocess.call(["rdesktop -u 109649460507 -d tre-ba.gov.br -p 14d01m1986a7 -g 1270x972 -a 24 -z -x lan -r sound:remote rbawctis00.tre-ba.gov.br"], shell=True)
    
    elif opcao == 8:
        print ('RBAWCTIS00 Admin\n')
        #computador = input ('Nome do Computador: ')
        processo = subprocess.call(["rdesktop -u a109649460507 -d tre-ba.gov.br -p 14d01m1986a7 -g 1270x972 -a 24 -z -x lan -r sound:remote rbawctis00.tre-ba.gov.br"], shell=True)

    elif opcao == 9:
        print ('FPING com Range de IPS\n')
        print ('Será Criado um arquivo .txt referente ao Range de IP solicitado \n')
        ip1 = input ('Digite IP Inicial: ')
        ip2 = input ('Digite IP Final: ')
        processo = subprocess.call(["fping -s -g %s %s > /home/cassiot/%s-%s.txt" %(ip1, ip2, ip1, ip2)], shell=True)

    elif opcao == 10:
        print ('Finalizando...')

    else:
        print('Opção Inválida') 
        
print ('Finalizado com Sucesso!')