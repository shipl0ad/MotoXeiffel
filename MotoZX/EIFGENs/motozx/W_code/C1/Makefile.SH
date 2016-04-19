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
echo "Compiling C code in C1"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH =  -I"\$(EIFFEL_LIBRARY)/contrib/library/game2/game_core/spec/include" -I"\$(EIFFEL_LIBRARY)\contrib\library\game2\C_lib_win\SDL2\include" -I"\$(EIFFEL_LIBRARY)\contrib\library\game2\cpf\spec\include" -I"\$(EIFFEL_LIBRARY)\contrib\library\game2\C_lib_win\SDL2_gfx\include" -I"\$(EIFFEL_LIBRARY)\contrib\library\game2\C_lib_win\SDL2_image\include" -I"\$(EIFFEL_LIBRARY)/contrib/library/game2/audio_sound_file/spec/include" -I"\$(EIFFEL_LIBRARY)\contrib\library\game2\C_lib_win\libsndfile\include" -I"\$(EIFFEL_LIBRARY)\contrib\library\game2\C_lib_win\OpenAL\include" -I"\$(EIFFEL_LIBRARY)\contrib\library\game2\C_lib_win\SDL2_ttf\include"
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
SYSTEM_IN_DYNAMIC_LIB = motozx$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C1_c.o 

OLDOBJECTS =  ga872.o ga872d.o im873.o im873d.o ga871.o ga871d.o ga864.o ga864d.o \
	ga883.o ga883d.o ga890.o ga890d.o ga882.o ga882d.o im863.o im863d.o \
	ga884.o ga884d.o ga870.o ga870d.o ga867.o ga867d.o ga869.o ga869d.o \
	ga868.o ga868d.o ga862.o ga862d.o ga881.o ga881d.o ga892.o ga892d.o \
	ga866.o ga866d.o ga891.o ga891d.o ga880.o ga880d.o ga879.o ga879d.o \
	ga878.o ga878d.o au877.o au877d.o au887.o au887d.o au889.o au889d.o \
	au861.o au861d.o au886.o au886d.o th876.o th876d.o au885.o au885d.o \
	au888.o au888d.o th875.o th875d.o th874.o th874d.o ga865.o ga865d.o 

all: Cobj1.o

Cobj1.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj1.o $(OBJECTS)
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

