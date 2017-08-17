[1、华为TI软件开发（优招笔试题）](一、华为TI软件开发（优招笔试题）)

一、华为TI软件开发（优招笔试题）
==================================================
# 第一题
（太简单不写了）
#第二题
一个系统的若干模块之间存在相互依赖的关系。如果A模块调用了B模块的接口，那么成为A依赖B，记为A->B
如果A->B,B->A，那么称A和B模块存在循环依赖。
如果A->,B->C,C->D,D->B，那么BCD存在循环依赖，A不存在循环依赖，以此类推。
先输入若干模块之间的关系，判断某模块是否存在循环依赖。
模块的ID范围0-0xffffffff。
调用者保证相同的关系不重复输入。
>实现接口
>1、//接口功能：添加依赖关系
>     //说明：Moduleld模块依赖DependModuleld，调用者保证Moduleld不等于DependModuleld。
```
void AddDependency(unsigned int Moduleld,unsigned int DependModuleld);
```
>接口功能：判断模块是否存在依赖关系
//说明：如果模块不存在返回false
```
bool ModulelsCycularDependency(unsigned int Moduleld);
```
>接口功能：清空模块数据
```
void clear(void);
```
输入描述：
>模块间的关系，注意最后一行没有'，'结尾 

输出描述：
>模块是否循环依赖，注意最后一行没有'，'结尾

示例1
>输入
>>{0x00, 0x01},
{0x02, 0x03},
{0x03, 0x04}

>输出
>>｛0x00, false｝,
｛0x01, false｝,
｛0x02, false｝,
｛0x03, false｝,
｛0x04, false｝