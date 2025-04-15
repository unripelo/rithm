#include<vector>
#include<deque>
#include<functional>
#include<tuple>
#include<limits>
#include<algorithm>
#include<iostream>


struct DinicFlowNetwork {
    struct Arc {
        int start_;
        int end_;
        int flow_;
        int capacity_;
        
        int get_dest(int from) {  // Return the destination node if we were to traverse the arc from node `from`
            if(from == start_) {
                return end_;
            } else {
                return start_;
            }
        }
    }
}
