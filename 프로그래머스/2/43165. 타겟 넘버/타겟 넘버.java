import java.util.*;

class Solution {
    
    public int dfsRecursive(int[][] intConnectionArray, int[] rawIntArray, List<Integer> sumList, int start, int target, int targetMetCount) {

        if(!Arrays.stream(intConnectionArray[start]).anyMatch(x->x==1)) {
            sumList.add(rawIntArray[start]);

            int sum=0;
            for(int i :sumList){
                sum+=i;
            }
            if(sum==target){
                targetMetCount++;
            }

            return targetMetCount;
        }

        // sumList에 추가
        sumList.add(rawIntArray[start]);

        for(int i=start+1;i<intConnectionArray[start].length;i++) {
            if(intConnectionArray[start][i]==1){
                List<Integer> newSumList = new ArrayList<>(sumList);
                targetMetCount = dfsRecursive(intConnectionArray, rawIntArray, newSumList, i, target, targetMetCount);
            }
        }
        return targetMetCount;
    }

            
    public int solution(int[] numbers, int target) {
        int answer = 0;
        int targetMetCount =0;

        int[] intArray2 = new int[numbers.length*2];
        for(int i = 0; i < intArray2.length; i++) {
            if(i%2==0){
                intArray2[i] = numbers[i/2];
            }else{
                intArray2[i] = -numbers[i/2];
            }
        }

        int[][] intConnectionArray = new int[intArray2.length][intArray2.length];
        for(int i=0; i<intArray2.length; i++){
            for(int j=0; j<intArray2.length; j++){
                if(i==0){
                    intConnectionArray[i][2] = 1;
                    intConnectionArray[i][3] = 1;
                }
                else if(j>=(i/2+1)*2 &&j<=(i/2+1)*2+1) intConnectionArray[i][j] = 1;
            }
        }


        for(int i =0; i<2; i++){
            List<Integer> sumList = new ArrayList<>();
            targetMetCount = dfsRecursive(intConnectionArray, intArray2, sumList, i, target, targetMetCount);
        }

        
        return targetMetCount;
    }
}