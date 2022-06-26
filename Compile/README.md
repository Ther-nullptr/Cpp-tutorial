# 编译、链接、静态库、动态库

## 目录

[TOC]

## 前言

在程设课上，我们运行一个C++程序的步骤通常是这样的：打开Visual Studio 2008，在文件中写好程序，然后点击“开始调试”或者“开始执行（不调试）”，一个黑色的方框就会弹出来。

实际上，从C++源代码文件到可执行文件的过程是十分复杂的，Visual Studio等现代化的IDE（Integrated Development Environment，集成开发环境）掩盖了程序构建的复杂流程。本节我们就以linux平台上的C++程序为例，简略介绍C++工程中的一些概念。

为了获得更好的实验体验，建议大家使用linux操作系统（虚拟机或WSL）来运行本节的程序。

本讲需要使用到的工具有：`gcc`，`g++`。可以通过以下方式安装：

```bash
$ sudo apt-get install gcc g++
```

## 从.cpp到.exe —— C/C++程序的构建过程

C/C++程序生成一个可执行文件的过程可以分为4个步骤：**预处理（Preprocessing）**、**编译（Compiling）**、**汇编（Assembly）**和**链接（Linking）**。之后我们将通过演示实例介绍每一步发生的故事。


### 编译工具

针对不同的应用场景和平台，各大厂家设计了不同的C++编译工具。

* MSVC（Microsoft Visual C++）：MSVC是微软公司开发的C++开发工具，我们程设课上使用的Visual Studio就内置了MSVC。

* GCC（GNU Compiler Collection）：GCC是由GNU（GNU's Not Unix）开发的一套编译工具，支持C、C++、Fortran、Go等一系列语言。本教程中我们使用的编译工具就是GCC。
  
  GCC提供给用户的前端程序为`gcc`（针对C）和`g++`（针对C++）。它们的区别详见[gcc vs g++](https://stackoverflow.com/questions/172587/what-is-the-difference-between-g-and-gcc)。
* 此外还有Clang、NVCC等编译工具。不同的编译工具对C++的支持不尽然相同，此处不再赘述。

### 1 预处理

C++程序在预处理阶段会执行以下操作：宏的替换、头文件的插入、删除条件编译中不满足条件的部分。

```bash
$ g++ –E invsqrt.cpp –o invsqrt.i
```

### 2 编译

C++程序在编译阶段会将C++文件转换为汇编文件。

```bash
# from .i file
$ g++ –S invsqrt.i –o invsqrt.s
# from .cpp file
$ g++ –S invsqrt.cpp –o invsqrt.s
```

### 3 汇编
汇编语言文件经过汇编，生成目标文件.o文件（二进制文件，机器码），每一个源文件都对应一个目标文件。

```bash
# from .s file
$ g++ –c invsqrt.s –o invsqrt.o
# from .cpp file
$ g++ –c invsqrt.cpp –o invsqrt.o
$ g++ -c main.cpp -o main.o
```

> 生成的`invsqrt.o`和`main.o`文件不能直接打开，你可以使用`readelf -a <object file>`阅读其信息。

### 4 链接
每个源文件对应的目标.o文件被链接起来，就生成一个可执行程序文件。

```bash
$ g++ invsqrt.o main.o -o main.exe
```

当然，如果想要使用.cpp文件一步到位生成可执行文件，可以使用以下指令：
```bash
$ g++ invsqrt.cpp main.cpp -o main.exe
```

> **语法总结**
> 
> `g++`和`gcc`工具中使用的一些命令行参数：
> 
> * `-E` 只进行预处理
>
> * `-S` 只进行编译
>
> * `-c` 只生成目标文件
>
> * `-o <file>` 指定输出文件的名称。我们约定：`.i`为预处理后的文件，`.s`为汇编文件，`.o`为目标文件。
> 
（未完待续...）