
obj-m += ft5x06_ts.o

all:
	make -C ~/disk/workspace/linux-4.4 M=$(PWD) modules
	cp ft5x06_ts.ko /home/jimmy/disk/workspace/fs/rootfs/tiny4412
clean:
	make -C ~/disk/workspace/linux-4.4 M=$(PWD) clean
