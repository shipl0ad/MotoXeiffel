INCLUDE_PATH =  -I"C:\Program Files\Eiffel Software\EiffelStudio 15.11 GPL/contrib/library/game2/game_core/spec/include" -I"C:\Program Files\Eiffel Software\EiffelStudio 15.11 GPL\contrib\library\game2\C_lib_win\SDL2\include" -I"C:\Program Files\Eiffel Software\EiffelStudio 15.11 GPL\contrib\library\game2\cpf\spec\include" -I"C:\Program Files\Eiffel Software\EiffelStudio 15.11 GPL\contrib\library\game2\C_lib_win\SDL2_image\include" -I"C:\Program Files\Eiffel Software\EiffelStudio 15.11 GPL\contrib\library\game2\C_lib_win\SDL2_ttf\include" -I"C:\Program Files\Eiffel Software\EiffelStudio 15.11 GPL\contrib\library\game2\C_lib_win\OpenAL\include" -I"C:\Program Files\Eiffel Software\EiffelStudio 15.11 GPL/contrib/library/game2/audio_sound_file/spec/include" -I"C:\Program Files\Eiffel Software\EiffelStudio 15.11 GPL\contrib\library\game2\C_lib_win\libsndfile\include"
SHELL = /bin/sh
CC = "C:\Program Files\Eiffel Software\EiffelStudio 15.11 GPL/gcc/win64/mingw/bin/gcc"
CPP = "C:\Program Files\Eiffel Software\EiffelStudio 15.11 GPL/gcc/win64/mingw/bin/gcc"
CFLAGS = -O0 -pipe -imacros eif_config.mingw.h -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_UNICODE -DUNICODE   -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 15.11 GPL/studio/spec/win64/include" -I. $(INCLUDE_PATH)
CPPFLAGS = -O0 -pipe -imacros eif_config.mingw.h -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_UNICODE -DUNICODE   -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 15.11 GPL/studio/spec/win64/include" -I. $(INCLUDE_PATH)
LDFLAGS = 
CCLDFLAGS =   -mconsole
LDSHAREDFLAGS =  
EIFLIB = "C:\Program Files\Eiffel Software\EiffelStudio 15.11 GPL/studio/spec/win64/lib/mingw/wkbench.a"
EIFTEMPLATES = C:\Program Files\Eiffel Software\EiffelStudio 15.11 GPL/studio/config/win64/templates
LIBS = 
MAKE = "C:\Program Files\Eiffel Software\EiffelStudio 15.11 GPL/gcc/win64/msys/1.0/bin/make.exe"
AR = "C:\Program Files\Eiffel Software\EiffelStudio 15.11 GPL/gcc/win64/mingw/bin/ar"
LD = "C:\Program Files\Eiffel Software\EiffelStudio 15.11 GPL/gcc/win64/mingw/bin/ld"
MKDEP =   --
MV = "C:\Program Files\Eiffel Software\EiffelStudio 15.11 GPL/gcc/win64/msys/1.0/bin/cp"
CP = "C:\Program Files\Eiffel Software\EiffelStudio 15.11 GPL/gcc/win64/msys/1.0/bin/cp"
RANLIB = "C:\Program Files\Eiffel Software\EiffelStudio 15.11 GPL/gcc/win64/mingw/bin/ranlib.exe"
RM = "C:\Program Files\Eiffel Software\EiffelStudio 15.11 GPL/gcc/win64/msys/1.0/bin/rm" -f
FILE_EXIST = 
RMDIR = "C:\Program Files\Eiffel Software\EiffelStudio 15.11 GPL/gcc/win64/msys/1.0/bin/rd"
X2C = "C:\Program Files\Eiffel Software\EiffelStudio 15.11 GPL/studio/spec/win64/bin/x2c.exe"
SHAREDLINK = "C:\Program Files\Eiffel Software\EiffelStudio 15.11 GPL/gcc/win64/mingw/bin/dllwrap"
SHAREDLIBS = -luser32 -lws2_32 -ladvapi32 -lgdi32 -lshell32 -lmsimg32 -lcomdlg32 -luuid -lole32 -loleaut32 -lcomctl32 -lmpr -lshlwapi -lwinspool -lstdc++ 
SHARED_SUFFIX = .dll
COMMAND_MAKEFILE = 
START_TEST = if [ ! -f finished ] ; then 
END_TEST = ; fi 
CREATE_TEST = "C:\Program Files\Eiffel Software\EiffelStudio 15.11 GPL/gcc/win64/msys/1.0/bin/touch" finished
PATH := C:\Program Files\Eiffel Software\EiffelStudio 15.11 GPL/gcc/win64/mingw/libexec/gcc/mingw32/3.4.2;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Program Files (x86)\Microsoft SQL Server\80\Tools\Binn\;C:\wamp2\bin\php\php5.5.12;C:\ProgramData\ComposerSetup\bin 
SYSTEM_IN_DYNAMIC_LIB = gameproject.dll 

.SUFFIXES:.cpp .o 

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C3_c.o 

OLDOBJECTS =  ty932.o ty932d.o ch926.o ch926d.o ga930.o ga930d.o ga931.o ga931d.o \
	ga929.o ga929d.o mo934.o mo934d.o so935.o so935d.o im936.o im936d.o \
	ni937.o ni937d.o af938.o af938d.o au944.o au944d.o au947.o au947d.o \
	au951.o au951d.o au949.o au949d.o au939.o au939d.o au946.o au946d.o \
	th943.o th943d.o au945.o au945d.o mu950.o mu950d.o au948.o au948d.o \
	th952.o th952d.o th942.o th942d.o th941.o th941d.o ga940.o ga940d.o 

all::  Cobj3.o

Cobj3.o: $(OBJECTS) Makefile
	$(RM) $@
	$(LD) -r -o $@ $(OBJECTS)
	$(CREATE_TEST)
	$(RM) $(OBJECTS)


clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

