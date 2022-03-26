#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, c;
    cin>>n>>q>>c;
    int xy_bright[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>xy_bright[i][j];
        }
    }

    int view_xy[q][5];
    for(int i=0;i<q;i++){
        for(int j=0;j<5;j++){
            cin>>view_xy[i][j];
        }
    }
    int x,y,s;
    int x1,y1,x2,y2;
    for(int i=0;i<q;i++){
        int sum = 0;
        x1 = view_xy[i][1];
        y1 = view_xy[i][2];
        x2 = view_xy[i][3];
        y2 = view_xy[i][4];
        for(int j=0;j<n;j++){
            x = xy_bright[j][0];
            y = xy_bright[j][1];

            if(x1<=x && y1<=y && x2>=x && y2>=y){
                s = xy_bright[j][2];
                sum += (s+view_xy[i][0])%(c+1);
            }
        }
        cout<<sum<<endl;

    }


  

    return 0;
}