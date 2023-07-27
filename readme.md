[verifier_nondet.c](verifier_nondet.c) : This code contains **__VERIFIER_nondet_** function definisions.

[Directory](bench_mark_progms/) : Contains some benchamarking program from [test-comp](https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks/-/tree/testcomp23?ref_type=tags)


### Commands
```
# instrumentation command
afl-clang-lto verifier_nondet.c benchmark_program.c -o main.o

# fuzzing command
afl-fuzz -i input -o output ./main.o
```