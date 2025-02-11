.tex 强调内容than样式
+ 命令(控制序列):以\开头 可用{}限定作用域,必需参数用{},可选参数用[]
%注释 连续多空格为1空格
```LaTex
\documentclass{article}   %文档类
%导言区:(preamble):加载宏包、定义命令、设置文档格式等
\begin{document}   %文档开始
%正文区(body):正文内容
\input{文件名}   %可导入其它文件
\end{document}   %文档终止
```
文档开头必包含\documentclass
+ 文档类(支持中文版):article(ctexart) report(ctexrep) book(ctexbook) beamer(ctexbeamer)等
可选参数:\documentclass[12pt(字号),a4paper(纸号),twoside(打印)]{}
+ 宏包(第三方库):\usepackage{amsmath}数学 &zwj; &zwj; &zwj; \usepackage[final]{minted}代码高亮
+ 导言区:\title{}标题 &zwj; &zwj; &zwj; \author{}作者 &zwj; &zwj; &zwj; \date{}日期,默认为\today
正文\maketitle生成标题页
+ 环境(控制格式):可用label{}标记(写成作用域:对象)
    + 无序列表`\begin{itemize} \item 666 \item 6666 end{itemize}`
    + enumerate:有序列表 &zwj; &zwj; &zwj; description:描述列表 \item[对象] 描述
    + center:居中 &zwj; &zwj; &zwj; flushleft:左对齐&zwj; &zwj; &zwj; flushright:右对齐
\centering后居中 &zwj; &zwj; &zwj; \raggedright后左对齐 &zwj; &zwj; &zwj; \raggedleft后右对齐
    + tabular:表格 \begin{tabular}{l/c/r:左/中/右对齐}
&分隔列 &zwj; &zwj; &zwj; \\换行 &zwj; &zwj; &zwj; \hline画横线
+ 段落:空行或\par分段,换行为空格,忽略行首空格 \\或\newline分行 \newpage分页
\verb字符内容字符(原样呈现) \verb*显示空格 verbatim环境·listing宏包代码高亮
+ 改字形:{\bfseries 作用域}作用域所有内容生效 &zwj; &zwj; &zwj; \textbf{参数} 参数内容生效
`\textbf{}粗   \textsf{}细   \texttt{}较大   \textsc{}花式   texttit{}中式斜   \textsl{}英式斜`
+ 改大小:`{\tiny }   {\scriptsize }   {\footnotesize }   {\small }   {\normalsize }   {\large }   {\Large }   {\LARGE }   {\huge }   {\Huge }`
+ \转义 &zwj; &zwj; &zwj; \~{} \^{}防止将后面内容作为参数
引号均编译为中式 &zwj; &zwj; &zwj; 中间加{}防止西文连字
+ -连字符 --短破折 ---长破折
+ 长度单位:em ex cm mm pt in 可负
+ 行距:`{\linespread{}\selectfont 内容}`
+ 水平间距:\hspace{}(可为fill,在左右间填空格) \quad为1em \qquad为2em
+ 垂直间距:\vspace{} \\[]换行+垂直间距
+ 章节:\part{} \chapter{}仅用于book、report
&zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; \section{} \subsection{} \subsubsection{}
自动编号 &zwj; &zwj; &zwj; \tableofcontents生成目录 \appendix后为附录
+ 插图:用graphicx宏包 \inludegraphics[宽高选项]{路径或名}
放figure环境里,为浮动体
+ 交叉引用:环境里\label{标记},再用 图\ref{标记}是...、\pageref{标记}页是...、式\eqref{标记}是...
+ 页大小、页边距:用geometry宏包
\geometry{paper=a5paper}、{paperwidth=...,paperheight=...}、{margin=...}、{left=...,right=...,top=...,bottom=...}、{hmargin=...,vmargin=...}
+ 模版:预设好的文档类 放到同目录用
### 数学公式
数学模式下用 用amsmath宏包 所有字母视为变量
行内:\$...\$ 或 \\(..\\)
行间:单行\\[...\\] equation环境
 &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; 多行align、gather环境
不能空行分行 \text{}正常文本 基本()[]{} 上标^ 下标_
求和:`\sum_{下标}^{上标}`
分数:`\frac{分子}{分母}`
极限:`\lim_{变量名\to 极限点}`
调距:\\, &zwj; &zwj; &zwj; \\: &zwj; &zwj; &zwj; \\! &zwj; &zwj; &zwj; \\quad &zwj; &zwj; &zwj; \\qquad
\\sin \\cos \\cos^2 \\log \\max
\\infty为无穷符号 &对齐点 
\\alpha \\beta \\theta \\Gamma \\Delta \\xi
\\sqrt[n]{x} 
\\dots ... &zwj; &zwj; &zwj; \\vdots 三竖点 &zwj; &zwj; &zwj; \\ddots三斜点
\\leq <= &zwj; &zwj; &zwj; \\neq 不等于 &zwj; &zwj; &zwj; \\in 元素属于 &zwj; &zwj; &zwj; \\subset 子集
矩阵pmatrix环境 行列式vmatrix环境 用数字和&
\langle为< &zwj; &zwj; &zwj; \rangle为> &zwj; &zwj; &zwj; \vert为|
+ 与符号连用:自动调节大小 \left \right  &zwj; &zwj; &zwj; 手动:\big \Big \bigg \Bigg
+ 字:\mathrm{} 正式 &zwj; &zwj; &zwj; \mathit{} 斜 &zwj; &zwj; &zwj; \mathbf{} 粗 &zwj; &zwj; &zwj; \boldsymbol{} 斜粗 &zwj; &zwj; &zwj; \mathsf{} 圆润 &zwj; &zwj; &zwj; \mathtt{} 细圆润