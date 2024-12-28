import java.util.*;

class Solution {
    public int[] solution(int[] arr) {
        int[] answer = new int[arr.length-1];
        
        int minValue = arr[0];
        for(int i=1; i<arr.length; i++){
            if(minValue>arr[i]){
                minValue = arr[i];
            }
        }
        // System.out.println(minValue);
        
        int index = 0;
        
        for(int i=0; i<arr.length; i++){
            if(arr[i]!=minValue){
                answer[index] = arr[i];
                index++;
            }
        }
        
        // System.out.println(index);
        if(answer.length<1){
            answer = new int[1];
            answer[index] = -1;
        }
                
        return answer;
    }
}