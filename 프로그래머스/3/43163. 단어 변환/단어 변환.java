import java.util.*;

class Solution {
    
    public int findTargetRecursive(String begin, String target, String[] words, List<String> visited){      
        
        int minPath = Integer.MAX_VALUE;
        
        // 1. begin과 target이 같은지 확인 
        int count =0;
        for(int i = 0 ; i<target.length(); i++){
            if(begin.charAt(i) == target.charAt(i)){
                count++;
            }
        }
        if(count==target.length()){
            System.out.println("begin: "+ begin + " "+"visited: " + visited);
            return visited.size();
        }
        
        // 2. visited에 begin 추가
        visited.add(begin);
        
        // 3.(begin과 target이 같지 않다면) Queue 생성
        List<String> queue = new ArrayList<>();
        for(String word : words){
            // 3-1. visited에 없는지 체크 
            if(visited.contains(word)){
                continue;
            }
            
            // 3-2. 한글자만 다른지 체크
            int count2 =0;
            for(int i = 0 ; i<word.length(); i++){
                if(begin.charAt(i) == word.charAt(i)){
                    count2++;
                }
            }
            // System.out.println("begin: "+ begin+ " word: "+ word + " " + "count2: "+count2);
            if(count2!=word.length()-1){
                continue;
            }
            queue.add(word);
        }
        
        while(!queue.isEmpty()){
            List<String> newVisited = new ArrayList<>(visited);
            int result = findTargetRecursive(queue.remove(0), target, words, newVisited);
            if(minPath>result){
                minPath = result;
            }
        }
          
        return minPath;
    }
    
    
    public int solution(String begin, String target, String[] words) {
        int answer = 0;
        
        List<String> visited = new ArrayList<>();
        
        int result = findTargetRecursive(begin, target, words, visited);       
        
        if(result == Integer.MAX_VALUE){
            result = 0;
        }
        
        return result;
    }
}