
obj-m += tiny4412-pwm.o

all:
	make -C ~/disk/workspace/linux-4.4 M=$(PWD) modules
	cp tiny4412-pwm.ko /home/jimmy/disk/workspace/fs/rootfs/tiny4412
clean:
	make -C ~/disk/workspace/linux-4.4 M=$(PWD) clean
