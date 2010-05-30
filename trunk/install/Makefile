DIR_LIB = /usr/lib
QT_DIR_LIB = /usr/local/Trolltech/Qt-4.6.2/lib
LIBS = libqwt.so.5 libQtGui.so.4 libQtCore.so.4


all:
	@echo "Use: make install"

install: create_dir $(LIBS)
	@echo "Instalado"

create_dir:
	mkdir -p $(QT_DIR_LIB)

libqwt.so.5:
	cp lib/libqwt.so.5 $(DIR_LIB)
	
libQtGui.so.4:
	cp lib/libQtGui.so.4 $(QT_DIR_LIB)

libQtCore.so.4:
	cp lib/libQtCore.so.4 $(QT_DIR_LIB)

