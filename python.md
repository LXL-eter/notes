python解释型 交互式 面向对象
.py pyhton 文件名 python3 (-i 文件名)可交互 quit退出
| &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj;  &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj;  &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj;运算顺序|
|:--|
|&zwj; 1  &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; **
|&zwj; 2 &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; ~ +(正) -(负) &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; |
|&zwj; 3 &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; * / % //|
|&zwj; 4 &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj;   + -|
|&zwj; 5 &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; << >>|
|&zwj; 6 &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; & |
|&zwj; 7 &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; ^ \||
|&zwj; 8 &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; > < >= <=|
|&zwj; 9 &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; == !=|
|10 &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj;= %= /= //= -= == *= **=|
|11  &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; is is not|
|12 &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; in not in|
|13 &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; and or not|

//向下取整 a=1 b=1 a is b and前假为前值，否则为后值 or前真为前值，否则为后值
operator: &zwj; add+ &zwj; sub- &zwj; mul* &zwj; truediv/ &zwj; floordiv// &zwj; mod%
gt(x,y)x>y eq(x,y)x==y lt(x,y)x<y
&zwj; 
```python
raw_input() input()(可评估串表达式) 回车结束不保留 
会显示里面的内容 可赋给 输入信息当作字符串
```
```python
print(*x,sep=' ',end='\n')   返回None(表示无),不显示
                '%6.7f %s'%(x,s)
% - + 0 m.n            d f c s o x,X e,E p
print(None)->None print(print(6))->6 None
                s.format() 
'{1}...{0}...{1}'.format(,) {0}{1}看作对应位名的值
'{名1}...{名2}'.format(名2=,名1=)
'{:+.6f}'带符号保留六位小数
'{:x>yd}'左填x,y宽度 <右填
'{:>xd}'右对齐(默认) '{:<xd}'左对齐 '{:^xd}'中间对齐
'{:,}',分割数   '{:.x%}'百分数,x位小数   '{:.xe}'指数,x位小数
'{:b/d/o/x/#x}' b二进制,#带0o
r'...'原始 f'...{名}...'
```
+ 同一行多语句;分隔 缩进一致写语句 一句多行,末行前行末加\\,[]{}()例外
+ import sys sys.getsizeof(x)
+ 转义字符 del 删除
+ 函数内改、赋全局,用global声明,改、赋外部,用nonlocal声明(会被认为是局部的,则找不到)
+ \#单行注释 3双引号/3单引号内注释,>>>测试文档 里有' ',外用''' '''
+ from 模块 import 函数 (可as)直接用函数 import引入模块,用模块名.函数名
+ 赋值(不同步)·绑定:要定义 名=,再用,可x=y=6 后名覆盖前同名 
名1,名2=值1,值2 右侧从左往右逐个评估再对应赋值
可名=函数名,用名() 可max=7,max=f
```python
def 名():      *表示不定长参数  :后为注解
    ... return 
()前为operator,里为operand 可函数名给参数 可无参数,调用时要有()
不返回则None   若赋值关键字,可不按顺序
参数均评估,局部性,可默认赋值(关键字)
可返回多个值,赋给多个名 
函数里可再定义函数2、返回函数2
def f(s=[]):s.append(6) 每调用一次均添6

高阶函数:函数作为参数;返回函数
def a(n):def b(k):return n+k return b c=a(3) c(4)、a(3)(4)为7
def a(x):b=x def c(y):nonlocal b b-=y return b return c d=c d(y)改b
变量从本地往父域找,取第一个 Global  a c
                        f1 a    n b 返回b
                        f2 b    k   返回n+k
```
assert 句,'信息' 句假才显示信息  &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; 6(6)Error
```python
a=lambda x(参数):一个表达式(返回值) 用a(6),可多个参数
(lambda x:x*x)(3)为9
阶乘函数:
(lambda f: f(f))(lambda f: lambda x: 1 if x == 0 else x * f(f)(x - 1)) 
(lambda f: lambda k: f(f, k))(lambda f, k: k if k == 1 else mul(k, f(f, sub(k, 1))))
currying=lambda f:lambda x: lambda y:f(x,y)   用currying(f)(a)(b)
```
```python
def horse(mask):
    horse = mask
    def mask(horse):
        return horse
    return horse(mask)

mask = lambda horse: horse(2)
>>> horse(mask)
2
```
+ Decorators: &zwj; &zwj; &zwj; from ucb import trace或自定义 
函数前加@trace相当于函数=trace(函数)
`trace(f):def tra(x):print return f(x) return tra`
```python
recursion:里面的函数要考虑能做什么,不要考虑如何实现
print_all(x): print(x) return print_all
print_sums(x):print(x) def next_sum(y) return print_sums(x+y)(会运行)   return next_sum
sumdigits(n):if n<10:return n else return sumdigits(n//10)+n%10
cascade(n):顺 if n<10:print(n) else print(n) cascade(n//10) print(n)
           逆 grow(n) print(n) shrink(n) fg(f,g,n):if n: f(n);g(n)
           grow=lambda n:fg(grow,print,n//10)
           shrink=lambda n:fg(print,shrink,n//10)

tree recursion:fib(n):if n==0:return 0 elif n==1:return 1 else:return fib(n-2)+fib(n-1)

count_partitions(6,4)和因子<=4{含4 不含4
cp(n,m):if n==0:return 1 elif n<0 or m==0:return 0 else:with_m=cp(n-m,m) without_m=cp(n,m-1) return with_m+without_m
```
+ range(x,y) [x,y) y-x为个数 range(x) [0,x) range(x,y,z)z为步长,默认为1
+ a=[6] b=[6] 相等不相同 a=[6] b=a 相同,同时变
+ 不可变对象:整数、浮点数、串、元组,若尝试改变,实际上会创建新对象
可变:列表、字典、集合

### 条件 循环
假:False None 0 空字符串'' 空列表[] 空字典{} 空元组
只一从句可写在同行 break continue pass空语句
if :缩进 elif :缩进 else:缩进   按顺序执行,真则执行、忽略其余

while :缩进 例:a,b,k=1,0,0 while k<n:a,b,k=b,a+b,k+1
可有else,while正常执行结束后(无跳出)执行else

`for 自定义名(可_或空白) in 序:(将名依次绑定到元素)`
`for 名 in range(n):(n次)` `for index(len())` `for x,y in [[1,2],[3,4]]:(unpack)`

#### 内置函数
类型转换 `int(x,base=10)`x为数,不能有base,为串则可有 
`float(x)` &zwj; &zwj; &zwj; `complex(x,数)`x为串,不能有第二个参数 
`str(x)`(人) `repr(x)`(解释器)均返回串 &zwj; &zwj; &zwj; &zwj; `eval(串)`评估表达式 
`tuple(s)`返回元组 &zwj; &zwj; &zwj; `list(s)`返回列表 &zwj; &zwj; &zwj; `dict(s)`s应为(键,值)元组
`set(s)`返回集合(不重复){} `frozenset(s)`不可变集合 A&B交 A|B并 A-B差
`chr(x)`数对应的字符 &zwj; &zwj; &zwj; `ord(x)`字符对应的数 &zwj; &zwj; &zwj; `hex(x)/oct(x)`对应的的十六/八进制字符串
`id(x)`获取地址 &zwj; &zwj; &zwj; len() &zwj; &zwj; &zwj; abs(x) &zwj; &zwj; &zwj; `divmod(x,y)`商,余数 &zwj; &zwj; &zwj; `pow(x,y)`
`sorted(对象,cmp,key,reverse=False)`
`sum(序,start=0)`元素相加再加start,不能用于串    `sum([1,2],[3,4],[])` 
`all(序)`均True才True `all([])`True &zwj; &zwj; &zwj; &zwj; `any(序)`有True就True
`max(多个元素或序,key函数(可无))` `min`
`round(x,y默认为0)x四舍五入,保留y位小数` &zwj; &zwj; `bin(x)`返回二进制表示串
`isinstance(x,y)`判断x是否是y的同类或子类 `issubclass(x,y)`是否是子类
`supper()`调用父类属性&zwj; &zwj; &zwj; `exec(串)`执行语句 &zwj; &zwj; &zwj; dir(名) &zwj; &zwj; &zwj; `reload(模板)`重新导入函数
#### 需导入模块的函数
###### import math &zwj; &zwj; &zwj; (float型)
math. &zwj; `fabs(x)` &zwj; &zwj; `ceil(x)`上整数 &zwj; &zwj; `floor(x)`(下整数) &zwj; `exp(x)`e^x^  &zwj; &zwj; `log(x,y默认为e)`log~y~x
`modf(x)`返回小数和整数部分 &zwj; `sqrt(x)` pi e
`sin(a)` &zwj; `cos(a)` &zwj; `tan(a)` &zwj; `asin(a)` &zwj; `acos(a)` &zwj; `atan(a)` &zwj; `atan2(y,x) `
&zwj; 
###### import random
random. `choice(序)`随机一元素 &zwj; `randomrange()`随机一元素
`random()`随机[0,1)的实数 &zwj; `uniform(x,y)`随机[x,y]的实数 &zwj; `shuffle(序)`随机排序,不返回
&zwj; 
###### import time
`time.localtime(time.time()`[^1])[0]年[1]月[2]日[3]时[4]分[5]秒[6]一周第几天[7]一年第几天
`time.asctime()`格式化
###### from datetime import time
d=`date(年,月,日)`或`date.today()`
可用`d.year/month/day` &zwj; 可d2-d1差多少天
`d.strftime("...")`%Y年 &zwj; &zwj; &zwj; %m月%b简月名%B全月名 &zwj;  &zwj; &zwj; %d月中的天%j年中的天
%H时 &zwj; &zwj; &zwj; %M分 &zwj; &zwj; &zwj; %S秒 &zwj; &zwj; &zwj; %a简星期名%A全星期名%w星期(0~6)
###### import calendar
calendar. `calendar(年)` `month(年,月)` `isleap(年)`
### 列表
封闭 l=[...] 用l[i] 下标0~len(l)-1 
可+ * in not in(判断单独元素) 切片
元素为任何东西 直接传入函数,可改 可赋给对应个数的名
l=\[[1,2],[3,4]] l[1][1]为4 `[f(x) for x in 序 (if ...)]`新列表

`l.append(x)`末加 &zwj; &zwj; &zwj; `l.insert(索引,x)` &zwj; &zwj; &zwj; `l.extend(序)`末加
`l.pop(index默认为-1)`移除l[index]并返回 &zwj; &zwj; &zwj; `l.remove(x)`
`l.count(x)` &zwj; &zwj; &zwj; `l.index(x)`
`l.sort(cmp,key,reverse=False)`False升True降 cmp方法 key用于比较的一个参数
`l.reverse()`反向 &zwj; &zwj; &zwj; `l.[n:]=[]`删除

切片 l[:y]表示[l[0],...l[y-1]] l[x:y] l[x:] l[:] [初:末:步长默认为1]
s=[1,2] t=[3,4] s[0:0]=t s->3 4 1 2;s[3:]=t s->1 2 3 4 t[1]=5不改 (对列表整体改动则改值)
### 字符串
s='...'或"..."(里可有'') 用s[i] 下标0\~len(s)-1、-len(s)\~-1
可+ * in 切片 print(' '*6+str(6)) 可'...' in '......'

`s.upper()` `s.lower()` `s.swapcase()` 不改s
`s.count(str,beg=0,end=len(s))` [ ) `s.find(str,beg=0,end=len(s))`否则-1 `s.replace(s1,s2,n默认s1出现次数)`替换至多n次
### 字典
d={键:值,...} d[键]找值 d[新键]=值直接增加
in 查键是否存在 可sum(键) for list
键不能为1列表、字典(或含有),值可为多种东西 后键会覆盖前同名键
`list(d)`键的序 `d.keys()` `d.values()` `d.items()` `d.pop(键)`
`{f(x):g(x) for x in 序 (if ...)}`新字典
例:`{k:[v for v in values if match(k,v)] for k in keys}`
### 元组
不可改 t=(,...)或,... 下标0~len-1 列表作为元素,可改列表内容 不影响元组
可+ * in 切片 for

### 迭代器(惰性)
可用next、for li=iter(l)返回迭代器,标记第一位 next(i)返回当前元素,标记后移一位
`di=iter(d或d.keys())` &zwj; &zwj; &zwj; `di=iter(d.values())` &zwj; &zwj; &zwj; `di=iter(d.items())` next(di)为(键,值) 改d形状、大小后已生成的迭代器失效 
`ri=iter(r)` &zwj; &zwj; &zwj; `for x in i`(遍历元素至末尾)

返回迭代器,next产生效果:`map(函数,可迭代对象)`将函数用于元素(不改值)
`filter(函数,可迭代对象)`函数值真则遍历元素,假则只移位
`zip(对象1,对象2,...)`可遍历同索引的(x,y...)元组,取决于更短的
`reversed(对象)`反向遍历
`list(i)` `tuple(i)` `sorted(i)`返回排序后的 均会移至末尾
例:`mi=map(函数1,范围) fi=filter(函数2,mi)`先应用再过滤
`all(a==b for a,b in zip(s,reversed(s)))`
###### 生成器
特殊的迭代器 yield(函数里产生值) yield from 对象(遍历产生)
i=函数() next(i)可遍历产生的值 list(函数())列出所有产生的值
```python
例:part(n,m) if n>0 and m>0:
                if n==m:yield str(m)
                for p in part(n-m,m):yield p+'+'+str(m)
                yield from part(n,m-1)
```
### 类
.访问属性 类->方法(对象+函数,也是属性) 加、乘 赋值查找
`class 类名:def __init__(self,aholder):self.balance,self.holder=0,aholder` (构造方法)
`def deposit(self,amount):self.balance+=balance return self.balance`(可输出,无也仍然改值)
`类属性=...`
self<-a=类名(名)同时自动调用__init__ 可用a.balance a.holder
a.新属性=...直接创造
实例属性优先于类属性  &zwj; &zwj; &zwj; 有类.b,实例.b实则为添加实例属性
对象.实例属性(改值不影响类) 类.类属性(改值会同步到对象)
getAdder(对象)->属性 getadder(对象,属性) hasattr(对象,属性)是否有
a.deposit(6)可赋给 可i=map(a.deposit,range(6,66))、next(i)
类.方法(对象(可self),...)即对象.方法(...)

__继承__ class 子类(基类):(子类继承基类)可更改 多重继承, ,...
```python
例:class chAccount(Account):interest=0.006 withdraw_fee=1
def withdraw(self,amount) return Account.wihtdraw(self.amount+self.withdraw_fee)
```
一属性在子类有,则用,否则在基类中查找、执行

__组合__:将另一个对象作为属性
```python
class Bank:def __init__(self):self.accounts=[]
def open_account(self,holder,amount,kind=Account):
    account=kind(holder);account_deposit(amount);self.accounts.append(account) return account
def pay_interest(self):for a in self.accounts:a.deposit(a.balance=a.intereat)
```
### 链表
```python
class Link:empty=() def __init__(self,value,rest=empty):self.value,self.rest=value,rest
创建:Link(6,Link(7,Link(8)))
def rLink(sta,end):if sta>=end: return Link.empty
                   else: return Link(sta,range_Link(sta+1,end)) 
def map_Link(f,s):if s is Link.empty:return s
                  else return Link(f(s.value,map_Link(f,s.rest)))
def filter_Link(f,s):if s is Link.empty:return s
                     fil_rest=filter_Link(f,s.rest)
                     if f(s.value):return Link(s.value,filter)
                     else return fil_rest
前接:s.value,s.rest=v,Link(s.value,s.rest)      s=Link(v,s)
后接:s.rest=Link(v)
```
### 文件
同级目录下 名1下有__init__.py 包1 包2
 &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; 名2 from 名1.包1 import 包1
 文件:`fp=open(名,mode="r")`
 mode: t文本 x只新建,写 b二进制 +打开读写
 r打开只读 r+打开读写 w清空或创建, 只写 w+清空或创建,读写 a追加或创建,读写
 fp.closed已关闭才True fp.mode fp.name &zwj; &zwj; &zwj; `fp.close()`
 `fp.read`(字节数)默认全部 &zwj; &zwj; &zwj; `fp.write(串)` &zwj; &zwj; &zwj; `fp.tell()` &zwj; &zwj; &zwj; `fp.seek(偏移量,0/1/2)`该位置
 __import os__ `os.name(已存在文件名,新名)` `os.remove(文件名)`
 `fp.flush()`缓冲区写入文件 `fp.next()`返回下行
 `fp.readline(s,全部)`()读整行,包括'\n' &zwj; &zwj; &zwj; `fp.writeline(s,串列表)`要换行加'\n' &zwj; &zwj; &zwj; `execfile(文件名)`执行
 ### Expasion
data abstracion 有理数n/d from fractions import gcd 用`gcd(n,d)`
```python
树 def tree(label,branches=[]:return [label]+list(branches))
label(tree):return tree[0]      branches(tree):return tree[1:]
is_leaf(tree):return not branches(tree)
count_leaves(t):if is_leaf(t):return  1
                else return sum([count_leaves(b) for b in branches(t)])

class Tree:def __init__(self,label,branches=[]):self.label,self.branches=label,list(branches)
```
###### Memoizatin
```python
def memo(f):cache={} def memorized(n): if n not in cache:cache[n]=f(n) return memorized
fib=memo(fib)
```

```python
from fractions import Fraction 
half=Fraction(1,2)
repr(half)->'Fraction(1,2)'   str(half)->'1/2'   
print(half)->1/2              eval(repr(half))->Fraction(1,2)
```

多态函数:适用于不同数据类型
接口:共享的消息和规范(相同的方法)
方法:`__str__ __repr__ __add__(左加右）、__radd__(右加左)即+ __bool__ __float__`



























```python
if n < 0:
    return []
if n == 0:
    sums_to_zero = [] # The only way to sum to zero using positives
    return [sums_to_zero] # Return a list of all the ways to sum to zero
result = []
for k in range(1, m + 1):
    result = result + [[k] + rest for rest in sums(n-k, m) if rest == [] or rest[0] != k]
return result
```

Tips:
避免重复,返回值作右值
```python
def max_product(s)
if s == []: # empty set
    return 1
elif len(s) == 1: # single element
    return s[0]
else:
    return max(s[0]*max_product(s[2:]),max_product(s[1:]))
```
[^1]:当前时间
