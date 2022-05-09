#include<stdio.h>                                                        
#include<malloc.h>
#include<stdlib.h>
typedef struct Node
{
int data;
struct Node *pNext;
}NODE,*PNODE;
 
PNODE create_list() //创造链表函数 
{
    int  len;//用来存放有效节点的个数
    int val;//用来临时存放用户输入的节点的值
    //分配了一个不存放有效数据的头结点
    PNODE pHead=(PNODE)malloc(sizeof(NODE));
    if(NULL==pHead)
    {
        printf("分配失败，程序终止！\n");
        exit(-1);
    }
    PNODE pTail=pHead;
    pTail->pNext=NULL;

    printf("请输入您需要生成的链表节点的个数：len=");
    scanf("%d",&len);

    for(int i=0;i<len;i++)
    {
        printf("请输入第%d个节点的值：",i+1);
        scanf("%d",&val);

        PNODE pNew=(PNODE)malloc(sizeof(NODE));
        if(NULL==pNew)
        {
        printf("分配失败，程序终止！\n");
        exit(-1);
        }
        pNew->data=val;
        pTail->pNext=pNew;//pNew挂到链表的最后一位（pTail）的后面
        pNew->pNext=NULL;//让pNew的指针域为空
        pTail=pNew;//此时让pTail向后移一位，指向pNew,即添加一个节点之后链表的最后一位
    }
    return pHead;
}
 
void traverse_list(PNODE pHead)//遍历链表函数 
{
    PNODE p=pHead->pNext;
    while(NULL!=p)
    {
    	printf("%d ",p->data);
    	p=p->pNext;
	}
	printf("\n");
}
bool is_empty(PNODE pHead)//判断链表是否为空 
{
	if(NULL==pHead->pNext)
		return true;
	return false; 
}

int length_list(PNODE pHead)//求链表的长度 
{
	PNODE p=pHead->pNext;
	int len=0;
	while(NULL!=p)
	{
		++len;
		p=p->pNext;
	}
	return len;
}
//在pHead所指向链表的第pos个节点的前面插入一个新的结点，该节点的值是val,并且pos的值是从1开始 
bool insert_liat(PNODE pHead,int pos,int val)//在链表的某个位置插入一个值
{
	int i=0;
	PNODE p=pHead;
	
	while(NULL!=p&&i<pos-1)
	{
		p=p->pNext;
		++i;
	}
	if(i>pos-1||NULL==p)
		return false;
	PNODE pNew=(PNODE)malloc(sizeof(NODE));
	if(NULL==pNew)
	{
		printf("动态分配内存失败！\n");
		exit(-1);
	}
	pNew->data=val;
	PNODE q=p->pNext;
	p->pNext=pNew;
	pNew->pNext=q;
	
	return true;
}

bool delete_list(PNODE pHead,int pos,int*pVal)//在链表的某个位置删除一个结点，并将它放到第三个参数上 
{
	int i=0;
	PNODE p=pHead;
	
	while(NULL!=p->pNext&&i<pos-1)
	{
		p=p->pNext;
		++i;
	}
	if(i>pos-1||NULL==p->pNext)
		return false;
	PNODE q=p->pNext;
	*pVal=q->data;
	//删除p节点后面的结点 
	p->pNext=p->pNext->pNext;
	free(q);
	q=NULL;
	return true;
}

void sort_list(PNODE pHead)
{
	int i,j,t;
	int len=length_list(pHead); 
	PNODE p,q;
	for(i=0,p=pHead->pNext;i<len-1;i++,p=p->pNext)
	{
		for(j=i+1,q=p->pNext;j<len;++j,q=q->pNext)
		{
			if(p->data>q->data)//类似与数组中a[i]>a[j] 
			{
				t=p->data;//t=a[i]
				p->data=q->data;//a[i]=a[j]
				q->data=t;//a[j]=t
			}
		}
	}
} 
//加法可以将两个链表合并，减法不行
int main ()
{
	int val;
    PNODE pHead=NULL;
    pHead=create_list();//创造链表 
    
    traverse_list(pHead);//遍历链表 
    
    int len=length_list(pHead);//查看链表长度 
    printf("链表的长度是%d\n",len); 
    
    sort_list(pHead);//排序 
    traverse_list(pHead);//遍历链表 
    
    insert_liat(pHead,4,33);
    traverse_list(pHead);//遍历链表 
    
    if(delete_list(pHead,4,&val) )
    {
    	printf("删除成功，您删除的元素是：%d\n",val);
	}
	else
		printf("删除失败！\n");
    traverse_list(pHead);//遍历链表 
    
    if(is_empty(pHead))//判断链表为空 
    	printf("链表为空！\n");
    else
    	printf("链表不空！\n");
    	
}

