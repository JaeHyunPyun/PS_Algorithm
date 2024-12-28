import java.util.*;
class Solution {
    public String[] solution(String[] strings, int n) {
        String[] answer = {};
        
        for(int i=0; i<strings.length; i++){
            for(int j=i+1; j<strings.length; j++){
                if(strings[i].charAt(n)>strings[j].charAt(n)){
                    String temp = strings[i];
                    strings[i] = strings[j];
                    strings[j] = temp;
                }
                else if(strings[i].charAt(n)==strings[j].charAt(n)){
                    int minStringLength = strings[i].length();
                    if(minStringLength>strings[j].length()){
                        minStringLength = strings[j].length();
                    }
                    
                    for(int k=0; k<minStringLength; k++){
                        if(strings[i].charAt(k)<strings[j].charAt(k)){
                            break;        
                        }
                        else if(strings[i].charAt(k)>strings[j].charAt(k)){
                            String temp = strings[i];
                            strings[i] = strings[j];
                            strings[j] = temp;
                            break;
                        }
                        
                    }
                }
            }
        }
    
        
        return strings;
    }
}