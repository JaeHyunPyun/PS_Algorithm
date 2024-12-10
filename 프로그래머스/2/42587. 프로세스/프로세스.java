import java.util.*;

class Solution {
    public int solution(int[] priorities, int location) {
        
        List<Integer> list = new LinkedList<>();
        int completedPrintCount = 0;
        
        for(int priority : priorities){
            list.add(priority);
        }
        
        int index = location;
        int iteration = 0;
        System.out.println(list);
        
          while(list.size()!=0){
            
            int curr = list.remove(0);
            int maxValue=0;
            
              if(list.size()!=0){
                maxValue = list.get(0);
                for(int i=0; i<list.size(); i++){
                    if(list.get(i)>maxValue){
                        maxValue = list.get(i);
                    }
                }    
            }
                        
        
            if(index==0){
                if(curr>=maxValue){
                    return completedPrintCount+1;
                }  
                else{
                    list.add(curr);
                    index = list.size()-1;
                } 
            }
            else{
                if(curr>=maxValue){
                    index--;
                    completedPrintCount++;
                }
                else{
                    index--;
                    list.add(curr);
                }
            }
          }
        
        return 0;
    }
}