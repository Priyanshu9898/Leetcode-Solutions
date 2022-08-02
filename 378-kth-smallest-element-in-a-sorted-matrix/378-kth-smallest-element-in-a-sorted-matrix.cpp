
class Node{
  public:
    int data;
    int row;
    int col;
    
    Node(int data, int row , int col){
        this -> data = data;
        this -> col = col;
        this -> row = row;
    }
};

class compare{
  public:
    bool operator()(Node* a , Node* b){
        return a -> data > b -> data;
    }
};



class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        priority_queue<int> pq;
        
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0 ; j < matrix[i].size(); j++ ){
                pq.push(matrix[i][j]);
                if(pq.size() > k)
                    pq.pop();
            }
        }
        
        return pq.top();
    } 
};