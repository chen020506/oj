#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>
#include<vector>
using namespace std;
#define VertexType string //顶点的数据类型（string） 
#define VertexMax 20 //最大顶点个数 

typedef struct ArcNode//边表 
{
    int adjvex;//存储的是该顶点在顶点数组即AdjList[]中的位置 
    int weight;//权值 
    struct ArcNode* next;
}ArcNode;
typedef struct data
{
    string i;
    string j;
    int k;
}DD;
typedef struct VNode //顶单个点 
{
    VertexType vertex;
    struct ArcNode* firstarc;
}VNode;

typedef struct //顶点表 
{
    VNode AdjList[VertexMax];//由顶点构成的结构体数组 
    int vexnum, arcnum; //顶点数和边数 
}ALGraph;
    vector<DD>mv;
int LocateVex(ALGraph* G, VertexType v)
{
    int i;
    for (i = 0; i < G->vexnum; i++)
    {
        if (v == G->AdjList[i].vertex)
        {
            return i;
        }
    }

    printf("No Such Vertex!\n");
    return -1;
}

//有向图 
void CreateDN(ALGraph* G)
{
    int i, j;
    //1.输入顶点数和边数 
    printf("输入顶点个数和边数：\n");
    printf("顶点数 n=");
    cin >> G->vexnum;
    printf("边  数 e=");
    cin>>G->arcnum;

    printf("\n");
    //2.顶点表数据域填值初始化顶点表指针域 
    printf("输入顶点元素(用空格隔开)：");
    for (i = 0; i < G->vexnum; i++)
    {
        cin>>G->AdjList[i].vertex;
        G->AdjList[i].firstarc = NULL;
    }
    printf("\n");

    //3.输入边信息构造邻接表 
    int n, m;
    VertexType v1, v2;
    int weight;
    ArcNode* p1, * p2;

    printf("请输入边的信息：\n\n");
    for (i = 0; i < G->arcnum; i++)
    {   //输入边信息，并确定v1和v2在G中的位置，即顶点在AdjList[]数组中的位置（下标）  
        printf("输入第%d条边信息：", i + 1);
        cin >> v1 >> v2 >> weight;
        n = LocateVex(G, v1);
        m = LocateVex(G, v2);

        if (n == -1 || m == -1)
        {
            printf("边的顶点非法!\n");
            return;
        }

        p1 = (ArcNode*)malloc(sizeof(ArcNode));
        p1->adjvex = m;//填上坐标 
        p1->weight = weight;//填上权值 
        p1->next = G->AdjList[n].firstarc;//改链（头插法）  
        G->AdjList[n].firstarc = p1;

    }
}



int TopologicalSort(ALGraph* G, int* topo)
{
    int i;
    int top = -1;//栈顶指针 
    int Gettop;//用于存储/获取栈的栈顶元素 
    int count = 0;//用于统计拓扑排序生成的结点数（若生成结点数 < 图的结点数，则代表图中有环，拓扑排序不成功） 
    int stack[VertexMax] = { 0 };//栈 
    int indegree[VertexMax] = { 0 };//入度数组 
    struct ArcNode* p;//临时变量 

    //1.计算顶点入度，并存入indegree数组中
    for (i = 0; i < G->vexnum; i++)
    {
        if (G->AdjList[i].firstarc != NULL)
        {
            p = G->AdjList[i].firstarc;
            while (p != NULL)
            {
                indegree[p->adjvex]++;
                p = p->next;
            }
        }
    }

    //2.初始化部分：将初始入度为0的顶点入栈
    for (i = 0; i < G->vexnum; i++)
    {
        if (indegree[i] == 0)
        {
            stack[++top] = i;//先将指针加一在进行存储 
        }
    }

    //3.拓扑排序
    int m = 0;
    while (top != -1)//栈不为空 
    {
        Gettop = stack[top--];//获取栈顶元素，并且栈顶指针减一 
        topo[m++] = Gettop;
        //printf(" %c(%d)",G->AdjList[Gettop].vertex,topo[m-1]);//输出栈顶元素 
        count++;

        p = G->AdjList[Gettop].firstarc;
        while (p != NULL)
        {
            indegree[p->adjvex]--;

            if (indegree[p->adjvex] == 0)
            {
                stack[++top] = p->adjvex;
            }
            p = p->next;
        }
    }

    //4.判断拓扑排序是否成功（生成结点数 < 图的结点数，则代表图中有环，拓扑排序不成功） 
    if (count < G->vexnum)
    {
        printf("图中有环，无法求得关键路径\n");
        return 0; //拓扑排序失败 
    }
    else
        return 1; //拓扑排序成功   
}

void CriticalPath(ALGraph* G)
{
    int i;
    int j, k;// <Vj,Vk>
    int e, l;//活动最早开始时间/活动最晚开始时间  
    int topo[VertexMax];//拓扑数组，用于存储拓扑排序结果（存储内容是每个结点的坐标） 
    int ve[VertexMax]; //事件vi的最早发生时间 
    int vl[VertexMax]; //事件vi的最晚发生时间 
    struct ArcNode* p;

    //1.调用拓扑排序，检测图是否存在环 
    if (!TopologicalSort(G, topo))//若拓扑排序成功，topo数组也将处理完毕 
    {
        return;
    }

    //2.正拓扑排序，求出事件最早发生时间 
    for (i = 0; i < G->vexnum; i++)
        ve[i] = 0;
    for (i = 0; i < G->vexnum; i++)
    {
        j = topo[i];//j为起始点，k为终点 
        p = G->AdjList[j].firstarc;//用指针p去依次寻找j的每一个邻接点 
        while (p)
        {
            k = p->adjvex;
            if (ve[k] < ve[j] + p->weight)//根据j的邻接点k，不断更新ve[]的值（选出最大值，原理类似于选择排序） 
            {
                ve[k] = ve[j] + p->weight;
            }
            p = p->next;
        }
    }
    //3.逆拓扑排序，求出事件最迟发生时间 
    for (i = 0; i < G->vexnum; i++)
        vl[i] = ve[G->vexnum - 1];
    for (i = G->vexnum - 1; i >= 0; i--)
    {
        j = topo[i];
        p = G->AdjList[j].firstarc;//让p去依次查找邻接点 
        while (p)
        {
            k = p->adjvex;
            if (vl[j] > vl[k] - p->weight)//根据j的邻接点k，不断更新vl[]的值（选出最小值，原理类似于选择排序）
            {
                vl[j] = vl[k] - p->weight;
            }
            p = p->next;
        }
    }

    //输出ve[i] 
    printf("\tve[i]:");
    for (i = 0; i < G->vexnum; i++)
    {
        printf("\t%d", ve[i]);
    }
    printf("\n");

    printf("\n");
    //输出vl[i]
    printf("\tvl[i]:");
    for (i = 0; i < G->vexnum; i++)
    {
        printf("\t%d", vl[i]);
    }
    printf("\n\n");


    //4.计算e和l，通过判断e是否等于l确定该活动是否是关键活动，从而确定关键路径
    for (i = 0; i < G->vexnum; i++)
    {
        p = G->AdjList[i].firstarc;//让p去依次查找邻接点 
        while (p)
        {
            j = p->adjvex;
            e = ve[i];//计算活动最早开始时间 e 
            l = vl[j] - p->weight;//计算活动最晚开始时间 l 

            cout << endl;
            if (e == l)//如果e=l，说明该活动是关键活动 
            {
                //cout << G->AdjList[i].vertex << "->" << G->AdjList[j].vertex << "(" << p->weight << ")";               
                DD d;
                d.i=G->AdjList[i].vertex;
                d.j=G->AdjList[j].vertex;
                k=p->weight;
                mv.push_back(d);
            }
            p = p->next;
        }
    }

}

int main()
{
    ALGraph G;
    CreateDN(&G);

    printf("关键路径：\n\n");
    CriticalPath(&G);
    for(int u=0;u<mv.size();u++)
    {
        if(u==0)
            cout<<mv[u].i<<"->"<<mv[u].j<<"("<<mv[u].k<<")"<<endl;
        else
            if(mv[u].i==mv[u-1].i)
                continue;

    }

    return 0;
}