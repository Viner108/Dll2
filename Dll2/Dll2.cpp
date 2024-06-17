﻿#include "pch.h"  // Подключаем предкомпилированный заголовок, если используется
#include <jni.h>
#include <iostream>
#include "Source.cpp"

extern "C" {
    __declspec(dllexport) void JNICALL Java_org_example_Main_printHello(JNIEnv* env, jobject obj) {
        std::cout << "Hello, World from C++ DLL!" << std::endl;
        DoIt d;
        std::cout << d.do_something(1,2);
    }
}
