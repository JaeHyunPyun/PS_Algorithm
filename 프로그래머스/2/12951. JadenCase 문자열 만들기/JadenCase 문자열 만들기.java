import java.util.*;

class Solution {
    public String solution(String s) {
        String answer = "";
        String [] stringList = s.split(" ",-1);
        
        for(int i = 0; i<stringList.length; i++){
        	System.out.println(stringList[i]);    

            if(!stringList[i].isEmpty()){
               if(stringList[i].charAt(0)<65){
                	// 첫글자 숫자인 경우
                	String restVocab = stringList[i].substring(1);
                	String restVocabLowerCase = restVocab.toLowerCase();
                	String newVocab = stringList[i].charAt(0)+restVocabLowerCase;
                	answer +=newVocab;
                	if(i<stringList.length-1){
                       answer+=" ";
                    }
                } 
                else{
                    //첫글자 숫자 아닌 경우
                    String restVocab = stringList[i].substring(1);
                    String restVocabLowerCase = restVocab.toLowerCase();
                    String newVocab = stringList[i].toUpperCase().charAt(0)+restVocabLowerCase;
                    answer +=newVocab;
                    if(i<stringList.length-1){
                        answer+=" ";
                    }
                }
            } 
            else{
                //공백인 경우
                if(i<stringList.length-1){
                	answer +=" ";
                }
            }
            
        }
        
        return answer;
    }
}