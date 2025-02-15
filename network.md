IPv6 广域网:如互联网 局域网:如家、校、公司
+ 一般局域网间的主机可相互访问,但不能直接访问互联网
    + 需要一个路由器连接不同层级的网络
+ 一台主机可以有多个IP地址
    + 如局域网主机可有多个局域网IP、公网IP
    + 主机可有多个网卡,每个网卡可有多个IP地址
+ 回环地址:如127.0.0.1(IPv4)/::1(IPv6)/localhost(主机名) 由于主机自身通信
+ 网关:连接不同网络的设备
    + 如路由器连接局域网和互联网
    + 一般局域网主机的网关是路由器的IP地址
+ 子网:划分大IP地址为小IP地址
+ NAT(网络地址转换):将局域网多个主机共享一个公网IP地址
+ OSI七层模型:应用层:浏览器 &zwj; &zwj; &zwj; 表示层 &zwj; &zwj; &zwj; 会话层
 &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; 传输层:TCP UDP
 &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; 网络层:IP
  &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; 数据链路层:以太网/Wi-Fi &zwj; &zwj; &zwj; 物理层:网卡/路由器
+ TCP/IP四层模型: 应用层 &zwj; &zwj; &zwj; 传输层 &zwj; &zwj; &zwj; 网络层 &zwj; &zwj; &zwj; 链接层
+ TCP(传输控制协议):面向对接的协议,保证数据的顺序和可靠性
+ UDP(用户数据报协议):无连接,单向简单快速,不保证顺序可靠性
+ 端口:软件层面的通信端点,和IP地址构成网络通信的基础
    + 端口号:0~65535,0~1023为系统保留端口一般不用于通网服务
    + IP地址识别机器,端口号识别软件(服务)
    + TCP、UDP端口号是分开的
    通过端口号可以区分不同服务,如HTTP分配端口是TCP 80 &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; http://...即http://...:80 &zwj; &zwj; &zwj; 否则要指明
+ 域名:标识互联网上的计算机(一个身份),是用.分隔的字符串
最右侧部分为顶级域名:.com .org .cn .net等,再往左为二级、三级域名等
用于网络、邮箱等 &zwj; &zwj; &zwj; 可设置任意多的子域名(多级)
+ DNS(域名系统)协议:(可用`nslook 域名`查看)
+ 域名下可有任意多DNS记录:A记录(将域名映射到IPv4) &zwj; &zwj; &zwj; AAAA(IPv6) &zwj; &zwj; &zwj; MX(邮箱) &zwj; &zwj; &zwj; CNAME(别名) &zwj; &zwj; &zwj; TXT(文本信息)等
TTL表示该记录的缓存时间 &zwj; &zwj; &zwj; 可`nslook -query=txt 域名`
+ 访问域名时,计算机会向DNS服务器查询域名对应的DNS记录
    + DNS可能查询其它DNS服务器直至找到记录
    + DNS一般会缓存查询结果,以减少查询时间,分配端口是TCP/UDP 53
+ 应用层协议HTTP(超文本传输协议),在客户端和服务器间传输网页
可`nc IP地址 端口`建立TCP连接再`GET/HTTP/1.1   Host:域名`
+ 发起连接的节点是客户端,接受连接的节点是服务器
客户端在本地选空闲端口连接到服务器的80端口
DOS攻击:大量无效请求占用服务器资源,使合法请求无法被处理
DDOS:分布式拒绝服务攻击,多攻击一
+ URL(统一资源定位符)属于URI 
协议://主机:端口/路径/query=1#frag
只含ASCII字符·百分号编码 空格为%20或+
+ __HTTP请求__:`nc 域名 端口      GET/... HTTP/1.1` `Host:域名`
相当于访问`http//域名/...`
访问方法:GET(获取资源) &zwj; &zwj; &zwj; POST(提交数据) &zwj; &zwj; &zwj; PUT(更新资源) &zwj; &zwj; &zwj; Delete(删除资源) &zwj; &zwj; &zwj; HEAD(获取资源头部)
标头:键(如Host Content-Length、connection):值
正文 请求体/响应体
curl、wget更方便 -X指定请求方法 -d指定请求体
### Web
##### HTML(超文本标记语言)
command+shift+c打开网页HTML
```HTML
<!DOCTYPE html>
<html><head><title>标题</title></head>
<body></body></html> 标签可有属性
<a href="链接">文字 </a>   <img src="链接"alt="文字">(加载不出才用文字)
```
##### Javascript(编程语言)
.js &zwj; &zwj; &zwj; 用于网页交互 \<script>标签引入
##### CSS(样式表语言)
层叠样式表 css选择器:规定css规则的应用元素
```CSS
body{font-family:...;   background-image:url('...');}
<link rel="stylesheet" href="...">
```

+ 动态网页根据请求变动生成
静态网页生成器:MkDocs Hexo Jekyll等
构建界面的库:Tailwind CSS React Vue.js
WordPress构建博客网站
处理HTTP请求的软件:Apache Nginx IIS、编程语言的库等
&zwj; 
+ __HTTPs__:HTTP over TLS(传输层安全协议,可用于任何应用层协议) &zwj; &zwj; &zwj; 加密、认证、完整性保护
密钥交换
非对称密码学:RSA ECC
TLS证书(数字签名的公钥) 由第三方者CA签发
保证CA可信:由操作系统或浏览器内置的CA列表:根证书
mTLS:mutual TLS &zwj; &zwj; &zwj; 客户端、服务器均向对方提供证书


