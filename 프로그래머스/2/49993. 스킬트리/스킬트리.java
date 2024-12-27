import java.util.*;

class Solution {
    public int solution(String skill, String[] skill_trees) {
        int answer = 0;
              
        List<String> availableSkillTrees = new ArrayList<>();
        availableSkillTrees.add(skill);
        for(int i=skill.length()-1; i>0; i--)
        {
            availableSkillTrees.add(skill.substring(0, i));
        }
        
        // System.out.println(availableSkillTrees);
        for(int i=0; i<skill_trees.length; i++)
        {
            skill_trees[i] = skill_trees[i].replaceAll("[^"+skill+"]", "");
           if(skill_trees[i].equals(""))
           {
               answer++;
           }
            else{
            for(String s : availableSkillTrees){
                if(skill_trees[i].equals(s)){
                    answer++;
                    break;
                 }
                }
            }
            // System.out.println(skill_trees[i]);
        }
        // System.out.println(skill_trees.length);
        
        
        
        
        
        return answer;
    }
}