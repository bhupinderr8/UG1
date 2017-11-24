#include <stdio.h>

int main()
{
    int testcase,t=26,length=100,i,p,doracake,place,j;
    scanf("%d\n",&testcase);
    for(testcase;testcase>0;testcase--){
        scanf("%d\n",&length);
        char field[length];
        p=doracake=0;
        for(i=0;i<length;i++){
            scanf("%c",&field[i]);
            if(field[i]=='*') doracake++;
            else if(field[i]=='P') p++;
        }
        int dor[p],dora[doracake],m=0,n=0;
        for(i=0;i<length;i++){
            if(field[i]=='*'){
                dora[n]=i;
                n++;
            }
            else if(field[i]=='P'){
                dor[m]=i;
                m++;
            }
        }
        doracake--;
        scanf("%d\n",&t);
        for(i=0;i<length;i++){



        }

        if(doracake==0) printf("YES\n");
        else printf("%d  NO\n",doracake);
    }
    return 0;
}
