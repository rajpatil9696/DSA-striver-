// in this question we have to rotate the matrix (2 D array ) by 90 degree 
/*
 1 2 3    7 4 1
 4 5 6 => 8 5 2
 7 8 9    9 6 3
*/
/*
#include<vector>
void rotateMatrix(vector<vector<int>> &mat){
	int n=mat.size();
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			swap(mat[i][j],mat[j][i]);
		}
	}
	for(int i=0;i<n;i++){
		reverse(mat[i].begin(),mat[i].end());
	}
	
}
*/