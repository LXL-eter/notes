//字符串改造（有换行符）：
#include<stdio.h>
#include<math.h>
int main(){
    char s[1001];
    int flag=0,i=0;
    while(1){
        scanf("%c",&s[i]);
        i++;
        if(s[i-1]=='\\')flag=1;
        if(flag==1&&s[i-1]=='\n')break;
    }
    for(int j=0;j<i;j++){
        if(s[j]>='a'&&s[j]<='z')printf("%c",s[j]-32);
        else if(s[j]>='A'&&s[j]<='Z')printf("%c",s[j]+32);
        else if((s[j]>='0'&&s[j]<='9')||s[j]==' '||s[j]=='\n'||s[j]=='\\')printf("%c",s[j]);
         if(s[j]=='\\')break;
    }
}


//泉山顶云,比较日期：
#include<stdio.h>
struct da{
    int x,y,z;
};
int main(){
    int o,p,q,n,cnt=0;
    scanf("%d-%d-%d",&o,&p,&q);
    scanf("%d",&n);
    struct da s[n];
    struct da li={3000,32,32};
    for(int i=0;i<n;i++){
        scanf("%d-%2d-%2d",&s[i].x,&s[i].y,&s[i].z);
        if(o-s[i].x>=3)cnt++;
        else if(o-s[i].x==2){
            if(p-s[i].y>=7)cnt++;
            else if(p-s[i].y==6){
                if(s[i].z<q){cnt++;}
                }
        }
        if(li.x>s[i].x)li=s[i];
        else if(li.x==s[i].x){
            if(li.y>s[i].y)li=s[i];
            else if(li.y==s[i].y){if(li.z>s[i].z)li=s[i];}
        }
    }
    printf("%d\n%d-%02d-%02d",cnt,li.x,li.y,li.z);
}


//根号6×7+6的5次方÷6=1314，任选两数之和成集合的元素个数：
#include<stdio.h>
int main(){
    int n,cnt=0,l=1;
    scanf("%d",&n);
    int a[n],b[3000];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<3000;i++)b[i]=101;
    b[0]=a[0]+a[1];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int k=0;
            for(k=0;k<l;k++){
                if(a[i]+a[j]==b[k])break;
            }
            if(k==l){b[l]=a[i]+a[j];l++;}
        }
    }
    printf("%d",l);
}


//对应字符计数:
#include<stdio.h>
int main(){
    int n,nu,in,max=0,cnt=0;
    int a[26]={0};
    char c;
    scanf("%d",&n);
    getchar();//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    for(int i=0;i<n;i++){
        scanf("%c %d",&c,&nu);
        a[c-'A'] += nu;
        getchar();
    }
    for(int i=0;i<26;i++){
        if(max<a[i]){max=a[i];in=i;}
    }
    for(int i=0;i<26;i++){
        if(a[i]==max)cnt++;
    }
    if(cnt>1){printf("default");}
    else printf("%c",in+'A');
}


//拆分元素之积的最大值，递归南南南
#include<stdio.h>
int a[10001]={1},n,cnt=0,acc=1,max=0;
int search(int s,int t)
{
	int i;
	for(i=a[t-1];i<=s;i++)    //下一个拆分出来的数要大于前一位数字 
	{
		if(i<=n)  //当前数i要小于n，避免出现如7=7 这种情况出现 
		{
			a[t]=i;  //将当前拆分出来的数i保存到第t个位置 
			s-=i;	 //s减去数i，s的值将要继续拆分 
			if(s==0){
                for(int i=0;i<=t;i++)
                        acc*=a[i];
                    if(max<acc)max=acc;
            }    //递归出口
			else search(s,t+1);   //当s>0时，继续递归，继续拆分s 
			s+=i;  //回溯，加上之前拆分的数，以使产生所有可能的拆分 
		}
	}
	return 0;
}
int main() {
	scanf("%d",&n);
	search(n,1);
    printf("%d",max);
	return 0;
}


//螺螺螺螺螺螺螺螺螺螺螺螺螺螺旋矩阵呜呜呜呜呜
#include<stdio.h>
int main(){
	int a[4]={0,1,0,-1},b[4]={1,0,-1,0};
	int n,f=0,cnt=2;
	scanf("%d",&n);
	int s[n][n];
	for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				s[i][j]=0;
			}
	}
	s[0][0]=1;
	int i=0,j=0;
	while(cnt!=n*n+1){//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
				if(i+a[f%4]==n||j+b[f%4]==n||j+b[f%4]==-1||s[i+a[f%4]][j+b[f%4]]!=0)f++;
				i+=a[f%4],j+=b[f%4];
				s[i][j]=cnt;
				cnt++;
	}
	for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				printf("%3d ",s[i][j]);
			}
			printf("\n");
	}
}


//有理数相加
#include<stdio.h>
int yue(int a,int b)    //求最大公约数
{
       if(a>b){int t=a;a=b;b=t;}
       int c;
       while(a!=0){
        c=b%a;
        b=a;
        a=c;
        }
    return b;
}
int main()
{
    int a,b,x,y,j,k,n;
    scanf("%d",&n);
    scanf("%d/%d",&a,&b);
    x=a,y=b;
    for(int i=1;i<=n-1;i++){
        scanf("%d/%d",&a,&b);
        if(a==0)continue;
        x=x*b+a*y;
        y=y*b;
        if(x==0){y=1;continue;}
        k=yue(x,y);
        y/=k;
        x/=k;
    }
}


//输出最长回文子串，从中心往两侧
#include<stdio.h>
#include<math.h>
int main()
{
	char s[100],*x,*y;
	int n=0,len=0,t=0;
	while((s[n]=getchar())!='\n')n++;
	s[n]='\0';
	char *p=&s[1],*q;
	for(int i=1;i<=n-2;i++){
		x=p-1,y=p+1;
		while(*x==*y&&x>=&s[0]&&y<=&s[n-1])x--,y++;
		if(x<p-1){
			t=y-x-1;
			if(t>len)len=t,q=x+1;
		}
		if(*p==*(p-1)){
		x=p-1,y=p;
		while(*x==*y&&x>=&s[0]&&y<=&s[n-1])x--,y++;
		if(x<p-1){
			t=y-x-1;
			if(t>len)len=t,q=x+1;
		}
		}
		p++;
	}
	for(int j=1;j<=len;j++)
	{printf("%c",*q);
	q++;
	}
}


//删除字符（覆盖）
#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],ch;
	int i=0;
	scanf("%s",s);
	getchar();
	scanf("%c",&ch);
	for(int j=0;j<strlen(s);j++){
		if(s[j]==ch)continue;
		else s[i]=s[j],i++;
	}
	s[i]='\0';
	printf("%s",s);
}


//tmd带有小数点的字符串从16进制转换为10进制
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char s[81];
	int i=0,flag=0,cnt=0;
	double sum=0;
	scanf("%s",s);//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	while(s[i]!='\0'){
		if(s[i]=='.')flag=1;
		if(flag==0){
			if(s[i]>='0'&&s[i]<='9')sum=sum*16+s[i]-'0';//!!!!!!!!!!!!!!!!!!!!!
			else if(s[i]>='A'&&s[i]<='Z')sum=sum*16+s[i]-'A'+10;
			else if(s[i]>='a'&&s[i]<='z')sum=sum*16+s[i]-'a'+10;
		}else{
			if(s[i]>='0'&&s[i]<='9')cnt++,sum+=(s[i]-'0')*pow(16,-cnt);
			else if(s[i]>='A'&&s[i]<='Z')cnt++,sum+=(s[i]-'A'+10)*pow(16,-cnt);
			else if(s[i]>='a'&&s[i]<='z')cnt++,sum+=(s[i]-'a'+10)*pow(16,-cnt);
		}
		i++;
	}
	printf("%.2f",sum);
}


//malloc分配新地址
void my_strcat(char *s1, char *s2, char *s3) {
  size_t len1 = strlen(s1);
  size_t len2 = strlen(s2);
  s3 = malloc(len1 + len2 + 1);
  memcpy(s3, s1, len1);
  memcpy(s3 + len1, s2, len2);
  s3[len1 + len2] = 0;
 }

int main() {
  char s1[] = "I love ";
  char s2[] = "cats!";
  char s3[] = "";
  my_strcat(s1, s2, s3);
  printf("%s\n", s3);//s3不变
}

//回文·进制转换
#include<stdio.h>
#include <string.h>
#include <math.h>
char n[110];
int circle(char *s){
    char *p,*q;
    p=s;q=s;
    q=s+ strlen(s)-1;
    while(p<q){
        if((*p)!=(*q)){
            return 0;
        }
        p++;
        q--;
    }
    return 1;
}
void plus(char *s,int N){
    int a[200];
    int c[110];
    for (int i=0;i<110;i++)
        c[i]=0;
    int l= strlen(s);
    for (int i=0;i<l;i++){
        if(s[i]<='9'&&s[i]>='0') a[i]=s[i]-48;
        if(s[i]>='A'&&s[i]<='F') a[i]=s[i]-'A'+10;
    }
    for (int i=0;i<l;i++){
        c[i]+=a[i]+a[l-i-1];
        c[i+1]+=c[i]/N;
        c[i]%=N;
        if(i==l-1&&c[i+1]) {
            l++;break;
        }
    }
    int i=0;
    while(i<l){
        if(c[i]<=9&&c[i]>=0) s[i]=c[i]+48;
        if(c[i]<=15&&c[i]>=10) s[i]=c[i]+'A'-10;
        i++;
    }
    s[i]='\0';
}
int main(){
    int N,cnt=0;
    scanf("%d",&N);

    scanf("%s",n);
    while (cnt<=30){
        plus(n,N);
        cnt++;
        if(circle(n)) break;
    }
    if(cnt<=30) printf("STEP=%d",cnt);
    else printf("Impossible!");
    return 0;
}