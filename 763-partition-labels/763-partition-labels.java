class Solution {
    public List<Integer> partitionLabels(String s) {
        int len = s.length();
        List<Integer> l = new ArrayList<>();
        HashMap<Character, Integer> map = new HashMap<>();
        for(int i=0; i<len; i++){
            char ch = s.charAt(i);
            map.put(ch, i);
        }
        int max=0, prev=-1;
        for(int i=0; i<len; i++){
            char c = s.charAt(i);
            max = Math.max(max, map.get(c));
            if(max==i){
                l.add(max-prev);
                prev=max;
            }
        }
        return l;
    }
}