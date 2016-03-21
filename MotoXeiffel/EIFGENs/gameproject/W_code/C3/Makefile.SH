case $CONFIG in
'')
	if test ! -f ../config.sh; then
		(echo "Can't find ../config.sh."; exit 1)
	fi 2>/dev/null
	. ../config.sh
	;;
esac
case "$O" in
*/*) cd `expr X$0 : 'X\(.*\)/'` ;;
esac
echo "Compiling C code in C3"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH =  -I"\$(EIFFEL_LIBRARY)/contrib/library/game2/game_core/spec/include" -I"\$(EIFFEL_LIBRARY)\contrib\library\game2\C_lib_win\SDL2\include" -I"\$(EIFFEL_LIBRARY)\contrib\library\game2\cpf\spec\include" -I"\$(EIFFEL_LIBRARY)\contrib\library\game2\C_lib_win\SDL2_image\include" -I"\$(EIFFEL_LIBRARY)\contrib\library\game2\C_lib_win\SDL2_ttf\include" -I"\$(EIFFEL_LIBRARY)\contrib\library\game2\C_lib_win\OpenAL\include" -I"\$(EIFFEL_LIBRARY)/contrib/library/game2/audio_sound_file/spec/include" -I"\$(EIFFEL_LIBRARY)\contrib\library\game2\C_lib_win\libsndfile\include"
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $wkoptimize $ccflags $large -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $wkoptimize $cppflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $console_flags
LDSHAREDFLAGS =  $ldsharedflags
EIFLIB = "$rt_lib/$prefix$wkeiflib$suffix"
EIFTEMPLATES = $rt_templates
LIBS = $libs
MAKE = $make
AR = $ar
LD = $ld
MKDEP = $mkdep \$(DPFLAGS) --
MV = $mv
CP = $cp
RANLIB = $ranlib
RM = $rm -f
FILE_EXIST = $file_exist
RMDIR = $rmdir
X2C = "$x2c"
SHAREDLINK = $sharedlink
SHAREDLIBS = $sharedlibs
SHARED_SUFFIX = $shared_suffix
COMMAND_MAKEFILE = 
START_TEST = $start_test 
END_TEST = $end_test 
CREATE_TEST = $create_test 
SYSTEM_IN_DYNAMIC_LIB = gameproject$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

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

all: Cobj3.o

Cobj3.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj3.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

