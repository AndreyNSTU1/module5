#include <stdio.h>
#include <dlfcn.h>
#include <stdlib.h>

int main(){
void* ext_lib;
int (*powerfunc)(int a, int b);
ext_lib = dlopen("/home/andrey1/module_5/task1/libfuncdyn.so",RTLD_LAZY);
if (!ext_lib){
fprintf(stderr, "dlopen() error: %s\n", dlerror());
return 1;
}

int ch;
int a=5; 
int b= 10;


powerfunc = dlsym(ext_lib, "multiply");
printf("Multiplication result: %d\n", (*powerfunc)(a, b));
dlclose(ext_lib);
exit(EXIT_SUCCESS);

powerfunc = dlsym(ext_lib, "division");
printf("Division result: %d\n", (*powerfunc)(a, b));
dlclose(ext_lib);
exit(EXIT_SUCCESS);

}
