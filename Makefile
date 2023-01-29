Dealer.exe:	
	cd C:/Users/bono/Desktop/Dealer && gcc -std=c99 -Wall -Wpedantic -o Dealer.exe Dealer.c
einstall:
	cd C:/Users/bono/Desktop/Dealer && git -C emsdk pull || git clone https://github.com/emscripten-core/emsdk 
	cd C:/Users/bono/Desktop/Dealer/emsdk && emsdk install 3.1.24 && \
	cd C:/Users/bono/Desktop/Dealer/emsdk && emsdk activate 3.1.24 && \
	cd C:/Users/bono/Desktop/Dealer/emsdk && emsdk_env.bat && \
	cd C:/Users/bono/Desktop/Dealer && emcc Dealer.c -s WASM=1 -o Dealer.html && \
		npm i http-server -g && \
		cd C:/Users/bono/Desktop/Dealer && http-server  