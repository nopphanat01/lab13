#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}

void updateImage(bool T[N][M],int s,int x,int y){
    for(int l=0;l<N;l++){
        for(int h=0;h<M;h++){
            int dx = l-x;
            int dy = h-y;
            double distant = sqrt(pow(dx,2)+pow(dy,2));
            if(distant <= s-1) T[l][h]=true;

        }
    }
    
    }
    
    

void showImage(const bool T[N][M]){
    for(int c=0;c<M+2;c++){
        cout << "-";
    }
    cout << "\n";
    for(int a=0;a<N;a++){
        cout<<"|";
        for(int b=0;b<M;b++){
            if(T[a][b]==1) cout <<"*";
            else cout << " ";
        }
        cout<<"|\n";
    }
    for(int c=0;c<M+2;c++){
        cout << "-";
    }
    cout << "\n";
}
