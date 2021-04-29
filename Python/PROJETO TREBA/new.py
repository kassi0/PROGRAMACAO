import os, sys
import subprocess
import os.path
import time

path = '/dev/sdb'
isExist = os.path.exists(path)
while (True):

    if isExist is True:
        print('Umount PenDrive!')
        subprocess.call(["umount /dev/sdb"], shell=True)
        print('PenDrive conectado, sendo formatado!')
        subprocess.call(["mkfs.vfat /dev/sdb"], shell=True)
        time.sleep(10)
        subprocess.call(["mount -t vfat /dev/sdb /mnt/disk"], shell=True)
        time.sleep(10)
        subprocess.call(["touch /mnt/disk/jec.txt"], shell=True)
        time.sleep(10)
        subprocess.call(["ls /mnt/disk/"], shell=True)
        time.sleep(10)
        subprocess.call(["umount /dev/sdb"], shell=True)
        print("Pendrive Formatado Aguardando o Proximo")
        time.sleep(10)

    if isExist is False:
        print("PenDrive Não Conectado")
        time.sleep(5)
