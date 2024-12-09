import java.util.*;

class Solution {
    public int[] solution(int[] prices) {
    
        Queue<Integer> queue = new LinkedList<>();
        for (int i=0; i<prices.length; i++){
            queue.offer(prices[i]);
        }
        
        int[] answer = new int[prices.length];
        int index = 0;
        
        while(!queue.isEmpty()){
            int sec =0;
            int curr = queue.poll();        //1
            for(int i=prices.length-queue.size(); i<prices.length; i++){
                if(curr<=prices[i]){
                    // 가격이 떨어지지 않는 경우
                    sec++;
                }
                else{            
                     // 가격이 떨어지는 경우
                    sec++;
                    answer[index] = sec;
                    break;  
                }
            }
            answer[index] = sec;
            index++;
        }
              
        
        return answer;
    }
}