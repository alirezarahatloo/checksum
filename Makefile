all: gcc
	@.\main.exe
gcc:
	@gcc main.c -o main

PUSH:
	@git add -A
	@git commit -m "message"
	@git pull --rebase https://github.com/alirezarahatloo/checksum.git master
	@git push https://github.com/alirezarahatloo/checksum.git