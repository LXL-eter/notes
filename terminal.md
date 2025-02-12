.当前 ..上一级 单字母参数可合并 /分隔
+ chsh -s/bin/zsh 转用zsh
+ cd 路径(可拖) 单用回根目录
+ pwd (显示当前绝对路径)
+ man 命令名 (q退出)
+ date cal 
+ time 命令 (测执行时间)
+ mkdir 目录名 &zwj; (创目录)
+ rmdir 目录名 &zwj; (删目录)
+ touch 文件名 &zwj; (可创多个文件)
+ rm &zwj; &zwj; &zwj; &zwj; &zwj; 文件名 &zwj; &zwj;(删文件) &zwj; -r递归删 -f强制
+ open &zwj; 名&zwj; &zwj; (打开)
+ chflags hidden 名 &zwj; &zwj; &zwj; &zwj; (隐藏)
+ chflags nohidden 名&zwj; (不隐藏)
+ ls 列出当前下的文件 -l详细 -a包括.开头的隐藏文件(-A无.和..文件) -R及其子文件 可再加目录名
+ head/tail -n 数 文件名 (输出头/尾指定行数)
+ cp 文件名1 文件名2 (前复制到后) -r递归复制目录
+ cat 文件名 (输出,可多个) -n从1开始编号 -b空白行不编号
+ less 文件名 (分页查看文件)
+ hexdump -n 数 文件名 (十六进制输出指定个数的字节)
+ clear&zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; (清屏)
+ find &zwj; 路径 &zwj; -name &zwj; '*.扩展名'
+ which 命令 &zwj; (查位置)
+ echo ... &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; (输出内容) 可echo $[算式]
+ mv 名1 名2 &zwj; (内容/整体移到最后一个或改名)
+ gcc 原名 -g -o 可执行文件名
+ whoami&zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj;  (获取当前用户名)
+ chmod &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; (改文件权限)
+ grep 内容 文件名 &zwj; &zwj; (搜索内容)
+ ps (显示进程信息)
+ diff 文件名1 文件名2 (比较)
+ curl &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; (发送HTTP请求)
+ env &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; (查看所有环境变量)
~~~
echo 内容           cat 文件
> 文件 stdout重定向到文件 
< 文件 文件重定向到stdin 可编译后文件 < 文件(作为输入)
2> 文件 stderr重定向到文件 (立即输出内容,文件变空)
&> 文件 覆盖,stdout、stderr
>> 文件 追加,-n换行追加
例:cat file1 file2 > file3
   diff file1 file2 > file3
   ls > file1
~~~
~~~
管道: 命令输出输入到命令
ls | head 
ls | grep 内容
~~~
+ export 变量=值 unset 变量
+ vim Normal,i切换为Insert,esc换为Normal,:切换为Command(w写入,q退出),Vision选文本