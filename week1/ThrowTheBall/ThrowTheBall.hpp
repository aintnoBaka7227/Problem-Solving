#pragma once

class ThrowTheBall {
    public:
    int timesThrown(int N, int M, int L) {
        int times = 0;
        if (M == 1) {
            return times;
        }
        int current_player_index = 1;
        int count = 0;
        while (true) {
            current_player_index+=L;
            count++;
            if (current_player_index > N) {
                current_player_index-=N;
            }
            if (current_player_index == 1) {
                break;
            }
        }
        times = count * (M - 1);
        return times;
    }
};