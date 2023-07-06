public class Number_of_Recent_Calls {
    
}
class RecentCounter {

    LinkedList<Integer> recent_requests;

    public RecentCounter() {
        this.recent_requests = new LinkedList<Integer>();
    }
    
    public int ping(int t) {
        this.recent_requests.addLast(t);
        while (this.recent_requests.getFirst() < t - 3000) {
            this.recent_requests.removeFirst();
        }
        return this.recent_requests.size();
    }
}

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter obj = new RecentCounter();
 * int param_1 = obj.ping(t);
 */
