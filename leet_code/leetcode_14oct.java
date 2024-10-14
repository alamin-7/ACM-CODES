PriorityQueue<Integer> maxHeap = new PriorityQueue<>((a, b)->(b-a));

        for(int num: nums){
            maxHeap.add(num);
        }

        long score = 0;

        while( k > 0){
            int maxValue = maxHeap.poll();
            score += maxValue;
            maxValue = (int) (Math.ceil((double)maxValue/3));
            maxHeap.add(maxValue);
            k--;
        }

        return score;
