#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<map>

using namespace std;

int m,n;
char DNA[64][1024]={0};

void init(){

    scanf("%d %d",&m ,&n);
    memset(DNA,0, sizeof(char)*64*1024);

    for(int r=0;r<m;r++)
    {
        scanf("%s", DNA[r]);
    }
}

void solve(){

    map<char, int>::iterator it;
    int max,error=0;
    char max_c;

    for(int c=0;c<n;c++)
    {
        map<char, int> ATCG;
        ATCG['A'] = ATCG['T'] = ATCG['C'] = ATCG['G'] = 0;
        max=-1;

        for(int r=0;r<m;r++)
        {
            ATCG[DNA[r][c]]++;
        }

        for(it = ATCG.begin();it!=ATCG.end();it++)
        {
            if(it->second>max)
            {
                max = it->second;
                max_c = it->first;
            }
        }

        printf("%c", max_c);
        error+=(m-max);
    }
    printf("\n%d\n",error);
}


int main(){
    int t=0;

    scanf("%d", &t);

    while(t--)
    {
        init();
        solve();
    }

    return 0;
}