import java.util.*;
import java.util.stream.*;

class Solution {
    public long[] solution(long n) {
        long[] answer = {};
        
        List<Long> semiAnswer = new ArrayList<>();
        
        long nCopy = n;
        
        while(nCopy>0){
            long remain = nCopy%10;
            nCopy /=10;
            semiAnswer.add(remain);
        }
        
        answer = semiAnswer.stream().mapToLong(Long::longValue).toArray();
                      
        return answer;
    }
}