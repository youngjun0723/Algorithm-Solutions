import java.util.*;
class Solution {
        public String[] solution(String myStr) {
            String answer[] = myStr.split("[abc]");
            List<String> list = new ArrayList<>();
            for(String c : answer) {
                if(!c.isEmpty()) {
                    list.add(c);
                }
            }
            if(list.isEmpty()) {
                return new String[]{"EMPTY"};
            }
            return list.toArray(new String[0]);
        }
    }