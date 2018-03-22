.SUFFIXES: .cpp $(SUFFIXES)

# Compiler choice: Mac or Unix
# Unix
CC = g++

CFLAGS = -static -g -pedantic -Wall -pthread -std=gnu++11
#CFLAGS = -O3 -pedantic -Wall
DEFINES = -DUNIX

RM = rm -rf

# include rmitgp, zlib and libpng as libraries
#LIBRMITGP = -L../RMITGP.1.5/ -lrmitgp
#LIBPNG = -L../libpng/ -lpng
#LIBZLIB = -L../zlib/ 

LINKFOLDERS = -L../RMITGP.1.5/ -L../libpng/ -L../zlib/
LINKLIBS = -lrmitgp -lm -lzlib -lpng -lz 

INCLUDE = -I../RMITGP.1.5/ -I../libpng/ -I../zlib/

OUTPUT = NPR-GP

OBJS = main.o png.o util.o MaskMaker.o Target.o Canvas.o Decal.o \
ImageFitness.o DecalCanvas.o BezierPathCanvas.o BestCanvas.o Canny.o \
ConfigReader.o RandFloat.o ReturnFloat.o ReturnFunc.o ReturnRoot.o \
ColorConverter.o TriangleCanvas.o ShroudCanvas.o Ralph.o Draw2.o Draw4.o \
Draw6.o DrawColorTriangle.o DrawGrayTriangle.o Prog2.o Prog3.o Prog4.o \
Palette.o Pixel.o 

SRCS = $(OBJS:.o=.cpp)

$(OUTPUT): $(OBJS)
	$(CC) -g -o $(OUTPUT) -pthread $(OBJS) $(LINKFOLDERS) $(LINKLIBS) 

.cpp.o:
	$(CC) -c $(CFLAGS) $(DEFINES) $(CXXINCLUDE) $(INCLUDE) -I. $*.cpp

backup: clean
	tar -cvf bak.tar *.cpp *.h Makefile README
	gzip -9 bak.tar

clean: reposclean
	@$(RM) $(OBJS) $(OUTPUT) *.o ../*.gz ../run-log.txt

reposclean:
	@$(RM) ../output/*.pgm
	@$(RM) ../output/*.png

objects:
	@for f in $(OBJS); do echo $(DIR)/$$f; done

depend: $(SRCS)
	@(sed <Makefile '/^#--DEPENDENCIES--$$/,$$d'; \
	echo '#--DEPENDENCIES--'; \
	$(CC) -c -M $(CFLAGS) $(CXXINCLUDE) $(INCLUDE) $(SRCS) \
	) > Makefile.new
	mv Makefile.new Makefile

#--DEPENDENCIES--
main.o: main.cpp /usr/include/stdc-predef.h /usr/include/c++/7/cstring \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/string.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/strings.h /usr/include/c++/7/ctime /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/c++/7/iostream /usr/include/c++/7/ostream \
 /usr/include/c++/7/ios /usr/include/c++/7/iosfwd \
 /usr/include/c++/7/bits/stringfwd.h /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/postypes.h /usr/include/c++/7/cwchar \
 /usr/include/wchar.h /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/new /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/move.h /usr/include/c++/7/bits/concept_check.h \
 /usr/include/c++/7/type_traits /usr/include/c++/7/bits/char_traits.h \
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h /usr/include/c++/7/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/7/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++locale.h \
 /usr/include/c++/7/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/7/cctype \
 /usr/include/ctype.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/c++/7/bits/ios_base.h /usr/include/c++/7/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/atomic_word.h \
 /usr/include/c++/7/bits/locale_classes.h /usr/include/c++/7/string \
 /usr/include/c++/7/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
 /usr/include/c++/7/ext/new_allocator.h \
 /usr/include/c++/7/bits/ostream_insert.h \
 /usr/include/c++/7/bits/cxxabi_forced.h \
 /usr/include/c++/7/bits/stl_function.h \
 /usr/include/c++/7/backward/binders.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list \
 /usr/include/c++/7/bits/basic_string.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/ext/string_conversions.h /usr/include/c++/7/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h /usr/include/alloca.h \
 /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/c++/7/cstdio \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
 /usr/include/c++/7/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/7/bits/functional_hash.h \
 /usr/include/c++/7/bits/basic_string.tcc \
 /usr/include/c++/7/bits/locale_classes.tcc \
 /usr/include/c++/7/system_error \
 /usr/include/x86_64-linux-gnu/c++/7/bits/error_constants.h \
 /usr/include/c++/7/stdexcept /usr/include/c++/7/streambuf \
 /usr/include/c++/7/bits/streambuf.tcc \
 /usr/include/c++/7/bits/basic_ios.h \
 /usr/include/c++/7/bits/locale_facets.h /usr/include/c++/7/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_base.h \
 /usr/include/c++/7/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_inline.h \
 /usr/include/c++/7/bits/locale_facets.tcc \
 /usr/include/c++/7/bits/basic_ios.tcc \
 /usr/include/c++/7/bits/ostream.tcc /usr/include/c++/7/istream \
 /usr/include/c++/7/bits/istream.tcc /usr/include/c++/7/math.h \
 /usr/include/c++/7/cmath /usr/include/math.h \
 /usr/include/x86_64-linux-gnu/bits/math-vector.h \
 /usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val_flt128.h \
 /usr/include/x86_64-linux-gnu/bits/huge_valf.h \
 /usr/include/x86_64-linux-gnu/bits/huge_vall.h \
 /usr/include/x86_64-linux-gnu/bits/inf.h \
 /usr/include/x86_64-linux-gnu/bits/nan.h \
 /usr/include/x86_64-linux-gnu/bits/flt-eval-method.h \
 /usr/include/x86_64-linux-gnu/bits/fp-logb.h \
 /usr/include/x86_64-linux-gnu/bits/fp-fast.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls.h \
 /usr/include/x86_64-linux-gnu/bits/iscanonical.h \
 /usr/include/c++/7/fstream /usr/include/c++/7/bits/codecvt.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/basic_file.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++io.h \
 /usr/include/c++/7/bits/fstream.tcc /usr/include/c++/7/sstream \
 /usr/include/c++/7/bits/sstream.tcc \
 /usr/include/x86_64-linux-gnu/sys/stat.h \
 /usr/include/x86_64-linux-gnu/bits/stat.h ../RMITGP.1.5/Population.h \
 ../RMITGP.1.5/GeneticProgram.h ../RMITGP.1.5/ReturnData.h \
 ../RMITGP.1.5/Node.h /usr/include/c++/7/vector \
 /usr/include/c++/7/bits/stl_construct.h \
 /usr/include/c++/7/bits/stl_uninitialized.h \
 /usr/include/c++/7/bits/stl_vector.h \
 /usr/include/c++/7/bits/stl_bvector.h /usr/include/c++/7/bits/vector.tcc \
 ../RMITGP.1.5/Mutation.h ../RMITGP.1.5/Crossover.h \
 ../RMITGP.1.5/Selection.h ../RMITGP.1.5/GPConfig.h \
 ../RMITGP.1.5/Random.h ../RMITGP.1.5/Fitness.h ../RMITGP.1.5/NodeSet.h \
 ../RMITGP.1.5/Function.h ../RMITGP.1.5/Terminal.h \
 ../RMITGP.1.5/Fitness.h ../RMITGP.1.5/TournamentSelection.h \
 ../RMITGP.1.5/GeneticProgram.h ../RMITGP.1.5/NodeSet.h \
 ../RMITGP.1.5/ProgramGenerator.h ../RMITGP.1.5/NodeVector.h \
 ../RMITGP.1.5/GPConfig.h Prog2.h ../RMITGP.1.5/Function.h ReturnFunc.h \
 ../RMITGP.1.5/ReturnData.h Prog3.h ReturnRoot.h Prog4.h Draw2.h \
 ReturnFloat.h Canvas.h /usr/include/assert.h Utility.h png.h util.h \
 Target.h /usr/include/c++/7/set /usr/include/c++/7/bits/stl_tree.h \
 /usr/include/c++/7/ext/aligned_buffer.h \
 /usr/include/c++/7/bits/stl_set.h /usr/include/c++/7/bits/stl_multiset.h \
 ColorConverter.h /usr/include/c++/7/algorithm /usr/include/c++/7/utility \
 /usr/include/c++/7/bits/stl_relops.h /usr/include/c++/7/bits/stl_algo.h \
 /usr/include/c++/7/bits/algorithmfwd.h \
 /usr/include/c++/7/bits/stl_heap.h /usr/include/c++/7/bits/stl_tempbuf.h \
 /usr/include/c++/7/bits/uniform_int_dist.h /usr/include/c++/7/limits \
 Canny.h Ralph.h BestCanvas.h ConfigReader.h Draw4.h Draw6.h \
 BezierPathCanvas.h Decal.h Palette.h Pixel.h RandFloat.h \
 ../RMITGP.1.5/Terminal.h ImageFitness.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/float.h \
 /usr/include/c++/7/thread /usr/include/c++/7/chrono \
 /usr/include/c++/7/ratio /usr/include/c++/7/bits/parse_numbers.h \
 /usr/include/c++/7/memory /usr/include/c++/7/bits/stl_raw_storage_iter.h \
 /usr/include/c++/7/ext/concurrence.h \
 /usr/include/c++/7/bits/uses_allocator.h \
 /usr/include/c++/7/bits/unique_ptr.h /usr/include/c++/7/tuple \
 /usr/include/c++/7/array /usr/include/c++/7/bits/invoke.h \
 /usr/include/c++/7/bits/shared_ptr.h \
 /usr/include/c++/7/bits/shared_ptr_base.h \
 /usr/include/c++/7/bits/allocated_ptr.h \
 /usr/include/c++/7/bits/refwrap.h \
 /usr/include/c++/7/bits/shared_ptr_atomic.h \
 /usr/include/c++/7/bits/atomic_base.h \
 /usr/include/c++/7/bits/atomic_lockfree_defines.h \
 /usr/include/c++/7/backward/auto_ptr.h DecalCanvas.h ShroudCanvas.h \
 TriangleCanvas.h MaskMaker.h DrawColorTriangle.h DrawGrayTriangle.h
png.o: png.cpp /usr/include/stdc-predef.h /usr/include/stdio.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
 /usr/include/c++/7/stdlib.h /usr/include/c++/7/cstdlib \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h ../libpng/png.h ../zlib/zlib.h \
 ../zlib/zconf.h ../libpng/pngconf.h /usr/include/setjmp.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h /usr/include/string.h \
 /usr/include/strings.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 ../libpng/pngconf.h png.h util.h
util.o: util.cpp /usr/include/stdc-predef.h /usr/include/stdio.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
 /usr/include/c++/7/stdlib.h /usr/include/c++/7/cstdlib \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h util.h /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/string.h /usr/include/strings.h
MaskMaker.o: MaskMaker.cpp /usr/include/stdc-predef.h MaskMaker.h \
 /usr/include/c++/7/iostream \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/c++/7/ostream /usr/include/c++/7/ios \
 /usr/include/c++/7/iosfwd /usr/include/c++/7/bits/stringfwd.h \
 /usr/include/c++/7/bits/memoryfwd.h /usr/include/c++/7/bits/postypes.h \
 /usr/include/c++/7/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/new /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/move.h /usr/include/c++/7/bits/concept_check.h \
 /usr/include/c++/7/type_traits /usr/include/c++/7/bits/char_traits.h \
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h /usr/include/c++/7/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/7/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++locale.h \
 /usr/include/c++/7/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/7/cctype \
 /usr/include/ctype.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/c++/7/bits/ios_base.h /usr/include/c++/7/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/atomic_word.h \
 /usr/include/c++/7/bits/locale_classes.h /usr/include/c++/7/string \
 /usr/include/c++/7/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
 /usr/include/c++/7/ext/new_allocator.h \
 /usr/include/c++/7/bits/ostream_insert.h \
 /usr/include/c++/7/bits/cxxabi_forced.h \
 /usr/include/c++/7/bits/stl_function.h \
 /usr/include/c++/7/backward/binders.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list \
 /usr/include/c++/7/bits/basic_string.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/ext/string_conversions.h /usr/include/c++/7/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h /usr/include/alloca.h \
 /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/c++/7/cstdio \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
 /usr/include/c++/7/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/7/bits/functional_hash.h \
 /usr/include/c++/7/bits/basic_string.tcc \
 /usr/include/c++/7/bits/locale_classes.tcc \
 /usr/include/c++/7/system_error \
 /usr/include/x86_64-linux-gnu/c++/7/bits/error_constants.h \
 /usr/include/c++/7/stdexcept /usr/include/c++/7/streambuf \
 /usr/include/c++/7/bits/streambuf.tcc \
 /usr/include/c++/7/bits/basic_ios.h \
 /usr/include/c++/7/bits/locale_facets.h /usr/include/c++/7/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_base.h \
 /usr/include/c++/7/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_inline.h \
 /usr/include/c++/7/bits/locale_facets.tcc \
 /usr/include/c++/7/bits/basic_ios.tcc \
 /usr/include/c++/7/bits/ostream.tcc /usr/include/c++/7/istream \
 /usr/include/c++/7/bits/istream.tcc /usr/include/c++/7/math.h \
 /usr/include/c++/7/cmath /usr/include/math.h \
 /usr/include/x86_64-linux-gnu/bits/math-vector.h \
 /usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val_flt128.h \
 /usr/include/x86_64-linux-gnu/bits/huge_valf.h \
 /usr/include/x86_64-linux-gnu/bits/huge_vall.h \
 /usr/include/x86_64-linux-gnu/bits/inf.h \
 /usr/include/x86_64-linux-gnu/bits/nan.h \
 /usr/include/x86_64-linux-gnu/bits/flt-eval-method.h \
 /usr/include/x86_64-linux-gnu/bits/fp-logb.h \
 /usr/include/x86_64-linux-gnu/bits/fp-fast.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls.h \
 /usr/include/x86_64-linux-gnu/bits/iscanonical.h Utility.h png.h util.h \
 /usr/include/c++/7/cstring /usr/include/string.h /usr/include/strings.h
Target.o: Target.cpp /usr/include/stdc-predef.h Target.h \
 /usr/include/c++/7/iostream \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/c++/7/ostream /usr/include/c++/7/ios \
 /usr/include/c++/7/iosfwd /usr/include/c++/7/bits/stringfwd.h \
 /usr/include/c++/7/bits/memoryfwd.h /usr/include/c++/7/bits/postypes.h \
 /usr/include/c++/7/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/new /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/move.h /usr/include/c++/7/bits/concept_check.h \
 /usr/include/c++/7/type_traits /usr/include/c++/7/bits/char_traits.h \
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h /usr/include/c++/7/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/7/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++locale.h \
 /usr/include/c++/7/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/7/cctype \
 /usr/include/ctype.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/c++/7/bits/ios_base.h /usr/include/c++/7/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/atomic_word.h \
 /usr/include/c++/7/bits/locale_classes.h /usr/include/c++/7/string \
 /usr/include/c++/7/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
 /usr/include/c++/7/ext/new_allocator.h \
 /usr/include/c++/7/bits/ostream_insert.h \
 /usr/include/c++/7/bits/cxxabi_forced.h \
 /usr/include/c++/7/bits/stl_function.h \
 /usr/include/c++/7/backward/binders.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list \
 /usr/include/c++/7/bits/basic_string.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/ext/string_conversions.h /usr/include/c++/7/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h /usr/include/alloca.h \
 /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/c++/7/cstdio \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
 /usr/include/c++/7/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/7/bits/functional_hash.h \
 /usr/include/c++/7/bits/basic_string.tcc \
 /usr/include/c++/7/bits/locale_classes.tcc \
 /usr/include/c++/7/system_error \
 /usr/include/x86_64-linux-gnu/c++/7/bits/error_constants.h \
 /usr/include/c++/7/stdexcept /usr/include/c++/7/streambuf \
 /usr/include/c++/7/bits/streambuf.tcc \
 /usr/include/c++/7/bits/basic_ios.h \
 /usr/include/c++/7/bits/locale_facets.h /usr/include/c++/7/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_base.h \
 /usr/include/c++/7/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_inline.h \
 /usr/include/c++/7/bits/locale_facets.tcc \
 /usr/include/c++/7/bits/basic_ios.tcc \
 /usr/include/c++/7/bits/ostream.tcc /usr/include/c++/7/istream \
 /usr/include/c++/7/bits/istream.tcc /usr/include/c++/7/math.h \
 /usr/include/c++/7/cmath /usr/include/math.h \
 /usr/include/x86_64-linux-gnu/bits/math-vector.h \
 /usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val_flt128.h \
 /usr/include/x86_64-linux-gnu/bits/huge_valf.h \
 /usr/include/x86_64-linux-gnu/bits/huge_vall.h \
 /usr/include/x86_64-linux-gnu/bits/inf.h \
 /usr/include/x86_64-linux-gnu/bits/nan.h \
 /usr/include/x86_64-linux-gnu/bits/flt-eval-method.h \
 /usr/include/x86_64-linux-gnu/bits/fp-logb.h \
 /usr/include/x86_64-linux-gnu/bits/fp-fast.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls.h \
 /usr/include/x86_64-linux-gnu/bits/iscanonical.h /usr/include/c++/7/set \
 /usr/include/c++/7/bits/stl_tree.h \
 /usr/include/c++/7/ext/aligned_buffer.h \
 /usr/include/c++/7/bits/stl_set.h /usr/include/c++/7/bits/stl_multiset.h \
 Utility.h png.h util.h ColorConverter.h /usr/include/c++/7/algorithm \
 /usr/include/c++/7/utility /usr/include/c++/7/bits/stl_relops.h \
 /usr/include/c++/7/bits/stl_algo.h \
 /usr/include/c++/7/bits/algorithmfwd.h \
 /usr/include/c++/7/bits/stl_heap.h /usr/include/c++/7/bits/stl_tempbuf.h \
 /usr/include/c++/7/bits/stl_construct.h \
 /usr/include/c++/7/bits/uniform_int_dist.h /usr/include/c++/7/limits \
 Canny.h /usr/include/assert.h Ralph.h
Canvas.o: Canvas.cpp /usr/include/stdc-predef.h Canvas.h \
 /usr/include/c++/7/iostream \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/c++/7/ostream /usr/include/c++/7/ios \
 /usr/include/c++/7/iosfwd /usr/include/c++/7/bits/stringfwd.h \
 /usr/include/c++/7/bits/memoryfwd.h /usr/include/c++/7/bits/postypes.h \
 /usr/include/c++/7/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/new /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/move.h /usr/include/c++/7/bits/concept_check.h \
 /usr/include/c++/7/type_traits /usr/include/c++/7/bits/char_traits.h \
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h /usr/include/c++/7/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/7/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++locale.h \
 /usr/include/c++/7/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/7/cctype \
 /usr/include/ctype.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/c++/7/bits/ios_base.h /usr/include/c++/7/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/atomic_word.h \
 /usr/include/c++/7/bits/locale_classes.h /usr/include/c++/7/string \
 /usr/include/c++/7/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
 /usr/include/c++/7/ext/new_allocator.h \
 /usr/include/c++/7/bits/ostream_insert.h \
 /usr/include/c++/7/bits/cxxabi_forced.h \
 /usr/include/c++/7/bits/stl_function.h \
 /usr/include/c++/7/backward/binders.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list \
 /usr/include/c++/7/bits/basic_string.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/ext/string_conversions.h /usr/include/c++/7/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h /usr/include/alloca.h \
 /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/c++/7/cstdio \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
 /usr/include/c++/7/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/7/bits/functional_hash.h \
 /usr/include/c++/7/bits/basic_string.tcc \
 /usr/include/c++/7/bits/locale_classes.tcc \
 /usr/include/c++/7/system_error \
 /usr/include/x86_64-linux-gnu/c++/7/bits/error_constants.h \
 /usr/include/c++/7/stdexcept /usr/include/c++/7/streambuf \
 /usr/include/c++/7/bits/streambuf.tcc \
 /usr/include/c++/7/bits/basic_ios.h \
 /usr/include/c++/7/bits/locale_facets.h /usr/include/c++/7/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_base.h \
 /usr/include/c++/7/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_inline.h \
 /usr/include/c++/7/bits/locale_facets.tcc \
 /usr/include/c++/7/bits/basic_ios.tcc \
 /usr/include/c++/7/bits/ostream.tcc /usr/include/c++/7/istream \
 /usr/include/c++/7/bits/istream.tcc /usr/include/assert.h \
 /usr/include/c++/7/math.h /usr/include/c++/7/cmath /usr/include/math.h \
 /usr/include/x86_64-linux-gnu/bits/math-vector.h \
 /usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val_flt128.h \
 /usr/include/x86_64-linux-gnu/bits/huge_valf.h \
 /usr/include/x86_64-linux-gnu/bits/huge_vall.h \
 /usr/include/x86_64-linux-gnu/bits/inf.h \
 /usr/include/x86_64-linux-gnu/bits/nan.h \
 /usr/include/x86_64-linux-gnu/bits/flt-eval-method.h \
 /usr/include/x86_64-linux-gnu/bits/fp-logb.h \
 /usr/include/x86_64-linux-gnu/bits/fp-fast.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls.h \
 /usr/include/x86_64-linux-gnu/bits/iscanonical.h \
 /usr/include/c++/7/vector /usr/include/c++/7/bits/stl_construct.h \
 /usr/include/c++/7/bits/stl_uninitialized.h \
 /usr/include/c++/7/bits/stl_vector.h \
 /usr/include/c++/7/bits/stl_bvector.h /usr/include/c++/7/bits/vector.tcc \
 Utility.h png.h util.h Target.h /usr/include/c++/7/set \
 /usr/include/c++/7/bits/stl_tree.h \
 /usr/include/c++/7/ext/aligned_buffer.h \
 /usr/include/c++/7/bits/stl_set.h /usr/include/c++/7/bits/stl_multiset.h \
 ColorConverter.h /usr/include/c++/7/algorithm /usr/include/c++/7/utility \
 /usr/include/c++/7/bits/stl_relops.h /usr/include/c++/7/bits/stl_algo.h \
 /usr/include/c++/7/bits/algorithmfwd.h \
 /usr/include/c++/7/bits/stl_heap.h /usr/include/c++/7/bits/stl_tempbuf.h \
 /usr/include/c++/7/bits/uniform_int_dist.h /usr/include/c++/7/limits \
 Canny.h Ralph.h BestCanvas.h ConfigReader.h /usr/include/c++/7/fstream \
 /usr/include/c++/7/bits/codecvt.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/basic_file.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++io.h \
 /usr/include/c++/7/bits/fstream.tcc /usr/include/c++/7/sstream \
 /usr/include/c++/7/bits/sstream.tcc
Decal.o: Decal.cpp /usr/include/stdc-predef.h Decal.h \
 /usr/include/c++/7/math.h /usr/include/c++/7/cmath \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h /usr/include/math.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/math-vector.h \
 /usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val_flt128.h \
 /usr/include/x86_64-linux-gnu/bits/huge_valf.h \
 /usr/include/x86_64-linux-gnu/bits/huge_vall.h \
 /usr/include/x86_64-linux-gnu/bits/inf.h \
 /usr/include/x86_64-linux-gnu/bits/nan.h \
 /usr/include/x86_64-linux-gnu/bits/flt-eval-method.h \
 /usr/include/x86_64-linux-gnu/bits/fp-logb.h \
 /usr/include/x86_64-linux-gnu/bits/fp-fast.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls.h \
 /usr/include/x86_64-linux-gnu/bits/iscanonical.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/stdlib.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/vector /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/stl_construct.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/bits/stl_uninitialized.h \
 /usr/include/c++/7/bits/stl_vector.h /usr/include/c++/7/initializer_list \
 /usr/include/c++/7/bits/stl_bvector.h \
 /usr/include/c++/7/bits/functional_hash.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/bits/vector.tcc /usr/include/c++/7/iostream \
 /usr/include/c++/7/ostream /usr/include/c++/7/ios \
 /usr/include/c++/7/iosfwd /usr/include/c++/7/bits/stringfwd.h \
 /usr/include/c++/7/bits/postypes.h /usr/include/c++/7/cwchar \
 /usr/include/wchar.h /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/c++/7/bits/char_traits.h /usr/include/c++/7/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/7/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++locale.h \
 /usr/include/c++/7/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/7/cctype \
 /usr/include/ctype.h /usr/include/c++/7/bits/ios_base.h \
 /usr/include/c++/7/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/atomic_word.h \
 /usr/include/c++/7/bits/locale_classes.h /usr/include/c++/7/string \
 /usr/include/c++/7/bits/ostream_insert.h \
 /usr/include/c++/7/bits/cxxabi_forced.h \
 /usr/include/c++/7/bits/stl_function.h \
 /usr/include/c++/7/backward/binders.h \
 /usr/include/c++/7/bits/basic_string.h \
 /usr/include/c++/7/ext/string_conversions.h /usr/include/c++/7/cstdlib \
 /usr/include/c++/7/cstdio /usr/include/stdio.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
 /usr/include/c++/7/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/7/bits/basic_string.tcc \
 /usr/include/c++/7/bits/locale_classes.tcc \
 /usr/include/c++/7/system_error \
 /usr/include/x86_64-linux-gnu/c++/7/bits/error_constants.h \
 /usr/include/c++/7/stdexcept /usr/include/c++/7/streambuf \
 /usr/include/c++/7/bits/streambuf.tcc \
 /usr/include/c++/7/bits/basic_ios.h \
 /usr/include/c++/7/bits/locale_facets.h /usr/include/c++/7/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_base.h \
 /usr/include/c++/7/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_inline.h \
 /usr/include/c++/7/bits/locale_facets.tcc \
 /usr/include/c++/7/bits/basic_ios.tcc \
 /usr/include/c++/7/bits/ostream.tcc /usr/include/c++/7/istream \
 /usr/include/c++/7/bits/istream.tcc Utility.h ColorConverter.h \
 /usr/include/c++/7/algorithm /usr/include/c++/7/utility \
 /usr/include/c++/7/bits/stl_relops.h /usr/include/c++/7/bits/stl_algo.h \
 /usr/include/c++/7/bits/algorithmfwd.h \
 /usr/include/c++/7/bits/stl_heap.h /usr/include/c++/7/bits/stl_tempbuf.h \
 /usr/include/c++/7/bits/uniform_int_dist.h /usr/include/c++/7/limits \
 ConfigReader.h /usr/include/c++/7/fstream \
 /usr/include/c++/7/bits/codecvt.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/basic_file.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++io.h \
 /usr/include/c++/7/bits/fstream.tcc /usr/include/c++/7/sstream \
 /usr/include/c++/7/bits/sstream.tcc
ImageFitness.o: ImageFitness.cpp /usr/include/stdc-predef.h \
 ImageFitness.h /usr/lib/gcc/x86_64-linux-gnu/7/include/float.h \
 /usr/include/c++/7/math.h /usr/include/c++/7/cmath \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h /usr/include/math.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/math-vector.h \
 /usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val_flt128.h \
 /usr/include/x86_64-linux-gnu/bits/huge_valf.h \
 /usr/include/x86_64-linux-gnu/bits/huge_vall.h \
 /usr/include/x86_64-linux-gnu/bits/inf.h \
 /usr/include/x86_64-linux-gnu/bits/nan.h \
 /usr/include/x86_64-linux-gnu/bits/flt-eval-method.h \
 /usr/include/x86_64-linux-gnu/bits/fp-logb.h \
 /usr/include/x86_64-linux-gnu/bits/fp-fast.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls.h \
 /usr/include/x86_64-linux-gnu/bits/iscanonical.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/stdlib.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/iostream /usr/include/c++/7/ostream \
 /usr/include/c++/7/ios /usr/include/c++/7/iosfwd \
 /usr/include/c++/7/bits/stringfwd.h /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/postypes.h /usr/include/c++/7/cwchar \
 /usr/include/wchar.h /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/new /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/move.h /usr/include/c++/7/bits/concept_check.h \
 /usr/include/c++/7/type_traits /usr/include/c++/7/bits/char_traits.h \
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h /usr/include/c++/7/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/7/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++locale.h \
 /usr/include/c++/7/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/7/cctype \
 /usr/include/ctype.h /usr/include/c++/7/bits/ios_base.h \
 /usr/include/c++/7/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/atomic_word.h \
 /usr/include/c++/7/bits/locale_classes.h /usr/include/c++/7/string \
 /usr/include/c++/7/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
 /usr/include/c++/7/ext/new_allocator.h \
 /usr/include/c++/7/bits/ostream_insert.h \
 /usr/include/c++/7/bits/cxxabi_forced.h \
 /usr/include/c++/7/bits/stl_function.h \
 /usr/include/c++/7/backward/binders.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list \
 /usr/include/c++/7/bits/basic_string.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/ext/string_conversions.h /usr/include/c++/7/cstdlib \
 /usr/include/c++/7/cstdio /usr/include/stdio.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
 /usr/include/c++/7/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/7/bits/functional_hash.h \
 /usr/include/c++/7/bits/basic_string.tcc \
 /usr/include/c++/7/bits/locale_classes.tcc \
 /usr/include/c++/7/system_error \
 /usr/include/x86_64-linux-gnu/c++/7/bits/error_constants.h \
 /usr/include/c++/7/stdexcept /usr/include/c++/7/streambuf \
 /usr/include/c++/7/bits/streambuf.tcc \
 /usr/include/c++/7/bits/basic_ios.h \
 /usr/include/c++/7/bits/locale_facets.h /usr/include/c++/7/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_base.h \
 /usr/include/c++/7/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_inline.h \
 /usr/include/c++/7/bits/locale_facets.tcc \
 /usr/include/c++/7/bits/basic_ios.tcc \
 /usr/include/c++/7/bits/ostream.tcc /usr/include/c++/7/istream \
 /usr/include/c++/7/bits/istream.tcc /usr/include/c++/7/fstream \
 /usr/include/c++/7/bits/codecvt.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/basic_file.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++io.h \
 /usr/include/c++/7/bits/fstream.tcc /usr/include/c++/7/cstring \
 /usr/include/string.h /usr/include/strings.h /usr/include/c++/7/thread \
 /usr/include/c++/7/chrono /usr/include/c++/7/ratio \
 /usr/include/c++/7/limits /usr/include/c++/7/ctime \
 /usr/include/c++/7/bits/parse_numbers.h /usr/include/c++/7/memory \
 /usr/include/c++/7/bits/stl_construct.h \
 /usr/include/c++/7/bits/stl_uninitialized.h \
 /usr/include/c++/7/bits/stl_tempbuf.h \
 /usr/include/c++/7/bits/stl_raw_storage_iter.h \
 /usr/include/c++/7/ext/concurrence.h \
 /usr/include/c++/7/bits/uses_allocator.h \
 /usr/include/c++/7/bits/unique_ptr.h /usr/include/c++/7/utility \
 /usr/include/c++/7/bits/stl_relops.h /usr/include/c++/7/tuple \
 /usr/include/c++/7/array /usr/include/c++/7/bits/invoke.h \
 /usr/include/c++/7/bits/shared_ptr.h \
 /usr/include/c++/7/bits/shared_ptr_base.h \
 /usr/include/c++/7/bits/allocated_ptr.h \
 /usr/include/c++/7/bits/refwrap.h \
 /usr/include/c++/7/ext/aligned_buffer.h \
 /usr/include/c++/7/bits/shared_ptr_atomic.h \
 /usr/include/c++/7/bits/atomic_base.h \
 /usr/include/c++/7/bits/atomic_lockfree_defines.h \
 /usr/include/c++/7/backward/auto_ptr.h ../RMITGP.1.5/GeneticProgram.h \
 ../RMITGP.1.5/ReturnData.h ../RMITGP.1.5/Node.h \
 /usr/include/c++/7/vector /usr/include/c++/7/bits/stl_vector.h \
 /usr/include/c++/7/bits/stl_bvector.h /usr/include/c++/7/bits/vector.tcc \
 ../RMITGP.1.5/Population.h ../RMITGP.1.5/GeneticProgram.h \
 ../RMITGP.1.5/Mutation.h ../RMITGP.1.5/Crossover.h \
 ../RMITGP.1.5/Selection.h ../RMITGP.1.5/GPConfig.h \
 ../RMITGP.1.5/Random.h ../RMITGP.1.5/Fitness.h ../RMITGP.1.5/NodeSet.h \
 ../RMITGP.1.5/Function.h ../RMITGP.1.5/Terminal.h \
 ../RMITGP.1.5/Fitness.h ../RMITGP.1.5/GPConfig.h DecalCanvas.h Canvas.h \
 /usr/include/assert.h Utility.h png.h util.h Target.h \
 /usr/include/c++/7/set /usr/include/c++/7/bits/stl_tree.h \
 /usr/include/c++/7/bits/stl_set.h /usr/include/c++/7/bits/stl_multiset.h \
 ColorConverter.h /usr/include/c++/7/algorithm \
 /usr/include/c++/7/bits/stl_algo.h \
 /usr/include/c++/7/bits/algorithmfwd.h \
 /usr/include/c++/7/bits/stl_heap.h \
 /usr/include/c++/7/bits/uniform_int_dist.h Canny.h Ralph.h BestCanvas.h \
 ConfigReader.h /usr/include/c++/7/sstream \
 /usr/include/c++/7/bits/sstream.tcc Decal.h Palette.h Pixel.h \
 BezierPathCanvas.h ShroudCanvas.h ReturnFloat.h \
 ../RMITGP.1.5/ReturnData.h ReturnFunc.h
DecalCanvas.o: DecalCanvas.cpp /usr/include/stdc-predef.h DecalCanvas.h \
 /usr/include/c++/7/iostream \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/c++/7/ostream /usr/include/c++/7/ios \
 /usr/include/c++/7/iosfwd /usr/include/c++/7/bits/stringfwd.h \
 /usr/include/c++/7/bits/memoryfwd.h /usr/include/c++/7/bits/postypes.h \
 /usr/include/c++/7/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/new /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/move.h /usr/include/c++/7/bits/concept_check.h \
 /usr/include/c++/7/type_traits /usr/include/c++/7/bits/char_traits.h \
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h /usr/include/c++/7/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/7/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++locale.h \
 /usr/include/c++/7/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/7/cctype \
 /usr/include/ctype.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/c++/7/bits/ios_base.h /usr/include/c++/7/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/atomic_word.h \
 /usr/include/c++/7/bits/locale_classes.h /usr/include/c++/7/string \
 /usr/include/c++/7/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
 /usr/include/c++/7/ext/new_allocator.h \
 /usr/include/c++/7/bits/ostream_insert.h \
 /usr/include/c++/7/bits/cxxabi_forced.h \
 /usr/include/c++/7/bits/stl_function.h \
 /usr/include/c++/7/backward/binders.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list \
 /usr/include/c++/7/bits/basic_string.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/ext/string_conversions.h /usr/include/c++/7/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h /usr/include/alloca.h \
 /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/c++/7/cstdio \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
 /usr/include/c++/7/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/7/bits/functional_hash.h \
 /usr/include/c++/7/bits/basic_string.tcc \
 /usr/include/c++/7/bits/locale_classes.tcc \
 /usr/include/c++/7/system_error \
 /usr/include/x86_64-linux-gnu/c++/7/bits/error_constants.h \
 /usr/include/c++/7/stdexcept /usr/include/c++/7/streambuf \
 /usr/include/c++/7/bits/streambuf.tcc \
 /usr/include/c++/7/bits/basic_ios.h \
 /usr/include/c++/7/bits/locale_facets.h /usr/include/c++/7/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_base.h \
 /usr/include/c++/7/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_inline.h \
 /usr/include/c++/7/bits/locale_facets.tcc \
 /usr/include/c++/7/bits/basic_ios.tcc \
 /usr/include/c++/7/bits/ostream.tcc /usr/include/c++/7/istream \
 /usr/include/c++/7/bits/istream.tcc Canvas.h /usr/include/assert.h \
 /usr/include/c++/7/math.h /usr/include/c++/7/cmath /usr/include/math.h \
 /usr/include/x86_64-linux-gnu/bits/math-vector.h \
 /usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val_flt128.h \
 /usr/include/x86_64-linux-gnu/bits/huge_valf.h \
 /usr/include/x86_64-linux-gnu/bits/huge_vall.h \
 /usr/include/x86_64-linux-gnu/bits/inf.h \
 /usr/include/x86_64-linux-gnu/bits/nan.h \
 /usr/include/x86_64-linux-gnu/bits/flt-eval-method.h \
 /usr/include/x86_64-linux-gnu/bits/fp-logb.h \
 /usr/include/x86_64-linux-gnu/bits/fp-fast.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls.h \
 /usr/include/x86_64-linux-gnu/bits/iscanonical.h \
 /usr/include/c++/7/vector /usr/include/c++/7/bits/stl_construct.h \
 /usr/include/c++/7/bits/stl_uninitialized.h \
 /usr/include/c++/7/bits/stl_vector.h \
 /usr/include/c++/7/bits/stl_bvector.h /usr/include/c++/7/bits/vector.tcc \
 Utility.h png.h util.h Target.h /usr/include/c++/7/set \
 /usr/include/c++/7/bits/stl_tree.h \
 /usr/include/c++/7/ext/aligned_buffer.h \
 /usr/include/c++/7/bits/stl_set.h /usr/include/c++/7/bits/stl_multiset.h \
 ColorConverter.h /usr/include/c++/7/algorithm /usr/include/c++/7/utility \
 /usr/include/c++/7/bits/stl_relops.h /usr/include/c++/7/bits/stl_algo.h \
 /usr/include/c++/7/bits/algorithmfwd.h \
 /usr/include/c++/7/bits/stl_heap.h /usr/include/c++/7/bits/stl_tempbuf.h \
 /usr/include/c++/7/bits/uniform_int_dist.h /usr/include/c++/7/limits \
 Canny.h Ralph.h BestCanvas.h ConfigReader.h /usr/include/c++/7/fstream \
 /usr/include/c++/7/bits/codecvt.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/basic_file.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++io.h \
 /usr/include/c++/7/bits/fstream.tcc /usr/include/c++/7/sstream \
 /usr/include/c++/7/bits/sstream.tcc Decal.h Palette.h Pixel.h
BezierPathCanvas.o: BezierPathCanvas.cpp /usr/include/stdc-predef.h \
 BezierPathCanvas.h /usr/include/c++/7/iostream \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/c++/7/ostream /usr/include/c++/7/ios \
 /usr/include/c++/7/iosfwd /usr/include/c++/7/bits/stringfwd.h \
 /usr/include/c++/7/bits/memoryfwd.h /usr/include/c++/7/bits/postypes.h \
 /usr/include/c++/7/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/new /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/move.h /usr/include/c++/7/bits/concept_check.h \
 /usr/include/c++/7/type_traits /usr/include/c++/7/bits/char_traits.h \
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h /usr/include/c++/7/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/7/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++locale.h \
 /usr/include/c++/7/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/7/cctype \
 /usr/include/ctype.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/c++/7/bits/ios_base.h /usr/include/c++/7/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/atomic_word.h \
 /usr/include/c++/7/bits/locale_classes.h /usr/include/c++/7/string \
 /usr/include/c++/7/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
 /usr/include/c++/7/ext/new_allocator.h \
 /usr/include/c++/7/bits/ostream_insert.h \
 /usr/include/c++/7/bits/cxxabi_forced.h \
 /usr/include/c++/7/bits/stl_function.h \
 /usr/include/c++/7/backward/binders.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list \
 /usr/include/c++/7/bits/basic_string.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/ext/string_conversions.h /usr/include/c++/7/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h /usr/include/alloca.h \
 /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/c++/7/cstdio \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
 /usr/include/c++/7/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/7/bits/functional_hash.h \
 /usr/include/c++/7/bits/basic_string.tcc \
 /usr/include/c++/7/bits/locale_classes.tcc \
 /usr/include/c++/7/system_error \
 /usr/include/x86_64-linux-gnu/c++/7/bits/error_constants.h \
 /usr/include/c++/7/stdexcept /usr/include/c++/7/streambuf \
 /usr/include/c++/7/bits/streambuf.tcc \
 /usr/include/c++/7/bits/basic_ios.h \
 /usr/include/c++/7/bits/locale_facets.h /usr/include/c++/7/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_base.h \
 /usr/include/c++/7/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_inline.h \
 /usr/include/c++/7/bits/locale_facets.tcc \
 /usr/include/c++/7/bits/basic_ios.tcc \
 /usr/include/c++/7/bits/ostream.tcc /usr/include/c++/7/istream \
 /usr/include/c++/7/bits/istream.tcc Canvas.h /usr/include/assert.h \
 /usr/include/c++/7/math.h /usr/include/c++/7/cmath /usr/include/math.h \
 /usr/include/x86_64-linux-gnu/bits/math-vector.h \
 /usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val_flt128.h \
 /usr/include/x86_64-linux-gnu/bits/huge_valf.h \
 /usr/include/x86_64-linux-gnu/bits/huge_vall.h \
 /usr/include/x86_64-linux-gnu/bits/inf.h \
 /usr/include/x86_64-linux-gnu/bits/nan.h \
 /usr/include/x86_64-linux-gnu/bits/flt-eval-method.h \
 /usr/include/x86_64-linux-gnu/bits/fp-logb.h \
 /usr/include/x86_64-linux-gnu/bits/fp-fast.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls.h \
 /usr/include/x86_64-linux-gnu/bits/iscanonical.h \
 /usr/include/c++/7/vector /usr/include/c++/7/bits/stl_construct.h \
 /usr/include/c++/7/bits/stl_uninitialized.h \
 /usr/include/c++/7/bits/stl_vector.h \
 /usr/include/c++/7/bits/stl_bvector.h /usr/include/c++/7/bits/vector.tcc \
 Utility.h png.h util.h Target.h /usr/include/c++/7/set \
 /usr/include/c++/7/bits/stl_tree.h \
 /usr/include/c++/7/ext/aligned_buffer.h \
 /usr/include/c++/7/bits/stl_set.h /usr/include/c++/7/bits/stl_multiset.h \
 ColorConverter.h /usr/include/c++/7/algorithm /usr/include/c++/7/utility \
 /usr/include/c++/7/bits/stl_relops.h /usr/include/c++/7/bits/stl_algo.h \
 /usr/include/c++/7/bits/algorithmfwd.h \
 /usr/include/c++/7/bits/stl_heap.h /usr/include/c++/7/bits/stl_tempbuf.h \
 /usr/include/c++/7/bits/uniform_int_dist.h /usr/include/c++/7/limits \
 Canny.h Ralph.h BestCanvas.h ConfigReader.h /usr/include/c++/7/fstream \
 /usr/include/c++/7/bits/codecvt.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/basic_file.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++io.h \
 /usr/include/c++/7/bits/fstream.tcc /usr/include/c++/7/sstream \
 /usr/include/c++/7/bits/sstream.tcc Decal.h Palette.h Pixel.h
BestCanvas.o: BestCanvas.cpp /usr/include/stdc-predef.h BestCanvas.h \
 /usr/include/c++/7/iostream \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/c++/7/ostream /usr/include/c++/7/ios \
 /usr/include/c++/7/iosfwd /usr/include/c++/7/bits/stringfwd.h \
 /usr/include/c++/7/bits/memoryfwd.h /usr/include/c++/7/bits/postypes.h \
 /usr/include/c++/7/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/new /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/move.h /usr/include/c++/7/bits/concept_check.h \
 /usr/include/c++/7/type_traits /usr/include/c++/7/bits/char_traits.h \
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h /usr/include/c++/7/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/7/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++locale.h \
 /usr/include/c++/7/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/7/cctype \
 /usr/include/ctype.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/c++/7/bits/ios_base.h /usr/include/c++/7/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/atomic_word.h \
 /usr/include/c++/7/bits/locale_classes.h /usr/include/c++/7/string \
 /usr/include/c++/7/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
 /usr/include/c++/7/ext/new_allocator.h \
 /usr/include/c++/7/bits/ostream_insert.h \
 /usr/include/c++/7/bits/cxxabi_forced.h \
 /usr/include/c++/7/bits/stl_function.h \
 /usr/include/c++/7/backward/binders.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list \
 /usr/include/c++/7/bits/basic_string.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/ext/string_conversions.h /usr/include/c++/7/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h /usr/include/alloca.h \
 /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/c++/7/cstdio \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
 /usr/include/c++/7/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/7/bits/functional_hash.h \
 /usr/include/c++/7/bits/basic_string.tcc \
 /usr/include/c++/7/bits/locale_classes.tcc \
 /usr/include/c++/7/system_error \
 /usr/include/x86_64-linux-gnu/c++/7/bits/error_constants.h \
 /usr/include/c++/7/stdexcept /usr/include/c++/7/streambuf \
 /usr/include/c++/7/bits/streambuf.tcc \
 /usr/include/c++/7/bits/basic_ios.h \
 /usr/include/c++/7/bits/locale_facets.h /usr/include/c++/7/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_base.h \
 /usr/include/c++/7/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_inline.h \
 /usr/include/c++/7/bits/locale_facets.tcc \
 /usr/include/c++/7/bits/basic_ios.tcc \
 /usr/include/c++/7/bits/ostream.tcc /usr/include/c++/7/istream \
 /usr/include/c++/7/bits/istream.tcc /usr/include/assert.h \
 /usr/include/c++/7/math.h /usr/include/c++/7/cmath /usr/include/math.h \
 /usr/include/x86_64-linux-gnu/bits/math-vector.h \
 /usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val_flt128.h \
 /usr/include/x86_64-linux-gnu/bits/huge_valf.h \
 /usr/include/x86_64-linux-gnu/bits/huge_vall.h \
 /usr/include/x86_64-linux-gnu/bits/inf.h \
 /usr/include/x86_64-linux-gnu/bits/nan.h \
 /usr/include/x86_64-linux-gnu/bits/flt-eval-method.h \
 /usr/include/x86_64-linux-gnu/bits/fp-logb.h \
 /usr/include/x86_64-linux-gnu/bits/fp-fast.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls.h \
 /usr/include/x86_64-linux-gnu/bits/iscanonical.h Utility.h png.h util.h \
 Target.h /usr/include/c++/7/set /usr/include/c++/7/bits/stl_tree.h \
 /usr/include/c++/7/ext/aligned_buffer.h \
 /usr/include/c++/7/bits/stl_set.h /usr/include/c++/7/bits/stl_multiset.h \
 ColorConverter.h /usr/include/c++/7/algorithm /usr/include/c++/7/utility \
 /usr/include/c++/7/bits/stl_relops.h /usr/include/c++/7/bits/stl_algo.h \
 /usr/include/c++/7/bits/algorithmfwd.h \
 /usr/include/c++/7/bits/stl_heap.h /usr/include/c++/7/bits/stl_tempbuf.h \
 /usr/include/c++/7/bits/stl_construct.h \
 /usr/include/c++/7/bits/uniform_int_dist.h /usr/include/c++/7/limits \
 Canny.h Ralph.h
Canny.o: Canny.cpp /usr/include/stdc-predef.h Canny.h Utility.h png.h \
 util.h /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/c++/7/iostream \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/c++/7/ostream /usr/include/c++/7/ios \
 /usr/include/c++/7/iosfwd /usr/include/c++/7/bits/stringfwd.h \
 /usr/include/c++/7/bits/memoryfwd.h /usr/include/c++/7/bits/postypes.h \
 /usr/include/c++/7/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/new /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/move.h /usr/include/c++/7/bits/concept_check.h \
 /usr/include/c++/7/type_traits /usr/include/c++/7/bits/char_traits.h \
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h /usr/include/c++/7/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/7/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++locale.h \
 /usr/include/c++/7/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/7/cctype \
 /usr/include/ctype.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/c++/7/bits/ios_base.h /usr/include/c++/7/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/atomic_word.h \
 /usr/include/c++/7/bits/locale_classes.h /usr/include/c++/7/string \
 /usr/include/c++/7/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
 /usr/include/c++/7/ext/new_allocator.h \
 /usr/include/c++/7/bits/ostream_insert.h \
 /usr/include/c++/7/bits/cxxabi_forced.h \
 /usr/include/c++/7/bits/stl_function.h \
 /usr/include/c++/7/backward/binders.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list \
 /usr/include/c++/7/bits/basic_string.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/ext/string_conversions.h /usr/include/c++/7/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h /usr/include/alloca.h \
 /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/c++/7/cstdio \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
 /usr/include/c++/7/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/7/bits/functional_hash.h \
 /usr/include/c++/7/bits/basic_string.tcc \
 /usr/include/c++/7/bits/locale_classes.tcc \
 /usr/include/c++/7/system_error \
 /usr/include/x86_64-linux-gnu/c++/7/bits/error_constants.h \
 /usr/include/c++/7/stdexcept /usr/include/c++/7/streambuf \
 /usr/include/c++/7/bits/streambuf.tcc \
 /usr/include/c++/7/bits/basic_ios.h \
 /usr/include/c++/7/bits/locale_facets.h /usr/include/c++/7/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_base.h \
 /usr/include/c++/7/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_inline.h \
 /usr/include/c++/7/bits/locale_facets.tcc \
 /usr/include/c++/7/bits/basic_ios.tcc \
 /usr/include/c++/7/bits/ostream.tcc /usr/include/c++/7/istream \
 /usr/include/c++/7/bits/istream.tcc /usr/include/assert.h \
 /usr/include/c++/7/math.h /usr/include/c++/7/cmath /usr/include/math.h \
 /usr/include/x86_64-linux-gnu/bits/math-vector.h \
 /usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val_flt128.h \
 /usr/include/x86_64-linux-gnu/bits/huge_valf.h \
 /usr/include/x86_64-linux-gnu/bits/huge_vall.h \
 /usr/include/x86_64-linux-gnu/bits/inf.h \
 /usr/include/x86_64-linux-gnu/bits/nan.h \
 /usr/include/x86_64-linux-gnu/bits/flt-eval-method.h \
 /usr/include/x86_64-linux-gnu/bits/fp-logb.h \
 /usr/include/x86_64-linux-gnu/bits/fp-fast.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls.h \
 /usr/include/x86_64-linux-gnu/bits/iscanonical.h
ConfigReader.o: ConfigReader.cpp /usr/include/stdc-predef.h \
 ConfigReader.h /usr/include/c++/7/string \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/c++/7/bits/stringfwd.h /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/char_traits.h \
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/postypes.h /usr/include/c++/7/cwchar \
 /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/7/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/7/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++locale.h \
 /usr/include/c++/7/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/7/iosfwd \
 /usr/include/c++/7/cctype /usr/include/ctype.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/c++/7/bits/ostream_insert.h \
 /usr/include/c++/7/bits/cxxabi_forced.h \
 /usr/include/c++/7/bits/stl_function.h \
 /usr/include/c++/7/backward/binders.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list \
 /usr/include/c++/7/bits/basic_string.h \
 /usr/include/c++/7/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/atomic_word.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/ext/string_conversions.h /usr/include/c++/7/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h /usr/include/alloca.h \
 /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/c++/7/cstdio \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
 /usr/include/c++/7/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/7/bits/functional_hash.h \
 /usr/include/c++/7/bits/basic_string.tcc /usr/include/c++/7/fstream \
 /usr/include/c++/7/istream /usr/include/c++/7/ios \
 /usr/include/c++/7/bits/ios_base.h \
 /usr/include/c++/7/bits/locale_classes.h \
 /usr/include/c++/7/bits/locale_classes.tcc \
 /usr/include/c++/7/system_error \
 /usr/include/x86_64-linux-gnu/c++/7/bits/error_constants.h \
 /usr/include/c++/7/stdexcept /usr/include/c++/7/streambuf \
 /usr/include/c++/7/bits/streambuf.tcc \
 /usr/include/c++/7/bits/basic_ios.h \
 /usr/include/c++/7/bits/locale_facets.h /usr/include/c++/7/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_base.h \
 /usr/include/c++/7/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_inline.h \
 /usr/include/c++/7/bits/locale_facets.tcc \
 /usr/include/c++/7/bits/basic_ios.tcc /usr/include/c++/7/ostream \
 /usr/include/c++/7/bits/ostream.tcc /usr/include/c++/7/bits/istream.tcc \
 /usr/include/c++/7/bits/codecvt.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/basic_file.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++io.h \
 /usr/include/c++/7/bits/fstream.tcc /usr/include/c++/7/sstream \
 /usr/include/c++/7/bits/sstream.tcc /usr/include/c++/7/iostream \
 /usr/include/c++/7/utility /usr/include/c++/7/bits/stl_relops.h
RandFloat.o: RandFloat.cpp /usr/include/stdc-predef.h RandFloat.h \
 /usr/include/c++/7/string \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/c++/7/bits/stringfwd.h /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/char_traits.h \
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/postypes.h /usr/include/c++/7/cwchar \
 /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/7/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/7/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++locale.h \
 /usr/include/c++/7/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/7/iosfwd \
 /usr/include/c++/7/cctype /usr/include/ctype.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/c++/7/bits/ostream_insert.h \
 /usr/include/c++/7/bits/cxxabi_forced.h \
 /usr/include/c++/7/bits/stl_function.h \
 /usr/include/c++/7/backward/binders.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list \
 /usr/include/c++/7/bits/basic_string.h \
 /usr/include/c++/7/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/atomic_word.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/ext/string_conversions.h /usr/include/c++/7/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h /usr/include/alloca.h \
 /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/c++/7/cstdio \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
 /usr/include/c++/7/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/7/bits/functional_hash.h \
 /usr/include/c++/7/bits/basic_string.tcc /usr/include/c++/7/iostream \
 /usr/include/c++/7/ostream /usr/include/c++/7/ios \
 /usr/include/c++/7/bits/ios_base.h \
 /usr/include/c++/7/bits/locale_classes.h \
 /usr/include/c++/7/bits/locale_classes.tcc \
 /usr/include/c++/7/system_error \
 /usr/include/x86_64-linux-gnu/c++/7/bits/error_constants.h \
 /usr/include/c++/7/stdexcept /usr/include/c++/7/streambuf \
 /usr/include/c++/7/bits/streambuf.tcc \
 /usr/include/c++/7/bits/basic_ios.h \
 /usr/include/c++/7/bits/locale_facets.h /usr/include/c++/7/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_base.h \
 /usr/include/c++/7/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_inline.h \
 /usr/include/c++/7/bits/locale_facets.tcc \
 /usr/include/c++/7/bits/basic_ios.tcc \
 /usr/include/c++/7/bits/ostream.tcc /usr/include/c++/7/istream \
 /usr/include/c++/7/bits/istream.tcc ../RMITGP.1.5/Terminal.h \
 /usr/include/c++/7/vector /usr/include/c++/7/bits/stl_construct.h \
 /usr/include/c++/7/bits/stl_uninitialized.h \
 /usr/include/c++/7/bits/stl_vector.h \
 /usr/include/c++/7/bits/stl_bvector.h /usr/include/c++/7/bits/vector.tcc \
 ../RMITGP.1.5/Node.h ../RMITGP.1.5/ReturnData.h ../RMITGP.1.5/GPConfig.h \
 ../RMITGP.1.5/Random.h ../RMITGP.1.5/Crossover.h \
 ../RMITGP.1.5/GeneticProgram.h ../RMITGP.1.5/Mutation.h \
 ../RMITGP.1.5/Selection.h ../RMITGP.1.5/Fitness.h \
 ../RMITGP.1.5/NodeSet.h ../RMITGP.1.5/Function.h \
 ../RMITGP.1.5/Terminal.h ReturnFloat.h ../RMITGP.1.5/ReturnData.h \
 /usr/include/c++/7/cstring /usr/include/string.h /usr/include/strings.h
ReturnFloat.o: ReturnFloat.cpp /usr/include/stdc-predef.h ReturnFloat.h \
 ../RMITGP.1.5/ReturnData.h
ReturnFunc.o: ReturnFunc.cpp /usr/include/stdc-predef.h ReturnFunc.h \
 ../RMITGP.1.5/ReturnData.h
ReturnRoot.o: ReturnRoot.cpp /usr/include/stdc-predef.h ReturnRoot.h \
 ../RMITGP.1.5/ReturnData.h
ColorConverter.o: ColorConverter.cpp /usr/include/stdc-predef.h \
 ColorConverter.h /usr/include/c++/7/algorithm /usr/include/c++/7/utility \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/c++/7/bits/stl_relops.h /usr/include/c++/7/bits/stl_pair.h \
 /usr/include/c++/7/bits/move.h /usr/include/c++/7/bits/concept_check.h \
 /usr/include/c++/7/type_traits /usr/include/c++/7/initializer_list \
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/stl_algo.h /usr/include/c++/7/cstdlib \
 /usr/include/stdlib.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/c++/7/bits/algorithmfwd.h \
 /usr/include/c++/7/bits/stl_heap.h /usr/include/c++/7/bits/stl_tempbuf.h \
 /usr/include/c++/7/bits/stl_construct.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/uniform_int_dist.h /usr/include/c++/7/limits \
 /usr/include/c++/7/math.h /usr/include/c++/7/cmath /usr/include/math.h \
 /usr/include/x86_64-linux-gnu/bits/math-vector.h \
 /usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val_flt128.h \
 /usr/include/x86_64-linux-gnu/bits/huge_valf.h \
 /usr/include/x86_64-linux-gnu/bits/huge_vall.h \
 /usr/include/x86_64-linux-gnu/bits/inf.h \
 /usr/include/x86_64-linux-gnu/bits/nan.h \
 /usr/include/x86_64-linux-gnu/bits/flt-eval-method.h \
 /usr/include/x86_64-linux-gnu/bits/fp-logb.h \
 /usr/include/x86_64-linux-gnu/bits/fp-fast.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls.h \
 /usr/include/x86_64-linux-gnu/bits/iscanonical.h \
 /usr/include/c++/7/string /usr/include/c++/7/bits/stringfwd.h \
 /usr/include/c++/7/bits/char_traits.h /usr/include/c++/7/bits/postypes.h \
 /usr/include/c++/7/cwchar /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/c++/7/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/7/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
 /usr/include/c++/7/ext/new_allocator.h \
 /usr/include/c++/7/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++locale.h \
 /usr/include/c++/7/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/7/iosfwd \
 /usr/include/c++/7/cctype /usr/include/ctype.h \
 /usr/include/c++/7/bits/ostream_insert.h \
 /usr/include/c++/7/bits/cxxabi_forced.h \
 /usr/include/c++/7/bits/stl_function.h \
 /usr/include/c++/7/backward/binders.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/bits/basic_string.h \
 /usr/include/c++/7/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/atomic_word.h \
 /usr/include/c++/7/ext/string_conversions.h /usr/include/c++/7/cstdio \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
 /usr/include/c++/7/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/7/bits/functional_hash.h \
 /usr/include/c++/7/bits/basic_string.tcc /usr/include/c++/7/iostream \
 /usr/include/c++/7/ostream /usr/include/c++/7/ios \
 /usr/include/c++/7/bits/ios_base.h \
 /usr/include/c++/7/bits/locale_classes.h \
 /usr/include/c++/7/bits/locale_classes.tcc \
 /usr/include/c++/7/system_error \
 /usr/include/x86_64-linux-gnu/c++/7/bits/error_constants.h \
 /usr/include/c++/7/stdexcept /usr/include/c++/7/streambuf \
 /usr/include/c++/7/bits/streambuf.tcc \
 /usr/include/c++/7/bits/basic_ios.h \
 /usr/include/c++/7/bits/locale_facets.h /usr/include/c++/7/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_base.h \
 /usr/include/c++/7/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_inline.h \
 /usr/include/c++/7/bits/locale_facets.tcc \
 /usr/include/c++/7/bits/basic_ios.tcc \
 /usr/include/c++/7/bits/ostream.tcc /usr/include/c++/7/istream \
 /usr/include/c++/7/bits/istream.tcc Utility.h
TriangleCanvas.o: TriangleCanvas.cpp /usr/include/stdc-predef.h \
 TriangleCanvas.h /usr/include/c++/7/iostream \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/c++/7/ostream /usr/include/c++/7/ios \
 /usr/include/c++/7/iosfwd /usr/include/c++/7/bits/stringfwd.h \
 /usr/include/c++/7/bits/memoryfwd.h /usr/include/c++/7/bits/postypes.h \
 /usr/include/c++/7/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/new /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/move.h /usr/include/c++/7/bits/concept_check.h \
 /usr/include/c++/7/type_traits /usr/include/c++/7/bits/char_traits.h \
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h /usr/include/c++/7/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/7/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++locale.h \
 /usr/include/c++/7/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/7/cctype \
 /usr/include/ctype.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/c++/7/bits/ios_base.h /usr/include/c++/7/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/atomic_word.h \
 /usr/include/c++/7/bits/locale_classes.h /usr/include/c++/7/string \
 /usr/include/c++/7/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
 /usr/include/c++/7/ext/new_allocator.h \
 /usr/include/c++/7/bits/ostream_insert.h \
 /usr/include/c++/7/bits/cxxabi_forced.h \
 /usr/include/c++/7/bits/stl_function.h \
 /usr/include/c++/7/backward/binders.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list \
 /usr/include/c++/7/bits/basic_string.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/ext/string_conversions.h /usr/include/c++/7/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h /usr/include/alloca.h \
 /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/c++/7/cstdio \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
 /usr/include/c++/7/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/7/bits/functional_hash.h \
 /usr/include/c++/7/bits/basic_string.tcc \
 /usr/include/c++/7/bits/locale_classes.tcc \
 /usr/include/c++/7/system_error \
 /usr/include/x86_64-linux-gnu/c++/7/bits/error_constants.h \
 /usr/include/c++/7/stdexcept /usr/include/c++/7/streambuf \
 /usr/include/c++/7/bits/streambuf.tcc \
 /usr/include/c++/7/bits/basic_ios.h \
 /usr/include/c++/7/bits/locale_facets.h /usr/include/c++/7/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_base.h \
 /usr/include/c++/7/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_inline.h \
 /usr/include/c++/7/bits/locale_facets.tcc \
 /usr/include/c++/7/bits/basic_ios.tcc \
 /usr/include/c++/7/bits/ostream.tcc /usr/include/c++/7/istream \
 /usr/include/c++/7/bits/istream.tcc Canvas.h /usr/include/assert.h \
 /usr/include/c++/7/math.h /usr/include/c++/7/cmath /usr/include/math.h \
 /usr/include/x86_64-linux-gnu/bits/math-vector.h \
 /usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val_flt128.h \
 /usr/include/x86_64-linux-gnu/bits/huge_valf.h \
 /usr/include/x86_64-linux-gnu/bits/huge_vall.h \
 /usr/include/x86_64-linux-gnu/bits/inf.h \
 /usr/include/x86_64-linux-gnu/bits/nan.h \
 /usr/include/x86_64-linux-gnu/bits/flt-eval-method.h \
 /usr/include/x86_64-linux-gnu/bits/fp-logb.h \
 /usr/include/x86_64-linux-gnu/bits/fp-fast.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls.h \
 /usr/include/x86_64-linux-gnu/bits/iscanonical.h \
 /usr/include/c++/7/vector /usr/include/c++/7/bits/stl_construct.h \
 /usr/include/c++/7/bits/stl_uninitialized.h \
 /usr/include/c++/7/bits/stl_vector.h \
 /usr/include/c++/7/bits/stl_bvector.h /usr/include/c++/7/bits/vector.tcc \
 Utility.h png.h util.h Target.h /usr/include/c++/7/set \
 /usr/include/c++/7/bits/stl_tree.h \
 /usr/include/c++/7/ext/aligned_buffer.h \
 /usr/include/c++/7/bits/stl_set.h /usr/include/c++/7/bits/stl_multiset.h \
 ColorConverter.h /usr/include/c++/7/algorithm /usr/include/c++/7/utility \
 /usr/include/c++/7/bits/stl_relops.h /usr/include/c++/7/bits/stl_algo.h \
 /usr/include/c++/7/bits/algorithmfwd.h \
 /usr/include/c++/7/bits/stl_heap.h /usr/include/c++/7/bits/stl_tempbuf.h \
 /usr/include/c++/7/bits/uniform_int_dist.h /usr/include/c++/7/limits \
 Canny.h Ralph.h BestCanvas.h ConfigReader.h /usr/include/c++/7/fstream \
 /usr/include/c++/7/bits/codecvt.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/basic_file.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++io.h \
 /usr/include/c++/7/bits/fstream.tcc /usr/include/c++/7/sstream \
 /usr/include/c++/7/bits/sstream.tcc Pixel.h /usr/include/c++/7/cstring \
 /usr/include/string.h /usr/include/strings.h
ShroudCanvas.o: ShroudCanvas.cpp /usr/include/stdc-predef.h \
 ConfigReader.h /usr/include/c++/7/string \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/c++/7/bits/stringfwd.h /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/char_traits.h \
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/postypes.h /usr/include/c++/7/cwchar \
 /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/7/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/7/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++locale.h \
 /usr/include/c++/7/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/7/iosfwd \
 /usr/include/c++/7/cctype /usr/include/ctype.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/c++/7/bits/ostream_insert.h \
 /usr/include/c++/7/bits/cxxabi_forced.h \
 /usr/include/c++/7/bits/stl_function.h \
 /usr/include/c++/7/backward/binders.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list \
 /usr/include/c++/7/bits/basic_string.h \
 /usr/include/c++/7/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/atomic_word.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/ext/string_conversions.h /usr/include/c++/7/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h /usr/include/alloca.h \
 /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/c++/7/cstdio \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
 /usr/include/c++/7/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/7/bits/functional_hash.h \
 /usr/include/c++/7/bits/basic_string.tcc /usr/include/c++/7/fstream \
 /usr/include/c++/7/istream /usr/include/c++/7/ios \
 /usr/include/c++/7/bits/ios_base.h \
 /usr/include/c++/7/bits/locale_classes.h \
 /usr/include/c++/7/bits/locale_classes.tcc \
 /usr/include/c++/7/system_error \
 /usr/include/x86_64-linux-gnu/c++/7/bits/error_constants.h \
 /usr/include/c++/7/stdexcept /usr/include/c++/7/streambuf \
 /usr/include/c++/7/bits/streambuf.tcc \
 /usr/include/c++/7/bits/basic_ios.h \
 /usr/include/c++/7/bits/locale_facets.h /usr/include/c++/7/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_base.h \
 /usr/include/c++/7/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_inline.h \
 /usr/include/c++/7/bits/locale_facets.tcc \
 /usr/include/c++/7/bits/basic_ios.tcc /usr/include/c++/7/ostream \
 /usr/include/c++/7/bits/ostream.tcc /usr/include/c++/7/bits/istream.tcc \
 /usr/include/c++/7/bits/codecvt.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/basic_file.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++io.h \
 /usr/include/c++/7/bits/fstream.tcc /usr/include/c++/7/sstream \
 /usr/include/c++/7/bits/sstream.tcc /usr/include/c++/7/iostream \
 /usr/include/c++/7/utility /usr/include/c++/7/bits/stl_relops.h \
 ShroudCanvas.h Canvas.h /usr/include/assert.h /usr/include/c++/7/math.h \
 /usr/include/c++/7/cmath /usr/include/math.h \
 /usr/include/x86_64-linux-gnu/bits/math-vector.h \
 /usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val_flt128.h \
 /usr/include/x86_64-linux-gnu/bits/huge_valf.h \
 /usr/include/x86_64-linux-gnu/bits/huge_vall.h \
 /usr/include/x86_64-linux-gnu/bits/inf.h \
 /usr/include/x86_64-linux-gnu/bits/nan.h \
 /usr/include/x86_64-linux-gnu/bits/flt-eval-method.h \
 /usr/include/x86_64-linux-gnu/bits/fp-logb.h \
 /usr/include/x86_64-linux-gnu/bits/fp-fast.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls.h \
 /usr/include/x86_64-linux-gnu/bits/iscanonical.h \
 /usr/include/c++/7/vector /usr/include/c++/7/bits/stl_construct.h \
 /usr/include/c++/7/bits/stl_uninitialized.h \
 /usr/include/c++/7/bits/stl_vector.h \
 /usr/include/c++/7/bits/stl_bvector.h /usr/include/c++/7/bits/vector.tcc \
 Utility.h png.h util.h Target.h /usr/include/c++/7/set \
 /usr/include/c++/7/bits/stl_tree.h \
 /usr/include/c++/7/ext/aligned_buffer.h \
 /usr/include/c++/7/bits/stl_set.h /usr/include/c++/7/bits/stl_multiset.h \
 ColorConverter.h /usr/include/c++/7/algorithm \
 /usr/include/c++/7/bits/stl_algo.h \
 /usr/include/c++/7/bits/algorithmfwd.h \
 /usr/include/c++/7/bits/stl_heap.h /usr/include/c++/7/bits/stl_tempbuf.h \
 /usr/include/c++/7/bits/uniform_int_dist.h /usr/include/c++/7/limits \
 Canny.h Ralph.h BestCanvas.h Pixel.h
Ralph.o: Ralph.cpp /usr/include/stdc-predef.h Ralph.h \
 /usr/include/c++/7/cstdlib \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/stdlib.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/c++/7/math.h \
 /usr/include/c++/7/cmath /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h /usr/include/math.h \
 /usr/include/x86_64-linux-gnu/bits/math-vector.h \
 /usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val_flt128.h \
 /usr/include/x86_64-linux-gnu/bits/huge_valf.h \
 /usr/include/x86_64-linux-gnu/bits/huge_vall.h \
 /usr/include/x86_64-linux-gnu/bits/inf.h \
 /usr/include/x86_64-linux-gnu/bits/nan.h \
 /usr/include/x86_64-linux-gnu/bits/flt-eval-method.h \
 /usr/include/x86_64-linux-gnu/bits/fp-logb.h \
 /usr/include/x86_64-linux-gnu/bits/fp-fast.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls.h \
 /usr/include/x86_64-linux-gnu/bits/iscanonical.h \
 /usr/include/c++/7/iostream /usr/include/c++/7/ostream \
 /usr/include/c++/7/ios /usr/include/c++/7/iosfwd \
 /usr/include/c++/7/bits/stringfwd.h /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/postypes.h /usr/include/c++/7/cwchar \
 /usr/include/wchar.h /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/new /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/move.h /usr/include/c++/7/bits/concept_check.h \
 /usr/include/c++/7/type_traits /usr/include/c++/7/bits/char_traits.h \
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h /usr/include/c++/7/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/7/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++locale.h \
 /usr/include/c++/7/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/7/cctype \
 /usr/include/ctype.h /usr/include/c++/7/bits/ios_base.h \
 /usr/include/c++/7/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/atomic_word.h \
 /usr/include/c++/7/bits/locale_classes.h /usr/include/c++/7/string \
 /usr/include/c++/7/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
 /usr/include/c++/7/ext/new_allocator.h \
 /usr/include/c++/7/bits/ostream_insert.h \
 /usr/include/c++/7/bits/cxxabi_forced.h \
 /usr/include/c++/7/bits/stl_function.h \
 /usr/include/c++/7/backward/binders.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list \
 /usr/include/c++/7/bits/basic_string.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/ext/string_conversions.h /usr/include/c++/7/cstdio \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
 /usr/include/c++/7/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/7/bits/functional_hash.h \
 /usr/include/c++/7/bits/basic_string.tcc \
 /usr/include/c++/7/bits/locale_classes.tcc \
 /usr/include/c++/7/system_error \
 /usr/include/x86_64-linux-gnu/c++/7/bits/error_constants.h \
 /usr/include/c++/7/stdexcept /usr/include/c++/7/streambuf \
 /usr/include/c++/7/bits/streambuf.tcc \
 /usr/include/c++/7/bits/basic_ios.h \
 /usr/include/c++/7/bits/locale_facets.h /usr/include/c++/7/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_base.h \
 /usr/include/c++/7/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_inline.h \
 /usr/include/c++/7/bits/locale_facets.tcc \
 /usr/include/c++/7/bits/basic_ios.tcc \
 /usr/include/c++/7/bits/ostream.tcc /usr/include/c++/7/istream \
 /usr/include/c++/7/bits/istream.tcc Utility.h
Draw2.o: Draw2.cpp /usr/include/stdc-predef.h Draw2.h \
 /usr/include/c++/7/string \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/c++/7/bits/stringfwd.h /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/char_traits.h \
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/postypes.h /usr/include/c++/7/cwchar \
 /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/7/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/7/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++locale.h \
 /usr/include/c++/7/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/7/iosfwd \
 /usr/include/c++/7/cctype /usr/include/ctype.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/c++/7/bits/ostream_insert.h \
 /usr/include/c++/7/bits/cxxabi_forced.h \
 /usr/include/c++/7/bits/stl_function.h \
 /usr/include/c++/7/backward/binders.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list \
 /usr/include/c++/7/bits/basic_string.h \
 /usr/include/c++/7/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/atomic_word.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/ext/string_conversions.h /usr/include/c++/7/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h /usr/include/alloca.h \
 /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/c++/7/cstdio \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
 /usr/include/c++/7/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/7/bits/functional_hash.h \
 /usr/include/c++/7/bits/basic_string.tcc /usr/include/c++/7/iostream \
 /usr/include/c++/7/ostream /usr/include/c++/7/ios \
 /usr/include/c++/7/bits/ios_base.h \
 /usr/include/c++/7/bits/locale_classes.h \
 /usr/include/c++/7/bits/locale_classes.tcc \
 /usr/include/c++/7/system_error \
 /usr/include/x86_64-linux-gnu/c++/7/bits/error_constants.h \
 /usr/include/c++/7/stdexcept /usr/include/c++/7/streambuf \
 /usr/include/c++/7/bits/streambuf.tcc \
 /usr/include/c++/7/bits/basic_ios.h \
 /usr/include/c++/7/bits/locale_facets.h /usr/include/c++/7/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_base.h \
 /usr/include/c++/7/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_inline.h \
 /usr/include/c++/7/bits/locale_facets.tcc \
 /usr/include/c++/7/bits/basic_ios.tcc \
 /usr/include/c++/7/bits/ostream.tcc /usr/include/c++/7/istream \
 /usr/include/c++/7/bits/istream.tcc /usr/include/c++/7/math.h \
 /usr/include/c++/7/cmath /usr/include/math.h \
 /usr/include/x86_64-linux-gnu/bits/math-vector.h \
 /usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val_flt128.h \
 /usr/include/x86_64-linux-gnu/bits/huge_valf.h \
 /usr/include/x86_64-linux-gnu/bits/huge_vall.h \
 /usr/include/x86_64-linux-gnu/bits/inf.h \
 /usr/include/x86_64-linux-gnu/bits/nan.h \
 /usr/include/x86_64-linux-gnu/bits/flt-eval-method.h \
 /usr/include/x86_64-linux-gnu/bits/fp-logb.h \
 /usr/include/x86_64-linux-gnu/bits/fp-fast.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls.h \
 /usr/include/x86_64-linux-gnu/bits/iscanonical.h \
 ../RMITGP.1.5/Function.h /usr/include/c++/7/vector \
 /usr/include/c++/7/bits/stl_construct.h \
 /usr/include/c++/7/bits/stl_uninitialized.h \
 /usr/include/c++/7/bits/stl_vector.h \
 /usr/include/c++/7/bits/stl_bvector.h /usr/include/c++/7/bits/vector.tcc \
 ../RMITGP.1.5/Node.h ../RMITGP.1.5/ReturnData.h ReturnFunc.h \
 ../RMITGP.1.5/ReturnData.h ReturnFloat.h Canvas.h /usr/include/assert.h \
 Utility.h png.h util.h Target.h /usr/include/c++/7/set \
 /usr/include/c++/7/bits/stl_tree.h \
 /usr/include/c++/7/ext/aligned_buffer.h \
 /usr/include/c++/7/bits/stl_set.h /usr/include/c++/7/bits/stl_multiset.h \
 ColorConverter.h /usr/include/c++/7/algorithm /usr/include/c++/7/utility \
 /usr/include/c++/7/bits/stl_relops.h /usr/include/c++/7/bits/stl_algo.h \
 /usr/include/c++/7/bits/algorithmfwd.h \
 /usr/include/c++/7/bits/stl_heap.h /usr/include/c++/7/bits/stl_tempbuf.h \
 /usr/include/c++/7/bits/uniform_int_dist.h /usr/include/c++/7/limits \
 Canny.h Ralph.h BestCanvas.h ConfigReader.h /usr/include/c++/7/fstream \
 /usr/include/c++/7/bits/codecvt.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/basic_file.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++io.h \
 /usr/include/c++/7/bits/fstream.tcc /usr/include/c++/7/sstream \
 /usr/include/c++/7/bits/sstream.tcc
Draw4.o: Draw4.cpp /usr/include/stdc-predef.h Draw4.h \
 /usr/include/c++/7/string \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/c++/7/bits/stringfwd.h /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/char_traits.h \
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/postypes.h /usr/include/c++/7/cwchar \
 /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/7/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/7/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++locale.h \
 /usr/include/c++/7/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/7/iosfwd \
 /usr/include/c++/7/cctype /usr/include/ctype.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/c++/7/bits/ostream_insert.h \
 /usr/include/c++/7/bits/cxxabi_forced.h \
 /usr/include/c++/7/bits/stl_function.h \
 /usr/include/c++/7/backward/binders.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list \
 /usr/include/c++/7/bits/basic_string.h \
 /usr/include/c++/7/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/atomic_word.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/ext/string_conversions.h /usr/include/c++/7/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h /usr/include/alloca.h \
 /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/c++/7/cstdio \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
 /usr/include/c++/7/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/7/bits/functional_hash.h \
 /usr/include/c++/7/bits/basic_string.tcc /usr/include/c++/7/iostream \
 /usr/include/c++/7/ostream /usr/include/c++/7/ios \
 /usr/include/c++/7/bits/ios_base.h \
 /usr/include/c++/7/bits/locale_classes.h \
 /usr/include/c++/7/bits/locale_classes.tcc \
 /usr/include/c++/7/system_error \
 /usr/include/x86_64-linux-gnu/c++/7/bits/error_constants.h \
 /usr/include/c++/7/stdexcept /usr/include/c++/7/streambuf \
 /usr/include/c++/7/bits/streambuf.tcc \
 /usr/include/c++/7/bits/basic_ios.h \
 /usr/include/c++/7/bits/locale_facets.h /usr/include/c++/7/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_base.h \
 /usr/include/c++/7/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_inline.h \
 /usr/include/c++/7/bits/locale_facets.tcc \
 /usr/include/c++/7/bits/basic_ios.tcc \
 /usr/include/c++/7/bits/ostream.tcc /usr/include/c++/7/istream \
 /usr/include/c++/7/bits/istream.tcc /usr/include/c++/7/math.h \
 /usr/include/c++/7/cmath /usr/include/math.h \
 /usr/include/x86_64-linux-gnu/bits/math-vector.h \
 /usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val_flt128.h \
 /usr/include/x86_64-linux-gnu/bits/huge_valf.h \
 /usr/include/x86_64-linux-gnu/bits/huge_vall.h \
 /usr/include/x86_64-linux-gnu/bits/inf.h \
 /usr/include/x86_64-linux-gnu/bits/nan.h \
 /usr/include/x86_64-linux-gnu/bits/flt-eval-method.h \
 /usr/include/x86_64-linux-gnu/bits/fp-logb.h \
 /usr/include/x86_64-linux-gnu/bits/fp-fast.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls.h \
 /usr/include/x86_64-linux-gnu/bits/iscanonical.h \
 ../RMITGP.1.5/Function.h /usr/include/c++/7/vector \
 /usr/include/c++/7/bits/stl_construct.h \
 /usr/include/c++/7/bits/stl_uninitialized.h \
 /usr/include/c++/7/bits/stl_vector.h \
 /usr/include/c++/7/bits/stl_bvector.h /usr/include/c++/7/bits/vector.tcc \
 ../RMITGP.1.5/Node.h ../RMITGP.1.5/ReturnData.h ReturnFunc.h \
 ../RMITGP.1.5/ReturnData.h ReturnFloat.h Canvas.h /usr/include/assert.h \
 Utility.h png.h util.h Target.h /usr/include/c++/7/set \
 /usr/include/c++/7/bits/stl_tree.h \
 /usr/include/c++/7/ext/aligned_buffer.h \
 /usr/include/c++/7/bits/stl_set.h /usr/include/c++/7/bits/stl_multiset.h \
 ColorConverter.h /usr/include/c++/7/algorithm /usr/include/c++/7/utility \
 /usr/include/c++/7/bits/stl_relops.h /usr/include/c++/7/bits/stl_algo.h \
 /usr/include/c++/7/bits/algorithmfwd.h \
 /usr/include/c++/7/bits/stl_heap.h /usr/include/c++/7/bits/stl_tempbuf.h \
 /usr/include/c++/7/bits/uniform_int_dist.h /usr/include/c++/7/limits \
 Canny.h Ralph.h BestCanvas.h ConfigReader.h /usr/include/c++/7/fstream \
 /usr/include/c++/7/bits/codecvt.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/basic_file.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++io.h \
 /usr/include/c++/7/bits/fstream.tcc /usr/include/c++/7/sstream \
 /usr/include/c++/7/bits/sstream.tcc
Draw6.o: Draw6.cpp /usr/include/stdc-predef.h Draw6.h \
 /usr/include/c++/7/string \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/c++/7/bits/stringfwd.h /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/char_traits.h \
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/postypes.h /usr/include/c++/7/cwchar \
 /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/7/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/7/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++locale.h \
 /usr/include/c++/7/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/7/iosfwd \
 /usr/include/c++/7/cctype /usr/include/ctype.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/c++/7/bits/ostream_insert.h \
 /usr/include/c++/7/bits/cxxabi_forced.h \
 /usr/include/c++/7/bits/stl_function.h \
 /usr/include/c++/7/backward/binders.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list \
 /usr/include/c++/7/bits/basic_string.h \
 /usr/include/c++/7/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/atomic_word.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/ext/string_conversions.h /usr/include/c++/7/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h /usr/include/alloca.h \
 /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/c++/7/cstdio \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
 /usr/include/c++/7/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/7/bits/functional_hash.h \
 /usr/include/c++/7/bits/basic_string.tcc /usr/include/c++/7/iostream \
 /usr/include/c++/7/ostream /usr/include/c++/7/ios \
 /usr/include/c++/7/bits/ios_base.h \
 /usr/include/c++/7/bits/locale_classes.h \
 /usr/include/c++/7/bits/locale_classes.tcc \
 /usr/include/c++/7/system_error \
 /usr/include/x86_64-linux-gnu/c++/7/bits/error_constants.h \
 /usr/include/c++/7/stdexcept /usr/include/c++/7/streambuf \
 /usr/include/c++/7/bits/streambuf.tcc \
 /usr/include/c++/7/bits/basic_ios.h \
 /usr/include/c++/7/bits/locale_facets.h /usr/include/c++/7/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_base.h \
 /usr/include/c++/7/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_inline.h \
 /usr/include/c++/7/bits/locale_facets.tcc \
 /usr/include/c++/7/bits/basic_ios.tcc \
 /usr/include/c++/7/bits/ostream.tcc /usr/include/c++/7/istream \
 /usr/include/c++/7/bits/istream.tcc /usr/include/c++/7/math.h \
 /usr/include/c++/7/cmath /usr/include/math.h \
 /usr/include/x86_64-linux-gnu/bits/math-vector.h \
 /usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val_flt128.h \
 /usr/include/x86_64-linux-gnu/bits/huge_valf.h \
 /usr/include/x86_64-linux-gnu/bits/huge_vall.h \
 /usr/include/x86_64-linux-gnu/bits/inf.h \
 /usr/include/x86_64-linux-gnu/bits/nan.h \
 /usr/include/x86_64-linux-gnu/bits/flt-eval-method.h \
 /usr/include/x86_64-linux-gnu/bits/fp-logb.h \
 /usr/include/x86_64-linux-gnu/bits/fp-fast.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls.h \
 /usr/include/x86_64-linux-gnu/bits/iscanonical.h \
 ../RMITGP.1.5/Function.h /usr/include/c++/7/vector \
 /usr/include/c++/7/bits/stl_construct.h \
 /usr/include/c++/7/bits/stl_uninitialized.h \
 /usr/include/c++/7/bits/stl_vector.h \
 /usr/include/c++/7/bits/stl_bvector.h /usr/include/c++/7/bits/vector.tcc \
 ../RMITGP.1.5/Node.h ../RMITGP.1.5/ReturnData.h ReturnFunc.h \
 ../RMITGP.1.5/ReturnData.h ReturnFloat.h BezierPathCanvas.h Canvas.h \
 /usr/include/assert.h Utility.h png.h util.h Target.h \
 /usr/include/c++/7/set /usr/include/c++/7/bits/stl_tree.h \
 /usr/include/c++/7/ext/aligned_buffer.h \
 /usr/include/c++/7/bits/stl_set.h /usr/include/c++/7/bits/stl_multiset.h \
 ColorConverter.h /usr/include/c++/7/algorithm /usr/include/c++/7/utility \
 /usr/include/c++/7/bits/stl_relops.h /usr/include/c++/7/bits/stl_algo.h \
 /usr/include/c++/7/bits/algorithmfwd.h \
 /usr/include/c++/7/bits/stl_heap.h /usr/include/c++/7/bits/stl_tempbuf.h \
 /usr/include/c++/7/bits/uniform_int_dist.h /usr/include/c++/7/limits \
 Canny.h Ralph.h BestCanvas.h ConfigReader.h /usr/include/c++/7/fstream \
 /usr/include/c++/7/bits/codecvt.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/basic_file.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++io.h \
 /usr/include/c++/7/bits/fstream.tcc /usr/include/c++/7/sstream \
 /usr/include/c++/7/bits/sstream.tcc Decal.h Palette.h Pixel.h
DrawColorTriangle.o: DrawColorTriangle.cpp /usr/include/stdc-predef.h \
 DrawColorTriangle.h /usr/include/c++/7/string \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/c++/7/bits/stringfwd.h /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/char_traits.h \
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/postypes.h /usr/include/c++/7/cwchar \
 /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/7/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/7/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++locale.h \
 /usr/include/c++/7/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/7/iosfwd \
 /usr/include/c++/7/cctype /usr/include/ctype.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/c++/7/bits/ostream_insert.h \
 /usr/include/c++/7/bits/cxxabi_forced.h \
 /usr/include/c++/7/bits/stl_function.h \
 /usr/include/c++/7/backward/binders.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list \
 /usr/include/c++/7/bits/basic_string.h \
 /usr/include/c++/7/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/atomic_word.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/ext/string_conversions.h /usr/include/c++/7/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h /usr/include/alloca.h \
 /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/c++/7/cstdio \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
 /usr/include/c++/7/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/7/bits/functional_hash.h \
 /usr/include/c++/7/bits/basic_string.tcc /usr/include/c++/7/iostream \
 /usr/include/c++/7/ostream /usr/include/c++/7/ios \
 /usr/include/c++/7/bits/ios_base.h \
 /usr/include/c++/7/bits/locale_classes.h \
 /usr/include/c++/7/bits/locale_classes.tcc \
 /usr/include/c++/7/system_error \
 /usr/include/x86_64-linux-gnu/c++/7/bits/error_constants.h \
 /usr/include/c++/7/stdexcept /usr/include/c++/7/streambuf \
 /usr/include/c++/7/bits/streambuf.tcc \
 /usr/include/c++/7/bits/basic_ios.h \
 /usr/include/c++/7/bits/locale_facets.h /usr/include/c++/7/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_base.h \
 /usr/include/c++/7/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_inline.h \
 /usr/include/c++/7/bits/locale_facets.tcc \
 /usr/include/c++/7/bits/basic_ios.tcc \
 /usr/include/c++/7/bits/ostream.tcc /usr/include/c++/7/istream \
 /usr/include/c++/7/bits/istream.tcc /usr/include/c++/7/math.h \
 /usr/include/c++/7/cmath /usr/include/math.h \
 /usr/include/x86_64-linux-gnu/bits/math-vector.h \
 /usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val_flt128.h \
 /usr/include/x86_64-linux-gnu/bits/huge_valf.h \
 /usr/include/x86_64-linux-gnu/bits/huge_vall.h \
 /usr/include/x86_64-linux-gnu/bits/inf.h \
 /usr/include/x86_64-linux-gnu/bits/nan.h \
 /usr/include/x86_64-linux-gnu/bits/flt-eval-method.h \
 /usr/include/x86_64-linux-gnu/bits/fp-logb.h \
 /usr/include/x86_64-linux-gnu/bits/fp-fast.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls.h \
 /usr/include/x86_64-linux-gnu/bits/iscanonical.h \
 ../RMITGP.1.5/Function.h /usr/include/c++/7/vector \
 /usr/include/c++/7/bits/stl_construct.h \
 /usr/include/c++/7/bits/stl_uninitialized.h \
 /usr/include/c++/7/bits/stl_vector.h \
 /usr/include/c++/7/bits/stl_bvector.h /usr/include/c++/7/bits/vector.tcc \
 ../RMITGP.1.5/Node.h ../RMITGP.1.5/ReturnData.h ReturnFunc.h \
 ../RMITGP.1.5/ReturnData.h ReturnFloat.h BezierPathCanvas.h Canvas.h \
 /usr/include/assert.h Utility.h png.h util.h Target.h \
 /usr/include/c++/7/set /usr/include/c++/7/bits/stl_tree.h \
 /usr/include/c++/7/ext/aligned_buffer.h \
 /usr/include/c++/7/bits/stl_set.h /usr/include/c++/7/bits/stl_multiset.h \
 ColorConverter.h /usr/include/c++/7/algorithm /usr/include/c++/7/utility \
 /usr/include/c++/7/bits/stl_relops.h /usr/include/c++/7/bits/stl_algo.h \
 /usr/include/c++/7/bits/algorithmfwd.h \
 /usr/include/c++/7/bits/stl_heap.h /usr/include/c++/7/bits/stl_tempbuf.h \
 /usr/include/c++/7/bits/uniform_int_dist.h /usr/include/c++/7/limits \
 Canny.h Ralph.h BestCanvas.h ConfigReader.h /usr/include/c++/7/fstream \
 /usr/include/c++/7/bits/codecvt.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/basic_file.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++io.h \
 /usr/include/c++/7/bits/fstream.tcc /usr/include/c++/7/sstream \
 /usr/include/c++/7/bits/sstream.tcc Decal.h Palette.h Pixel.h
DrawGrayTriangle.o: DrawGrayTriangle.cpp /usr/include/stdc-predef.h \
 DrawGrayTriangle.h /usr/include/c++/7/string \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/c++/7/bits/stringfwd.h /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/char_traits.h \
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/postypes.h /usr/include/c++/7/cwchar \
 /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/7/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/7/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++locale.h \
 /usr/include/c++/7/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/7/iosfwd \
 /usr/include/c++/7/cctype /usr/include/ctype.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/c++/7/bits/ostream_insert.h \
 /usr/include/c++/7/bits/cxxabi_forced.h \
 /usr/include/c++/7/bits/stl_function.h \
 /usr/include/c++/7/backward/binders.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list \
 /usr/include/c++/7/bits/basic_string.h \
 /usr/include/c++/7/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/atomic_word.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/ext/string_conversions.h /usr/include/c++/7/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h /usr/include/alloca.h \
 /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/c++/7/cstdio \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
 /usr/include/c++/7/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/7/bits/functional_hash.h \
 /usr/include/c++/7/bits/basic_string.tcc /usr/include/c++/7/iostream \
 /usr/include/c++/7/ostream /usr/include/c++/7/ios \
 /usr/include/c++/7/bits/ios_base.h \
 /usr/include/c++/7/bits/locale_classes.h \
 /usr/include/c++/7/bits/locale_classes.tcc \
 /usr/include/c++/7/system_error \
 /usr/include/x86_64-linux-gnu/c++/7/bits/error_constants.h \
 /usr/include/c++/7/stdexcept /usr/include/c++/7/streambuf \
 /usr/include/c++/7/bits/streambuf.tcc \
 /usr/include/c++/7/bits/basic_ios.h \
 /usr/include/c++/7/bits/locale_facets.h /usr/include/c++/7/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_base.h \
 /usr/include/c++/7/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_inline.h \
 /usr/include/c++/7/bits/locale_facets.tcc \
 /usr/include/c++/7/bits/basic_ios.tcc \
 /usr/include/c++/7/bits/ostream.tcc /usr/include/c++/7/istream \
 /usr/include/c++/7/bits/istream.tcc /usr/include/c++/7/math.h \
 /usr/include/c++/7/cmath /usr/include/math.h \
 /usr/include/x86_64-linux-gnu/bits/math-vector.h \
 /usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val_flt128.h \
 /usr/include/x86_64-linux-gnu/bits/huge_valf.h \
 /usr/include/x86_64-linux-gnu/bits/huge_vall.h \
 /usr/include/x86_64-linux-gnu/bits/inf.h \
 /usr/include/x86_64-linux-gnu/bits/nan.h \
 /usr/include/x86_64-linux-gnu/bits/flt-eval-method.h \
 /usr/include/x86_64-linux-gnu/bits/fp-logb.h \
 /usr/include/x86_64-linux-gnu/bits/fp-fast.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls.h \
 /usr/include/x86_64-linux-gnu/bits/iscanonical.h \
 ../RMITGP.1.5/Function.h /usr/include/c++/7/vector \
 /usr/include/c++/7/bits/stl_construct.h \
 /usr/include/c++/7/bits/stl_uninitialized.h \
 /usr/include/c++/7/bits/stl_vector.h \
 /usr/include/c++/7/bits/stl_bvector.h /usr/include/c++/7/bits/vector.tcc \
 ../RMITGP.1.5/Node.h ../RMITGP.1.5/ReturnData.h ReturnFunc.h \
 ../RMITGP.1.5/ReturnData.h ReturnFloat.h BezierPathCanvas.h Canvas.h \
 /usr/include/assert.h Utility.h png.h util.h Target.h \
 /usr/include/c++/7/set /usr/include/c++/7/bits/stl_tree.h \
 /usr/include/c++/7/ext/aligned_buffer.h \
 /usr/include/c++/7/bits/stl_set.h /usr/include/c++/7/bits/stl_multiset.h \
 ColorConverter.h /usr/include/c++/7/algorithm /usr/include/c++/7/utility \
 /usr/include/c++/7/bits/stl_relops.h /usr/include/c++/7/bits/stl_algo.h \
 /usr/include/c++/7/bits/algorithmfwd.h \
 /usr/include/c++/7/bits/stl_heap.h /usr/include/c++/7/bits/stl_tempbuf.h \
 /usr/include/c++/7/bits/uniform_int_dist.h /usr/include/c++/7/limits \
 Canny.h Ralph.h BestCanvas.h ConfigReader.h /usr/include/c++/7/fstream \
 /usr/include/c++/7/bits/codecvt.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/basic_file.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++io.h \
 /usr/include/c++/7/bits/fstream.tcc /usr/include/c++/7/sstream \
 /usr/include/c++/7/bits/sstream.tcc Decal.h Palette.h Pixel.h
Prog2.o: Prog2.cpp /usr/include/stdc-predef.h Prog2.h \
 /usr/include/c++/7/string \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/c++/7/bits/stringfwd.h /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/char_traits.h \
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/postypes.h /usr/include/c++/7/cwchar \
 /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/7/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/7/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++locale.h \
 /usr/include/c++/7/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/7/iosfwd \
 /usr/include/c++/7/cctype /usr/include/ctype.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/c++/7/bits/ostream_insert.h \
 /usr/include/c++/7/bits/cxxabi_forced.h \
 /usr/include/c++/7/bits/stl_function.h \
 /usr/include/c++/7/backward/binders.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list \
 /usr/include/c++/7/bits/basic_string.h \
 /usr/include/c++/7/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/atomic_word.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/ext/string_conversions.h /usr/include/c++/7/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h /usr/include/alloca.h \
 /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/c++/7/cstdio \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
 /usr/include/c++/7/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/7/bits/functional_hash.h \
 /usr/include/c++/7/bits/basic_string.tcc /usr/include/c++/7/iostream \
 /usr/include/c++/7/ostream /usr/include/c++/7/ios \
 /usr/include/c++/7/bits/ios_base.h \
 /usr/include/c++/7/bits/locale_classes.h \
 /usr/include/c++/7/bits/locale_classes.tcc \
 /usr/include/c++/7/system_error \
 /usr/include/x86_64-linux-gnu/c++/7/bits/error_constants.h \
 /usr/include/c++/7/stdexcept /usr/include/c++/7/streambuf \
 /usr/include/c++/7/bits/streambuf.tcc \
 /usr/include/c++/7/bits/basic_ios.h \
 /usr/include/c++/7/bits/locale_facets.h /usr/include/c++/7/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_base.h \
 /usr/include/c++/7/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_inline.h \
 /usr/include/c++/7/bits/locale_facets.tcc \
 /usr/include/c++/7/bits/basic_ios.tcc \
 /usr/include/c++/7/bits/ostream.tcc /usr/include/c++/7/istream \
 /usr/include/c++/7/bits/istream.tcc /usr/include/c++/7/math.h \
 /usr/include/c++/7/cmath /usr/include/math.h \
 /usr/include/x86_64-linux-gnu/bits/math-vector.h \
 /usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val_flt128.h \
 /usr/include/x86_64-linux-gnu/bits/huge_valf.h \
 /usr/include/x86_64-linux-gnu/bits/huge_vall.h \
 /usr/include/x86_64-linux-gnu/bits/inf.h \
 /usr/include/x86_64-linux-gnu/bits/nan.h \
 /usr/include/x86_64-linux-gnu/bits/flt-eval-method.h \
 /usr/include/x86_64-linux-gnu/bits/fp-logb.h \
 /usr/include/x86_64-linux-gnu/bits/fp-fast.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls.h \
 /usr/include/x86_64-linux-gnu/bits/iscanonical.h \
 ../RMITGP.1.5/Function.h /usr/include/c++/7/vector \
 /usr/include/c++/7/bits/stl_construct.h \
 /usr/include/c++/7/bits/stl_uninitialized.h \
 /usr/include/c++/7/bits/stl_vector.h \
 /usr/include/c++/7/bits/stl_bvector.h /usr/include/c++/7/bits/vector.tcc \
 ../RMITGP.1.5/Node.h ../RMITGP.1.5/ReturnData.h ReturnFunc.h \
 ../RMITGP.1.5/ReturnData.h ../RMITGP.1.5/GPConfig.h \
 ../RMITGP.1.5/Random.h ../RMITGP.1.5/Crossover.h \
 ../RMITGP.1.5/GeneticProgram.h ../RMITGP.1.5/Mutation.h \
 ../RMITGP.1.5/Selection.h ../RMITGP.1.5/Fitness.h \
 ../RMITGP.1.5/NodeSet.h ../RMITGP.1.5/Function.h \
 ../RMITGP.1.5/Terminal.h
Prog3.o: Prog3.cpp /usr/include/stdc-predef.h Prog3.h \
 /usr/include/c++/7/string \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/c++/7/bits/stringfwd.h /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/char_traits.h \
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/postypes.h /usr/include/c++/7/cwchar \
 /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/7/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/7/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++locale.h \
 /usr/include/c++/7/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/7/iosfwd \
 /usr/include/c++/7/cctype /usr/include/ctype.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/c++/7/bits/ostream_insert.h \
 /usr/include/c++/7/bits/cxxabi_forced.h \
 /usr/include/c++/7/bits/stl_function.h \
 /usr/include/c++/7/backward/binders.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list \
 /usr/include/c++/7/bits/basic_string.h \
 /usr/include/c++/7/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/atomic_word.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/ext/string_conversions.h /usr/include/c++/7/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h /usr/include/alloca.h \
 /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/c++/7/cstdio \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
 /usr/include/c++/7/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/7/bits/functional_hash.h \
 /usr/include/c++/7/bits/basic_string.tcc ../RMITGP.1.5/Function.h \
 /usr/include/c++/7/vector /usr/include/c++/7/bits/stl_construct.h \
 /usr/include/c++/7/bits/stl_uninitialized.h \
 /usr/include/c++/7/bits/stl_vector.h \
 /usr/include/c++/7/bits/stl_bvector.h /usr/include/c++/7/bits/vector.tcc \
 ../RMITGP.1.5/Node.h ../RMITGP.1.5/ReturnData.h ReturnFunc.h \
 ../RMITGP.1.5/ReturnData.h ReturnRoot.h ../RMITGP.1.5/GPConfig.h \
 ../RMITGP.1.5/Random.h ../RMITGP.1.5/Crossover.h \
 ../RMITGP.1.5/GeneticProgram.h ../RMITGP.1.5/Mutation.h \
 ../RMITGP.1.5/Selection.h ../RMITGP.1.5/Fitness.h \
 ../RMITGP.1.5/NodeSet.h ../RMITGP.1.5/Function.h \
 ../RMITGP.1.5/Terminal.h
Prog4.o: Prog4.cpp /usr/include/stdc-predef.h Prog4.h \
 /usr/include/c++/7/string \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/c++/7/bits/stringfwd.h /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/char_traits.h \
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/postypes.h /usr/include/c++/7/cwchar \
 /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/7/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/7/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++locale.h \
 /usr/include/c++/7/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/7/iosfwd \
 /usr/include/c++/7/cctype /usr/include/ctype.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/c++/7/bits/ostream_insert.h \
 /usr/include/c++/7/bits/cxxabi_forced.h \
 /usr/include/c++/7/bits/stl_function.h \
 /usr/include/c++/7/backward/binders.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list \
 /usr/include/c++/7/bits/basic_string.h \
 /usr/include/c++/7/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/atomic_word.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/ext/string_conversions.h /usr/include/c++/7/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h /usr/include/alloca.h \
 /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/c++/7/cstdio \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
 /usr/include/c++/7/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/7/bits/functional_hash.h \
 /usr/include/c++/7/bits/basic_string.tcc ../RMITGP.1.5/Function.h \
 /usr/include/c++/7/vector /usr/include/c++/7/bits/stl_construct.h \
 /usr/include/c++/7/bits/stl_uninitialized.h \
 /usr/include/c++/7/bits/stl_vector.h \
 /usr/include/c++/7/bits/stl_bvector.h /usr/include/c++/7/bits/vector.tcc \
 ../RMITGP.1.5/Node.h ../RMITGP.1.5/ReturnData.h ReturnFunc.h \
 ../RMITGP.1.5/ReturnData.h ReturnRoot.h ../RMITGP.1.5/GPConfig.h \
 ../RMITGP.1.5/Random.h ../RMITGP.1.5/Crossover.h \
 ../RMITGP.1.5/GeneticProgram.h ../RMITGP.1.5/Mutation.h \
 ../RMITGP.1.5/Selection.h ../RMITGP.1.5/Fitness.h \
 ../RMITGP.1.5/NodeSet.h ../RMITGP.1.5/Function.h \
 ../RMITGP.1.5/Terminal.h
Palette.o: Palette.cpp /usr/include/stdc-predef.h Palette.h \
 /usr/include/c++/7/cstdlib \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/stdlib.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/c++/7/vector \
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/stl_construct.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/bits/stl_uninitialized.h \
 /usr/include/c++/7/bits/stl_vector.h /usr/include/c++/7/initializer_list \
 /usr/include/c++/7/bits/stl_bvector.h \
 /usr/include/c++/7/bits/functional_hash.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/bits/vector.tcc /usr/include/c++/7/set \
 /usr/include/c++/7/bits/stl_tree.h \
 /usr/include/c++/7/bits/stl_function.h \
 /usr/include/c++/7/backward/binders.h \
 /usr/include/c++/7/ext/aligned_buffer.h \
 /usr/include/c++/7/bits/stl_set.h /usr/include/c++/7/bits/stl_multiset.h \
 /usr/include/c++/7/algorithm /usr/include/c++/7/utility \
 /usr/include/c++/7/bits/stl_relops.h /usr/include/c++/7/bits/stl_algo.h \
 /usr/include/c++/7/bits/algorithmfwd.h \
 /usr/include/c++/7/bits/stl_heap.h /usr/include/c++/7/bits/stl_tempbuf.h \
 /usr/include/c++/7/bits/uniform_int_dist.h /usr/include/c++/7/limits \
 /usr/include/c++/7/fstream /usr/include/c++/7/istream \
 /usr/include/c++/7/ios /usr/include/c++/7/iosfwd \
 /usr/include/c++/7/bits/stringfwd.h /usr/include/c++/7/bits/postypes.h \
 /usr/include/c++/7/cwchar /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/c++/7/bits/char_traits.h /usr/include/c++/7/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/7/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++locale.h \
 /usr/include/c++/7/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/7/cctype \
 /usr/include/ctype.h /usr/include/c++/7/bits/ios_base.h \
 /usr/include/c++/7/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/atomic_word.h \
 /usr/include/c++/7/bits/locale_classes.h /usr/include/c++/7/string \
 /usr/include/c++/7/bits/ostream_insert.h \
 /usr/include/c++/7/bits/cxxabi_forced.h \
 /usr/include/c++/7/bits/basic_string.h \
 /usr/include/c++/7/ext/string_conversions.h /usr/include/c++/7/cstdio \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
 /usr/include/c++/7/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/7/bits/basic_string.tcc \
 /usr/include/c++/7/bits/locale_classes.tcc \
 /usr/include/c++/7/system_error \
 /usr/include/x86_64-linux-gnu/c++/7/bits/error_constants.h \
 /usr/include/c++/7/stdexcept /usr/include/c++/7/streambuf \
 /usr/include/c++/7/bits/streambuf.tcc \
 /usr/include/c++/7/bits/basic_ios.h \
 /usr/include/c++/7/bits/locale_facets.h /usr/include/c++/7/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_base.h \
 /usr/include/c++/7/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_inline.h \
 /usr/include/c++/7/bits/locale_facets.tcc \
 /usr/include/c++/7/bits/basic_ios.tcc /usr/include/c++/7/ostream \
 /usr/include/c++/7/bits/ostream.tcc /usr/include/c++/7/bits/istream.tcc \
 /usr/include/c++/7/bits/codecvt.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/basic_file.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++io.h \
 /usr/include/c++/7/bits/fstream.tcc /usr/include/c++/7/sstream \
 /usr/include/c++/7/bits/sstream.tcc /usr/include/c++/7/iostream \
 Utility.h Target.h /usr/include/c++/7/math.h /usr/include/c++/7/cmath \
 /usr/include/math.h /usr/include/x86_64-linux-gnu/bits/math-vector.h \
 /usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val_flt128.h \
 /usr/include/x86_64-linux-gnu/bits/huge_valf.h \
 /usr/include/x86_64-linux-gnu/bits/huge_vall.h \
 /usr/include/x86_64-linux-gnu/bits/inf.h \
 /usr/include/x86_64-linux-gnu/bits/nan.h \
 /usr/include/x86_64-linux-gnu/bits/flt-eval-method.h \
 /usr/include/x86_64-linux-gnu/bits/fp-logb.h \
 /usr/include/x86_64-linux-gnu/bits/fp-fast.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls.h \
 /usr/include/x86_64-linux-gnu/bits/iscanonical.h png.h util.h \
 ColorConverter.h Canny.h /usr/include/assert.h Ralph.h Pixel.h
Pixel.o: Pixel.cpp /usr/include/stdc-predef.h Pixel.h \
 /usr/include/c++/7/iostream \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/c++/7/ostream /usr/include/c++/7/ios \
 /usr/include/c++/7/iosfwd /usr/include/c++/7/bits/stringfwd.h \
 /usr/include/c++/7/bits/memoryfwd.h /usr/include/c++/7/bits/postypes.h \
 /usr/include/c++/7/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/new /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/move.h /usr/include/c++/7/bits/concept_check.h \
 /usr/include/c++/7/type_traits /usr/include/c++/7/bits/char_traits.h \
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h /usr/include/c++/7/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/7/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++locale.h \
 /usr/include/c++/7/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/7/cctype \
 /usr/include/ctype.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/c++/7/bits/ios_base.h /usr/include/c++/7/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/atomic_word.h \
 /usr/include/c++/7/bits/locale_classes.h /usr/include/c++/7/string \
 /usr/include/c++/7/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
 /usr/include/c++/7/ext/new_allocator.h \
 /usr/include/c++/7/bits/ostream_insert.h \
 /usr/include/c++/7/bits/cxxabi_forced.h \
 /usr/include/c++/7/bits/stl_function.h \
 /usr/include/c++/7/backward/binders.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list \
 /usr/include/c++/7/bits/basic_string.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/ext/string_conversions.h /usr/include/c++/7/cstdlib \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h /usr/include/alloca.h \
 /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/c++/7/cstdio \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
 /usr/include/c++/7/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/7/bits/functional_hash.h \
 /usr/include/c++/7/bits/basic_string.tcc \
 /usr/include/c++/7/bits/locale_classes.tcc \
 /usr/include/c++/7/system_error \
 /usr/include/x86_64-linux-gnu/c++/7/bits/error_constants.h \
 /usr/include/c++/7/stdexcept /usr/include/c++/7/streambuf \
 /usr/include/c++/7/bits/streambuf.tcc \
 /usr/include/c++/7/bits/basic_ios.h \
 /usr/include/c++/7/bits/locale_facets.h /usr/include/c++/7/cwctype \
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_base.h \
 /usr/include/c++/7/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_inline.h \
 /usr/include/c++/7/bits/locale_facets.tcc \
 /usr/include/c++/7/bits/basic_ios.tcc \
 /usr/include/c++/7/bits/ostream.tcc /usr/include/c++/7/istream \
 /usr/include/c++/7/bits/istream.tcc /usr/include/c++/7/vector \
 /usr/include/c++/7/bits/stl_construct.h \
 /usr/include/c++/7/bits/stl_uninitialized.h \
 /usr/include/c++/7/bits/stl_vector.h \
 /usr/include/c++/7/bits/stl_bvector.h /usr/include/c++/7/bits/vector.tcc \
 Utility.h ColorConverter.h /usr/include/c++/7/algorithm \
 /usr/include/c++/7/utility /usr/include/c++/7/bits/stl_relops.h \
 /usr/include/c++/7/bits/stl_algo.h \
 /usr/include/c++/7/bits/algorithmfwd.h \
 /usr/include/c++/7/bits/stl_heap.h /usr/include/c++/7/bits/stl_tempbuf.h \
 /usr/include/c++/7/bits/uniform_int_dist.h /usr/include/c++/7/limits \
 /usr/include/c++/7/math.h /usr/include/c++/7/cmath /usr/include/math.h \
 /usr/include/x86_64-linux-gnu/bits/math-vector.h \
 /usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val.h \
 /usr/include/x86_64-linux-gnu/bits/huge_val_flt128.h \
 /usr/include/x86_64-linux-gnu/bits/huge_valf.h \
 /usr/include/x86_64-linux-gnu/bits/huge_vall.h \
 /usr/include/x86_64-linux-gnu/bits/inf.h \
 /usr/include/x86_64-linux-gnu/bits/nan.h \
 /usr/include/x86_64-linux-gnu/bits/flt-eval-method.h \
 /usr/include/x86_64-linux-gnu/bits/fp-logb.h \
 /usr/include/x86_64-linux-gnu/bits/fp-fast.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h \
 /usr/include/x86_64-linux-gnu/bits/mathcalls.h \
 /usr/include/x86_64-linux-gnu/bits/iscanonical.h
