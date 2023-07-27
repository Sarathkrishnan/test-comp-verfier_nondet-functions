#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void __attribute__((constructor)) start();
void __attribute__((destructor)) end();

long fileSize = 0;
int i = 0;
char *buffer;

void start()
{
    
        fseek(stdin, 0, SEEK_END);
        fileSize = ftell(stdin);
        fseek(stdin, 0, SEEK_SET);
        buffer = (char *)malloc(fileSize + 1);
        fread(buffer, 1, fileSize, stdin);
}

void end()
{
    free(buffer);
}

int __VERIFIER_nondet_int()
{
    // printf("int");
    int res = 0;
    int k = 0;
    while (k < 4)
    {
        // printf("%ld\t%d\t%c", fileSize, i, buffer[i]);
        res = res | buffer[i] << k * 8;
        k++;
        i = (i + 1) % fileSize;
    }
    return res;
}

char __VERIFIER_nondet_char()
{
    char res = '\0';
    int k = 0;
    while (k < 1)
    {
        res = res | buffer[i] << k * 8;
        k++;
        i = (i + 1) % fileSize;
    }
    return (char)res;
}

unsigned char __VERIFIER_nondet_uchar()
{
    unsigned char res = 0;
    int k = 0;
    while (k < 1)
    {
        res = res | buffer[i] << k * 8;
        k++;
        i = (i + 1) % fileSize;
    }
    return res;
}

short __VERIFIER_nondet_short()
{
    short res = 0;
    int k = 0;
    while (k < 2)
    {
        res = res | buffer[i] << k * 8;
        k++;
        i = (i + 1) % fileSize;
    }
    return res;
}

unsigned short __VERIFIER_nondet_ushort()
{
    unsigned short res = 0;
    int k = 0;
    while (k < 2)
    {
        res = res | buffer[i] << k * 8;
        k++;
        i = (i + 1) % fileSize;
    }
    return res;
}

unsigned int __VERIFIER_nondet_uint()
{
    unsigned int res = 0;
    int k = 0;
    while (k < 4)
    {
        res = res | buffer[i] << k * 8;
        k++;
        i = (i + 1) % fileSize;
    }
    return res;
}

long int __VERIFIER_nondet_long()
{
    long res = 0;
    int k = 0;
    while (k < 8)
    {
        res = res | buffer[i] << k * 8;
        k++;
        i = (i + 1) % fileSize;
    }
    return res;
}

unsigned long __VERIFIER_nondet_ulong()
{
    unsigned long res = 0;
    int k = 0;
    while (k < 8)
    {
        res = res | buffer[i] << k * 8;
        k++;
        i = (i + 1) % fileSize;
    }
    return res;
}

long long __VERIFIER_nondet_longlong()
{
    long long res = 0;
    int k = 0;
    while (k < 8)
    {
        res = res | buffer[i] << k * 8;
        k++;
        i = (i + 1) % fileSize;
    }
    return res;
}

unsigned long long __VERIFIER_nondet_ulonglong()
{
    unsigned long long res = 0;
    int k = 0;
    while (k < 8)
    {
        res = res | buffer[i] << k * 8;
        k++;
        i = (i + 1) % fileSize;
    }
    return res;
}

float __VERIFIER_nondet_float()
{
    unsigned long res = 0.0;
    int k = 0;
    while (k < 4)
    {
        res = res | buffer[i] << k * 8;
        k++;
        i = (i + 1) % fileSize;
    }
    return res;
}

double __VERIFIER_nondet_double()
{
    unsigned long res = 0.0;
    int k = 0;
    while (k < 8)
    {
        res = res | buffer[i] << k * 8;
        k++;
        i = (i + 1) % fileSize;
    }
    return res;
}

bool __VERIFIER_nondet_bool()
{
    bool res = 0;
    int k = 0;
    while (k < 1)
    {
        res = res | buffer[i] << k * 8;
        k++;
        i = (i + 1) % fileSize;
    }
    return res;
}
