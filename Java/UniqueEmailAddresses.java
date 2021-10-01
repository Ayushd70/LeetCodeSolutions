class Solution {
    public int numUniqueEmails(String[] emails) {
        Set<String> s = new HashSet<>();
        StringBuilder sb = new StringBuilder();
        for (String em : emails) {
            int i = 0;
            while(em.charAt(i) != '@' && em.charAt(i) != '+') {
                if (em.charAt(i) != '.') sb.append(em.charAt(i));
                i++;
            }
            while(em.charAt(i) != '@') i++;
            sb.append(em.substring(i));
            s.add(sb.toString());
            sb.delete(0,sb.length());
        }
        return s.size();
    }
}
