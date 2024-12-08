import java.util.*;

class Solution {
    public int[] solution(int[] progresses, int[] speeds) {
        List<Integer> list = new ArrayList<>();
        
        Queue<Integer> queue = new LinkedList<>();
        
        for(int i =0; i<progresses.length; i++){
            int residue = 100-progresses[i];
            
            if(residue%speeds[i]==0){
                queue.offer(residue/speeds[i]);    
            }else{
                queue.offer((residue/speeds[i])+1);    
            }
        }
        System.out.println(queue);
        
        //System.out.println();
        
        int count = 1;
        int curr = queue.poll();      // 7   
      
        while(!queue.isEmpty()){
            if(curr>=queue.peek()){
                //System.out.println("curr: "+ curr +"queue.peek: "+ queue.peek());
                queue.remove();         // 3 제거
                count++;
            }
            else{
                list.add(count);
                count = 1;              //count초기화
                curr = queue.remove();      // curr 업데이트
            }        
        }
        list.add(count);
        
        System.out.println(list);
        
        int listSize = list.size();
        
        System.out.println(listSize);
        
        int[] answer = new int[listSize];
        for(int i =0;i<listSize;i++){
            answer[i] = list.get(i);
        }
        
        return answer;
    }
}