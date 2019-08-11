#include<iostream>
#include<string>
#include<vector>
#include<cstring> 
#include<algorithm>
using namespace std;
const int maxn = 1e5 + 10;
int n = 0;
string str;

int min_rep(){//好像有点错误的板子
	int i = 1,j = 0,k = 0;
	while(i < n && j < n){
		k = 0;
		while(str[(i+k) % n] == str[(j+k) % n] && k < n){
			++k;
		}
		if(k == n){
			return j;
		}
		if(str[i+k] > str[j+k]){
			if(i +k +1 > j){
				i = i+k+1;	
			}else{
				i = j+1;
			}
			//i = max(i+k+1 ,j + 1);
		}else{
			if(j+k+1 > i){
				j = j+k+1;	
			}else{
				j = i+1;
			}
			//j = max(j+k+1, i+1);
		}
	}
	return i < j? i :j; 
}
int get_max_min(string& s, int flag) { //正确的板子
    int len = s.length();
    int i = 0, j = 1, k = 0, t;
    while(i < len && j < len && k < len) {
        t = s[(j + k) % len] - s[(i + k) % len];
        if(t == 0){
        	k++;
        }else{
            if(flag == 1){//最大表示法
                if(t >= 0){
                	// i += k + 1;
                	i = max(i+k+1,j+1);
                }else{
                	// j += k + 1;
                	j = max(j+k+1,i+1);
                } 
            }else{//最小表示法
                if(t >= 0){
                	// if(j +k+1 > i){
                	// 	j += k + 1;
                	// }else{
                	// 	j = i+1;
                	// }
                	j = max(j+k+1,i+1);
                }else{
                	// if(i+k+1 > j){
                	// 	i += k + 1;
                	// }else{
                	// 	i = j+1;
                	// }
                	i = max(i+k+1,j+1);
                } 
            }
            if(i == j){
            	++j;
            }
            k = 0;
        }
    }
    return min(i, j);
}
int main(){
	// std::ios::sync_with_stdio(false);
	// cin.tie(0);cout.tie(0);
	int T = 0;
	//scanf("%d",&T);
	cin >> T;
	while(T--){
		//scanf("%d",&n);
		//scanf("%d",&)
		// cin >> n;
		cin >> str;
		n = str.length();
		// cout << min_rep() << endl;
		cout << get_max_min(str,0) <<endl;
		//cout << Mini() << endl;
	}
	
	return 0;
}
