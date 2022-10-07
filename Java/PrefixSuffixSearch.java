class TrieNode {
    public Map<Character, TrieNode> children;
    public Set<String> words;
    public TrieNode() {
        children = new HashMap<>();
        words = new HashSet<>();
    }
}
class WordFilter {
    private TrieNode rootP, rootS; 
    private Map<String, Integer> indexes; 
    
    public WordFilter(String[] words) {
        rootP = new TrieNode();
        rootS = new TrieNode();
        indexes = new HashMap<>();
        for (int i=0; i<words.length; i++) {
            insert(words[i]);
            indexes.put(words[i], i);
        }
    }
    
    private void insert(String word) {
        TrieNode ptrP = rootP, ptrS = rootS;
        for (int i=0; i<word.length(); i++) {
            // insert as prefixes
            char c = word.charAt(i);
            if (!ptrP.children.containsKey(c))
                ptrP.children.put(c, new TrieNode());
            ptrP = ptrP.children.get(c);
            ptrP.words.add(word);
            
            // insert as suffixes
            c = word.charAt(word.length()-1-i);
            if (!ptrS.children.containsKey(c))
                ptrS.children.put(c, new TrieNode());
            ptrS = ptrS.children.get(c);
            ptrS.words.add(word);
        }
    }
    
    public int f(String prefix, String suffix) {
        TrieNode ptrP = rootP, ptrS = rootS;
        
        // get all words with prefix
        for (int i=0; i<prefix.length(); i++) {
            char c = prefix.charAt(i);
            if (!ptrP.children.containsKey(c)) return -1;
            ptrP = ptrP.children.get(c);            
        }
        Set<String> prefixes = ptrP.words;
        
        // get all words with suffix
        for (int i=0; i<suffix.length(); i++) {
            char c = suffix.charAt(suffix.length()-1-i);
            if (!ptrS.children.containsKey(c)) return -1;
            ptrS = ptrS.children.get(c);            
        }
        Set<String> suffixes = ptrS.words;
        
        int index = -1;
        for (String word: prefixes) 
            if (suffixes.contains(word))
                 index = Math.max(index, indexes.get(word));
        
        return index;
    }
}
/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter obj = new WordFilter(words);
 * int param_1 = obj.f(prefix,suffix);
 */
