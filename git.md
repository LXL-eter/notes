文件三类别:Untracked tracked Ignored
工作区 &zwj; &zwj; &zwj;add &zwj; &zwj; &zwj; 暂存区 &zwj;  &zwj; &zwj;commit &zwj; &zwj; &zwj; 仓库 &zwj; &zwj; &zwj;push/pull &zwj; &zwj; &zwj; 远程
+ `git init (名)` 创git仓库,默认为当前
+ git账号全局设置:`git config --global user.name "名"`
  &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj;&zwj; &zwj; `git config --global user.email "邮箱"`
~~~
仓库根目录下创.gitignore
#注释 *.c a/**/b /匹配根目录,否则所有目录 !取消忽略
git check-ignore -v 文件  查看是否忽略
~~~
+ `git status` &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; 查看工作区、暂存区状态
+ `git diff` &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; 工作区和暂存区差异 
 `git diff 分支`&zwj; &zwj; &zwj; 工作区和分支差异
 `git diff 分支1 分支2` 两分支差异
 + `git add 文件` &zwj; &zwj; &zwj; &zwj; 只暂存修改过的文件
   `git add .` &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; 暂存当前目录所有修改过的文件
+ `git rm --cached 文件` 从暂存区中去除
+ `git rm 名1` &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; 删除本地和仓库的文件
  `git mv 名1 名2` mv本地和仓库的文件
&zwj; 
&zwj; 
+ `git log` 查看提交历史--graph显示分支结构 --oneline显示一行 --p显示修改信息
~~~
git commit -m "信息"
<type>[scope]:<summary>       [body][footer]
type:fix(修复)feat(新功能)docs(更改)refactor(代码重构)perf(性能测试)test(功能测试)ci(集成测试)BREAKING DEPRECATED
footer:Fixes #id和Closes #id表示解决
~~~
+ `git show id` 显示具体信息,id为每一提交的标识,不必完整
+ `git tag 名 (id)` 创标签，默认head
   `git tag` &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; 查看标签
+ 回溯:`git checkout id/main`
#### HEAD MAIN
+ `git branch 标签名 (id)`给分支标签名防丢失,默认HEAD
  `git branch` &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; &zwj; 查看分支
+ `git checkout 分支` &zwj; &zwj; &zwj; (-b创建)切换分支(修改后还要add、commit)
+ `git merge 分支`合并到当前分支,有冲突,则vscode里选择,add、commit,倾向于多
&zwj; 
&zwj;  
### 从本地 push/pull Github仓库
+ `git clone 仓库网址` 创一个目录,账号全局设置
 &zwj; 再add、commit
+ `git push`(不要开外网？)
~~~
用令牌登录
settings-developer settings-personal access tokens-Tokens(classic)-Generate new token(classic)作为密码
~~~ 
~~~
签署commit
gpg --full-generate-key 均默认 名设为github名
sec/与日期间的数字串为密钥
gpg --armor --export 密钥->公钥
SSH and GPG keys-new GPG key
git commit -S -m "" (输入私钥密码)
~~~
可invite collaborators,使之有权限在本地push
# PR
~~~
fork
git remote add origin 网址 -v查看
git push -u origin main
contribute里open pull request
本源仓库pull requests里Merge pull request(可能要Resolve con conflicts)
fork仓库可sync fork里update,再在本地git pull
pull request后再push会被改变
本源仓库可在pull request里Review changes要求fork者更改,可再approve  可直接修改,再commit,会改fork
~~~