import java.util.*;

class Solution {
    public int solution(int n, int[][] computers) {
        int answer = 0;
        int count = 0;
            
        List<Integer> visited = new ArrayList<>();
        List<Integer> queue = new ArrayList<>();

        for(int i=0; i<n; i++){
            if(!visited.contains(i)&&!queue.contains(i)){
                visited.add(i);
                for(int j=0; j<computers[i].length; j++){
                    if(j!=i){
                        if(computers[i][j]==1&&!visited.contains(j)&&!queue.contains(j)){
                          queue.add(j);  
                        }    
                    }
                }
                while(!queue.isEmpty()){
                    int nextComputer = queue.remove(0);
                    visited.add(nextComputer);
                    for(int j=0; j<computers[nextComputer].length; j++){
                        if(nextComputer!=j){
                        if(computers[nextComputer][j]==1&&!visited.contains(j)&&!queue.contains(j)){
                          queue.add(j);  
                        }    
                        }
                    }   
                }
                count++;
            }
            
        }
        
        
        return count;
    }
}