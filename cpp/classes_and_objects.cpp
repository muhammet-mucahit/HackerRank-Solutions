class Student {
    private:
        int scores[5];
    public:
        void input() {
            int i = 0;
            while(cin >> scores[i++]);
        }
    
        int calculateTotalScore() {
            int sum, i = 0;
            while(i < 5) {
                sum += scores[i];
                i++;
            }
            


};

