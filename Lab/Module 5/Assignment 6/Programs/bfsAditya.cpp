#include<stdio.h>

int adj_matrix[10][10];
int n,f=0,r=-1,choice=0;
int q[10],visited[10],processed[10];

void preset_matrix()
{
    adj_matrix[0][0]=0; adj_matrix[0][1]=1; adj_matrix[0][2]=1; adj_matrix[0][3]=1; adj_matrix[0][4]=0; adj_matrix[0][5]=0;
    adj_matrix[1][0]=1; adj_matrix[1][1]=0; adj_matrix[1][2]=1; adj_matrix[1][3]=0; adj_matrix[1][4]=1; adj_matrix[1][5]=0;
    adj_matrix[2][0]=1; adj_matrix[2][1]=1; adj_matrix[2][2]=0; adj_matrix[2][3]=0; adj_matrix[2][4]=0; adj_matrix[2][5]=0;
    adj_matrix[3][0]=1; adj_matrix[3][1]=0; adj_matrix[3][2]=0; adj_matrix[3][3]=0; adj_matrix[3][4]=1; adj_matrix[3][5]=1;
    adj_matrix[4][0]=0; adj_matrix[4][1]=1; adj_matrix[4][2]=0; adj_matrix[4][3]=1; adj_matrix[4][4]=0; adj_matrix[4][5]=0;
    adj_matrix[5][0]=0; adj_matrix[5][1]=0; adj_matrix[5][2]=0; adj_matrix[5][3]=1; adj_matrix[5][4]=0; adj_matrix[5][5]=0;
    printf("Graph Created\n");
    n=6;
    for(int i=0;i<n;i++)
    {
        q[i]=0;
        visited[i]=0;
        processed[i]=0;
    }
}

void create_matrix()
{
    printf("Enter number of Nodes: ");
    scanf("%d",&n);
    printf("Enter Elements:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&adj_matrix[i][j]);
        }
    }
    printf("Graph Created");
    for(int i=0;i<n;i++)
    {
        q[i]=0;
        visited[i]=0;
        processed[i]=0;
    }
}

void BFS(int v)
{
    visited[v]=1;
    for(int i=0;i<n;i++)
    {
        if(adj_matrix[v][i] && !visited[i])
        {
            q[++r]=i;
            visited[i]=1;
        }
    }
    if(f<=r)
    {
        if(processed[v]==0)
        {
            printf("%c ",v+65);
        }
        processed[v]=1;
        BFS(q[f++]);
    }
    
}

int main()
{
    while(choice!=4)
    {
        printf("\n1.Use Preset Graph\n2.Enter Adjacency Matrix\n3.Find BFS\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: preset_matrix(); break;
            case 2: create_matrix(); break;
            case 3:
            {
                int v;
                printf("Enter the Starting node: ");
                scanf("%d",&v);
                printf("The BFS order is: ");
                BFS(v);
                for(int i=0;i<n;i++)
                {
                    if(processed[i]==0)
                    {
                        printf("%c", i+65);
                    }
                }
                break;
            }
            case 4: printf("Exiting..."); break;
            default: printf("Invalid Choice"); break;
        }
    }
    return 1;
}