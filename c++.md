.cpp g++
比c第一级多::(作用域::成员) &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; 后置++ --
第三级为->*(在指针上通过指向成员的指针访问成员) &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; .\*(在对象上通过指向成员的指针访问成员)
&zwj; 
`#inlude<iostream>`
(命名空间)`using namespace std;`或`using std::cin;`或直接用`std::cin`
`cin>>名`(可连用)跳过空白先导,回车、空格、tab结束,残留在缓冲区
`cin.get()`单个字符
`cout<<名`(可连用)endl清空缓冲并换行
&zwj; 
可多次声明 `using x=y;` x为别名
(传指针比传整体开销小,但要写&x-&y之类的,比较奇怪,所以用引用机制)
+ 引用(要初始化):已存在对象或函数的别名(不必分配内存) &zwj; &zwj; &zwj; `int &y=x;`y是x本身
引用可作为参数、返回值,易于修改 不要返回函数内定义的引用
`return *this;`(可链式调用)
+ nullptr 空指针常量(可delete) c++不允许void*隐式转换 可int *p=0即NULL
+ const 常量(要初始化)const int i=6;不可int \*p=&i;
`const int* p` 可改p,不可改*p(指向常量,不是常量) `int *const p` 可改\*p,不可改p(指向变量,不是变量)
类 名()const; const成员函数,不能改对象的成员(可用于重载)
+ 类里的static变量(只是声明,不与对象关联)要在外初始化
类型 类::变量=... const static和inline static可在内初始化
static函数无this,不能用非静态成员变量或函数
+ 隐式转换:x-y产生临时对象,立即析构,可赋给const &·生命周期延长
临时对象(包括数,不可赋给非const &) int传入int &比const int &好
+ 函数重载:名(){} 名(类 x){} 名(类1 x,类2 y){}
根据不同传入参数情况执行对应版本,找最优者
+ 标准转换:①数组传给指针 指针传给const指针
②char传给int float传给double
③long long传给int double传给float nullptr传给任意类型的指针 任意类型的指针传给void* 多类型传给bool
+ 用户定义转换:①转换构造函数(性质) `类1(类2){}` 类2转换成类1
&zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; 加上explicit,只能传类2(只显式转换)
&zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; ②自定义转换函数 类2里`operator 类1(){}`
上下文转换:if while for ! && || ?:要bool,不考虑explicit
+ for(auto/类 名:范围)用名; 遍历,元素作为名
+ 将亡值(xvalue)是右值,临时占内存 纯右值(prvalue)临时不占内存}可偷,可移动语义
左值(lvalue)不临时占内存
移动语义:获取右值,省去不必要的拷贝(偷)
右值引用:类 && 只绑定右值、本身是左值 (移动赋值运算符)
`int z=6;可int &x=z;int &&y=6;` &zwj; &zwj; &zwj; std::move(名)转换为右值
static_cast<类>(名)类型转换
类 函数名() &或&&{} 调用左值时或调用右值时
+ 完美转发:(不丢失左值右值性)
转发引用①auto &&②T &&(T为函数模板的参数)
给参时,若为左值则为左值引用,否则为右值引用、转化为类 &&再返回(std::forward<类>(名))
引用折叠:右值引用的右值引用为右值引用,否则为左值引用
typename...类 类...名(可变参数模版) 类(名)...
return先尝试以rvalue返回
+ 智能指针:(函数内得指针是否已删、或应在外删)
智能:用delete还是delete[] 使用后自动销毁 指针是否为空
垃圾回收:回收不可达的对象(数指针个数,为0时回收;Mark-and-sweep是否可返回)
`#include<memory>`
    + std::unique_ptr<类> 名(new ...)(可为类[]) 对象的唯一所有者,自动回收 只能移动不能拷贝 .get()获取原始指针 noexcept(不执行任何异常)
也可auto 名=std::make_unique<类>(...)(可为类[],括号内为大小)
传std::move(名)给*、&、(const)智能指针(&)
    + 可能有多个shared_ptr指向同一对象,可被拷贝,对象无shared_ptr指向时被析构
    std::make_shared<类>
+ 作用域屏蔽:子类、局部同名优先
子类用using 基类::函数名; 可进行重载 &zwj; &zwj; &zwj; 子类对象.基类::a(找基类的a) __开头由编译器处理
`include<cstdlib>` malloc返回void*
new 分配空间且创造对象(可在中间给地址)(会自动用构造函数) delete回收
`int* p=new int[n] stru* p=new stru、stru(6)、stru[]{1,2,3,4,5,6}` &zwj; &zwj; &zwj; `delete p、[]p`
### 类
class struct union 名{}; 
封装:c++类中可有成员函数; 定义对象,可无struct或class
+ 类名::函数名 对象(状态+行为) 类里的变量、函数(内或外初始化,可默认赋值(末尾))
+ 访问说明符:public:成员可在类外访问 protected:子类定义、本身定义里可访问 privte:成员不能在类外访问、只能在类里用
可在public定义函数来获取、使用private的成员
class默认private &zwj; &zwj; &zwj; struct默认public
可在类里用friend声明函数,则可访问private成员
可见:基类有a,子类用a是基类a,即使有全局a
+ 继承:class 子类:public 基类{}; public/protected/private基类中成员级别高的会降
子类构造中可用基类构造
+ 多态:(子类成员优先)调用同一函数自动取决于实际类型
+ 向上转型:基类用子类成员 子类实例赋给基类指针、引用
子类对象赋给基类对象(对象切片)
+ 内联(默认):减少了调用函数的开销,编译器决定
+ 虚继承:`virtual public 基类`(多个基类继承一基类)
+ 虚函数:基类里`virtual 函数定义`
子类里 `函数名(...) override(可无){...}`覆盖基类虚函数,还是虚函数
虚调用:根据实际类型(指针指的类型)调用覆盖的最后一个版本 若为正常调用,根据静态类型(指针类型)
例:传入shape*数组,有circle、rectangle等子类,调用draw函数则不同
若=0,为纯虚数,不必有实现,可在外定义基本功能
抽象类:存在至少一个纯虚函数,不能创对象、作返回类型,可视作接口(例shape)
+ class 类名 final{}; virtual...() final {}不能被继承或覆盖(可能优化)
+ 构造函数(可无)(初始化):类里 类名(...){} (应为public,可有参数)
类 名;相当于类 名=类(); 有参数,直接 `类 名(参数值...);`
int a(4); 有默认构造函数 可类名()=default(引入)/delete(删除)
```c++
用this->成员(对象的成员) this指向当前对象
成员初始化列表:(编译器按定义顺序初始化)
构造函数名(...):成员1(值1),...{}  (成员为对象时必用)
```
+ 委托构造 a(int){} a():a(6){}
+ 析构函数: `~ 类名(){free...;}` 对象生命周期结束时调用,与析构顺序相反
+ 动态分配要delete析构:自动(局部)、块(main)结束时析构 静态(全局)、main结束时析构
+ 拷贝构造函数(同一类对象初始化当前对象)
类里构造函数中第一个参数类型为`类 &`或`const 类 &`且无其它不默认参数
可在`类 名1=名2`中调用 可=default/delete
+ NRVO:命名返回值优化,直接构造而非构造再拷贝
强制省略拷贝(直接构造)①返回类型与返回值同类型②初始化表达式同类型
+ SMF:构造函数 移动构造函数 移动赋值运算符
析构函数 拷贝构造函数 拷贝赋值运算符(rule of three)
rule of zero:一个类要么只用来管理资源,要么就不涉及(如std::string代为管理字符串,不用自己写three SMFs)
+ 对象1=对象2 赋值 类1里定义类 operator=(类2 from){}用from->成员
x=y视为x.operator=(y)
大多运算符可重载(由类找运算符函数) 有参数为后置运算符
x*y时会同时找`x.operator*(y)`(x类里)和`operator*(x,y)`(类外)
若为int乘my,可定义my operator*(int x,my y){return y*x;}
+ 定义了function call operator的对象为函数对象(函数指针、重载了())
### 模板
泛型编程:(编写类/函数的一个族(生成模式))
可以#define 名 名1 &zwj; &zwj; &zwj; #include "文件"(用名) &zwj; &zwj; &zwj; #undef 名 但可能重复定义

类模板`template<typename或class T> 定义类`(接受类型作为参数,可多个,可默认(末尾))
函数模板`template<typename或class T> 定义函数`
给出函数,生成类(特化)(隐式实例化)
类\<参数>为类 &zwj; &zwj; &zwj; 函数\<参数>为函数(可运算符)
可类型 x=函数<>(); &zwj; &zwj; &zwj; (模板参数推导,不考虑隐式转换)
类外写类内函数:`返回类型 类\<T>::函数名(){}` (重载解析前)
类可以有模板成员
①显示特化:已有有参数的模板 再给无参数的实例
`template<typename T> func或类 用T`
`template<> func用特例 类用类<类1>{}`
②偏特化:一些参数特定,其它参数不变
③通用
顺序①②③
### STL
```c++
名.begin() 名.end()
#include\<vector>   std::vector<类> 名;   名.push_back(元素)自动扩充
#include<algorithm>   std::sort(左地址,右地址) [) 排序(升)
可后加指定函数名,传入a、b真则a在b前 可后加std::greater<类>()降序
std::find(左,右,元素)返回第一位的迭代器
std::count(左,右,元素)   std::count_if(左,右,函数)
std::for_each(左,右,函数(引用))
std::reverse(左,右)   std::fill(左,右,元素)填充
std::implace_merge(初,中,末)合并两有序序列
std::max(...)   std::equal(s.begin(),s.begin+s.size()/2,s.rbegin())返回bool值
std::set<类> 名(有序去重)   std::swap(a,b)
```
### 迭代器
作为容器和算法间信息传递的通用单元
#include\<iterator> 以vector为例
`std::vector<int> v={1,2,3}
for(std::vector<int>::iterator it=v.begin();it!=v.begin();++it){用*it}
`