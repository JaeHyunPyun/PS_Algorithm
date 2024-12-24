import java.util.*;

class Solution {
    boolean solution(String s) {
        boolean answer = true;
        
        int pCount =0;
        int yCount =0;

        for(int i=0; i<s.length(); i++){
            if(s.toLowerCase().charAt(i) == ('p'))
            {
              pCount++;  
            }
            if(s.toLowerCase().charAt(i) == ('y'))
            {
              yCount++;  
            }
        }

        if(pCount != yCount){
            answer = false;
        }
        
        return answer;
    }
}