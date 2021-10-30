class Solution {
    private int jug1Capacity;
    private int jug2Capacity;
    public boolean canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity) {
        if(jug1Capacity == targetCapacity || jug2Capacity == targetCapacity) {
            return true;
        }
        if(jug1Capacity + jug2Capacity < targetCapacity) {
            return false;
        }
        this.jug1Capacity = jug1Capacity;
        this.jug2Capacity = jug2Capacity;
        
        final Queue<Jugs> q = new ArrayDeque<>();
        final Set<Jugs> visited = new HashSet<>();
        q.offer(new Jugs(0, 0));
        
        while(!q.isEmpty()) {
            // remove mark* work add*
            final Jugs curr = q.poll();
            if(visited.contains(curr)) {
                continue;
            }
            visited.add(curr);
            if(curr.jug1 + curr.jug2 == targetCapacity 
               || curr.jug1 == targetCapacity 
               || curr.jug2 == targetCapacity) {
                return true;
            }
            final List<Jugs> possibleNextStates = getPossibleNextStates(curr);
            for(final Jugs nextState : possibleNextStates) {
                if(visited.contains(nextState)) {
                    continue;
                }
                q.offer(nextState);
             }
        }   
        return false;
    }
    
    private List<Jugs> getPossibleNextStates(final Jugs curr) {
        final List<Jugs> states  = new ArrayList<>();
        states.add(new Jugs(0, curr.jug2)); // empty first jug
        states.add(new Jugs(curr.jug1, 0)); // empty second jug
        states.add(new Jugs(jug1Capacity, curr.jug2)); // fill first jug
        states.add(new Jugs(curr.jug1, jug2Capacity)); // fill second jug
        // transer current jug1 into jug2
        {
            final int jug1 = Math.max(0, curr.jug1 - (jug2Capacity - curr.jug2));
            final int jug2 = Math.min(curr.jug1 + curr.jug2, jug2Capacity);
            states.add(new Jugs(jug1, jug2));
        }
         // transer current jug2 into jug1
        {
            final int jug1 = Math.min(curr.jug1 + curr.jug2, jug1Capacity);
            final int jug2 = Math.max(0, curr.jug2 - (jug1Capacity - curr.jug1));
            states.add(new Jugs(jug1, jug2));
        }
        return states;
    }
    
    private static final class Jugs {
        private final int jug1;
        private final int jug2;
        
        private Jugs(final int jug1, final int jug2) {
            this.jug1 = jug1;
            this.jug2 = jug2;
        }
        
        public int hashCode(){
            return Objects.hash(jug1, jug2);
        }
        public boolean equals(final Object o) {
            if(o == null) {
                return false;
            }
            final Jugs jugs = (Jugs) o;
            return this.jug1 == jugs.jug1 && this.jug2 == jugs.jug2;
        }
        public String toString() {
            return "(" + jug1 + "," + jug2 + ")";
        }
    }
}
