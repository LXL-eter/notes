.c gcc 本名 -g -o 可执行文件名
| &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj;  &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj;  &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj;运算顺序|
|:--|
|&zwj; 1  &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; [ ] ( ) . ->|
|&zwj; 2 &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; __++__ __--__ ! ~ +(正) -（负） * & sizeof 类型转换 &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; 从右到左|
|&zwj; 3 &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; * /（只int/,去尾） %（int）|
|&zwj; 4 &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj;   + -|
|&zwj; 5 &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; << >>|
|&zwj; 6 &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; < <= > >=|
|&zwj; 7 &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; == !=|
|&zwj; 8 &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &|
|&zwj; 9 &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; ⌃|
|10 &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj;\||
|11  &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &&|
|12 &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; \|\||
|13 &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; ?: &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj;  &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj;  &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj;  &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj;  &zwj; &zwj; &zwj; &zwj; &zwj; &zwj;  &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; 从右到左|
|14 &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; = += -= *= /= %= &= ⌃= /= <<= >>= &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; 从右到左|
|15  &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj;  ~

+ []相当于*(),(&a[i])[j]为a[i+j]
+ a++为a,关注开始;++a为a+1,关注结束:均+1;++--只对变量,无(-x)++; 
\~换位取反,~x为-x-1,不改x;
!由0返回1,由非0返回1
+ x<<n,补码左移n位,右补0,溢出则无,未溢出则相当于x*2^n^;
x>>n,右移n位,signed补最高位,unsigned左补0,未溢出相当于x/2^n^
+ x&y,1 1才为1;x|y,0 0才为0;x^y,1 1或0 0才为0:对象为char或int
+ &&前为0停,||前为非0停(短路)
+ a?b:c a真返回b,假返回c
+ 赋值运算右赋左,左侧必为变量,返回运算后的左值
+ ,返回最后的值
&zwj;
+ 判断里的x为x!=0,!x为x==0
+ 6>5>4为1>4为0
+ "\数"(至多三位),0数均为八进制数;"\x数"(至多两位),0x数均为十六进制数;0b数,0B数为二进制数
+ int 4,double 8,float 4,char 1,short 2,void *不定指向
+ 数.数e^整数^,.数为0.数,为浮点型
+ 自动类型转换:char->short->int->long-long long,int->float->double,signed->unsigned,不可int(3.14)
+ 转义字符\n \t \b \\" \\\ \v(竖向跳格)

~~~c
scanf 参数个数不定,返回正确参数个数,可忽略先导空白符,输入数、串遇到空格tab回车为止不保留;
% 数：至多字符数   l:long,double   ll:long long
  &d:int(&)   c:char(&)   s:字符串,自动以0结束   o:八进制  
   x:十六进制   p:指针   u:unsigned   a,e,f,g:float   []:所允许的字符   [^]:除该字符都允许
要getchar()
~~~
~~~c
gets(),回车或EOF结束不保留,自动有0,不需getchar()
puts(),遇0结束,输出\n
~~~
~~~c
printf 返回输出总字符数,%%为%,不能用\%;不可printf("%f",2);
% -:左对齐   +:前有+或-   0:前填充0
  数:至少占据字符数，右对齐   .数:小数位数(四舍五入)或至多字符数  *和.*对应后参数
  l:long   ll:long long   d:int(signed)   c:char   s:字符串(首地址),0止   o:八进制(无0)   x,X:十六进制(无0x)   e,E:指数，六位四舍五入的小数，两位底数   u:unsigned int  
  f,F:float(默认6位)   p:指针
~~~
+ c=getchar(),putchar(c)
+ #include<math.h> sqrt() fabs() pow(,) expa() loga() 均返回double型
+ 函数声明、调用、自定义(返回类型) return终止 不嵌套定义 从右往左处理参数 默认返回int型 里面定义的数组会消失,不能返回内部定义的自动变量地址
+ 不用指针,形参不改变实参,只传值
+ {局部}外用于内，内不用于外，同名时局部优先;全局变量(main之前就初始化)、静态局部变量static 类型 名(作用于局部,一直存在)未初始化则为0,局部变量(进入语句时分配存储)未初始化则随机
+ 正整数原反补码同,负整数补码的补码为原码(-0为-2^n-1^);signed -2^n-1^~2^n-1^-1,unsigned 0~2^n^-1,不在其中则<u>+</u>2^n^,注意溢出、截断
+ 结构化程序设计,大分解小,函数嵌套(要已在外定义)
&zwj; 
+ break跳出当前层循环或当前switch
  continue不执行剩下的语句,立即进入下一轮(可用于筛选)
+ 循环嵌套,里层先动,无{}只管一句
~~~c
if()真则执行，假则不执行，else与最近未配对的if配对
~~~
~~~c
switch(整型表达式){
    case 常量表达式:...;break;
    default:...;//无论位置
}case可多个并列，无break往下执行，不顾case
~~~
~~~c
while(){可输入输出} 假则结束 先判断一次
for（初始(只第一次);判断(假则结束);执行(第二轮及以后循环开始时执行){} for(i=0;i<=m;i++) ->m+1,有break不加1
do{}while();先执行(一次),再判断
可根据while for条件判断
~~~
~~~c
数组不是一级指针,是特殊的指针,定义时不可越界,sizeof(a)为个数*sizeof(a[0])
int/char/double/结构 名[数量]={},其余为0
a即&a[0]是首地址、指针常量,代表整个数组,不可a++,不可对a赋值
下标为0~n-1,i=0 i<n
传入函数是指针,sizeof(a)为指针大小
~~~
1地址为1类型字节
~~~c
字符串是以'\0'结尾的字符数组,0标志结束,计入sizeof(s)、s[n],不计入strlen(s)
char s[]={''...0}或"..."或{"..."},不可s++
char *s="...",串为指针常量,指向首字符,自动有0,只读不可改
 ~~~
 ~~~c
 string.h strlen(s) 字符换0,可能会变！
          strcmp(s1,s2) strncmp(s1,s2,n)(至多前n个)一字符一字符比较 s1>s2,返回>0;s1==s2,返回0;s1<s2,返回<0
          strcpy(s1,s2) strncpy(s1,s2,n)(至多前n个) s2从s1首地址开始拷贝到s1,s2的0拷贝后为止(s1容量!),返回s1首地址
          strcat(s1,s2) strncat(s1,s2,n)(至多前n个) s2从s1第一个0开始拷贝,s2的0拷贝后为止(s1容量!),返回s1首地址
          strchr(s,'c') 从左往右找,返回c出现的第一位置,否则NULL
          strrchr(s,'c') 从右往左找
          strstr(s1,s2) strcasestr(s1,s2)(忽略大小写)
 ~~~
~~~c
指针就是地址,地址就是指针,32位4字节,64位8字节 同类型可赋值 可比较,相减 不指则随机 用*t交换 NULL是0地址,不是空字符串
&取变量地址,函数内交换地址也不会改main值,要通过指针改值
*取1类型大小的字节(地址变量值)
&i传给*p                       &a[6]-&a[0]==6,无论类型
char/int/结构 *p=&i或a或&a[6],可用p[i]
*p++看作先取值,再移位,不可单用    ++(*p)、(*p)++值加1,可单用
int *p;(char *)p+1为p+1的字节,低位在右,从右往左处理
~~~
~~~
struct 名{int x;int y;};   struct 名 名1,名2={...}或{.x=...,.y=...};(均有x,y)其它为0  名1=(struct 名){...}  名1.x(结构变量.成员) 可相互赋值
struct 名 *p=&名1  p->x相当于(*p).x(结构地址访问成员)
struct 名 a[n],可用a[i].x (a+i)->x
~~~
+ stdlib.h int *q=(int \*)malloc(n\*sizeof(int))成功返回首地址,否则NULL calloc(n,sizeof())(初始化全为0) realloc(p,sizeof())更改已分配的 free(原首地址)
+ \#开头是编译预处理命令,一行只一个,不是语句
#define 形(不空格) 实,只是替换,两间隔不论,可嵌套 printf"内容"比define优先
#define 名(,) ...(多加括号,多行时行尾前的行末均加\\)
#undef
+ 同一目录下,#include"\\路径(名)"
+ enum 名 {名0=,...名n} 名1默认为0,后依次加1
+ unison 成员共享一个空间
+ typedef 已有类型名 自定义类型名
int \*a,b;&zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; a为指针
typedef int* t;t a,b; &zwj; a b均为指针
typedef struct 名{} 自定义名;
typedef int 名[n];
+ 命令行main(int argc,char *argv[])输入n个串,包括命令名、参数,argc为n,argv放串
~~~c
递归(关系和出口)
n！:f(n)...f(1)返回0 f(0)返回1
辗转:r=m%n为0则返回n else m=n,n=r,gcd(m,n)
顺序输出:n<10输出n else sequen(n/10),输出n%10
求区间最小值:max(a,m,n) m==n return a[m];else k=(m+n)/2 返回max(a,m,k) max(a,k+1,n)较大值
~~~ 
~~~c
链表 typedef sruct node{int num;struct node *next}Node;
建立 Node *head=*tail=NULL,*p;p=(Node *)malloc(sizeof(Node)),输入;while里再分配;
tail往右,顺序:if(head==NULL)head=p;else tail->next=p;tail=p;
head往左,逆序:p->next=head,head=p;
遍历 for(p=head;p;p=p->next)
插入 s->next=p->next,p->next=s;
删除 p2=p1->next,p1->next=p2->next(p1->next=p1->next->next),free(p2);
    n=p->next,p->data=n->data,p->next=n->next,free(n);
    while(h&&条件){p=head;head=head->next;free(p);}p=head;
合并 Node *h=*t=NULL; 
    while(p1&&p2)if()if(h==NULL)h=p1;else t->next=p1;t=p1,p1=p1->next;  
    if(p1)t->next=p1;
~~~
~~~c
二维数组 a[m][n]={{}...{}},地址相邻,n不可省,a指向a[0],a[i]指向a[i][0],下标为0~m-1,0~n-1
*(a+i)+j为a[i][j]的地址
指针数组 char/int *b[n],b[i]为指针
二级指针 指向一级指针,char/int **pp=&p,用**ppt交换
数组指针 char/int (*ap)[n]=&a1或a2,ap指向有n个元素的数组

a[m][[n],不可**pp=a或&a或a[0]或&a[0],也不能传
*a[n],**pp=a *pp是a[0],**pp是a[0][0],(*pp)++后a[0]指向原a[0][1],p+1指向a[1]
a[m][n],(*ap)[n]=a,ap+1指向a[1]
a[m][n],*b[m],b[i]=a[i];

函数指针:函数名为入口(首地址),类型 (*指针名)(,...)=函数名 
调用:(*指针名)(,...) 指针名(,...) 可作为函数参数
函数指针数组 类型 (*p[n])(,...)
数组指针指针 类型 *(*p)[n]
~~~
+ 二级指针指向指针数组的一个,指针数组元素指向二维数组每行,数组指针指向二维数组的一个:
~~~c
    char a[3][3]={"12","34","56"};
    char *b[3],(*c)[3];
    for(int i=0;i<3;i++)b[i]=a[i];
    c=a;
    char **p=b;
    printf("%s %s\n",*(++p),*(++c));//34 34
    (*p)++;
    printf("%s %s",b[1],*c);//4 34
 ~~~
 ~~~c
extern声明外部变量、函数
static静态全局变量、静态函数(其它文件不能用,可定义函数指针在其它文件用)
标准头文件：#ifndef 名
           #define 名
           #endif   (只include一次，防止重复定义)
文件在外部介质(如磁盘)中,一字符一字符顺序存放
ASCII码字符流  二进制码二进制流  数据<->缓冲<->文件
FILE *fp(指向文件结构体)  exit(数)关闭所有打开的文件,终止程序,数为0正常结束,否则不正常结束

fopen("文件名","方式")成功则返回FILE型地址,否则NULL
"r"打开只读        "r+"打开读写
"w"清空或创建,只写  "w+"清空或创建,读写
"a"打开或创建,追加  "a+"打开或创建,读取追加(二进制文件加b)
fclose(fp)                      文件指针与文件脱钩,缓冲区数据写入磁盘扇区  正常关闭返回0,否则EOF
fgetc(fp)                       返回读取的字符,末尾或错误则返回EOF,位置指针后移一字节
fputc('ch',fp)                  ch写到文件上,返回字符,错误返回EOF,位置指针后移
fgets(s,n,fp)                   读n-1个字符后或遇到'\n'(保留)或EOF(不保留)停,再自动加'\0',成功则返回s,否则NULL
fputs(s,fp)                     写s到文件上,遇0止,不保留 成功则返回最后一个字符,否则EOF
fscanf(fp,"...",...)            读入值到相应变量,成功则返回个数，否则NULL
fprintf(fp,"...",...)           写相应值到文件,成功则返回总数,否则负数
fwrite/fread(数据指针,大小,个数,fp)从二进制文件读入数据块到指针
feof(fp)                        未结束(包括EOF)返回0,结束返回非0
rewind(fp)                      位置指针指向读写文件的首地址
fseek(fp,long int偏移量,初始位置)  首0(SEEK_SET) 当前1(SEEK_CUR) 尾2(SEEK_END) 移动位置指针
ftell(fp)                       返回当前位置指针偏移的字节数(long int),错误返回-1L
ferror(fp)                      未出错返回0,否则非0
clearerr(fp)                    清除出错、结束标志符
 ~~~
 TIPS:
 {} &zwj; &zwj; &zwj; 英文半角 &zwj; &zwj; 空格！ ; &zwj; &zwj; 字符与数的转换！！！(-'0')&zwj; &zwj; &zwj; &zwj; //0正1负 &zwj; &zwj; /\*0假1真\*/
 /10 %10 /10%10 范围位数 计数、计算值、输入值控制 保存 
 i=0%d else %d cnt flag first
 十:n=n\*10+digit &zwj; &zwj; 十六:n=n\*16+digit
不要改循环条件里的参数！
杨辉三角 5空格%4d->8空格1数字
%n,0~n-1的循环
数组存状态、存位进制转换 循环结束后再赋值？
十进制转n `while(x){x=x/n}` 计位数`while(x){x=x/10,cnt++}`
`for(){for()printf("\n")}`
加一个变量 
输入无空格`while((s[i]=getchar())!='\n')` scanf%s
i++后要用a[i-1]
`strncmp(s1,s2,strlen(s2))==0`
压缩字符串:a[n]传入*p,用q指p,改\*q,p移位 *q=0
计单词数`!=' '&&flag==1{cnt++,flag=0}`
scanf内容要对应题要求
每个字母都要对
回文往两边
字母移位a[i]=(a[i]-'A'+n)%26+'A'
`a^=b^=a^=b交换值` (ch=fgetc(fp))!=EOF