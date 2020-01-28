    static boolean isAnagram(String a, String b) {
        char[] A = a.toLowerCase().toCharArray();
        char[] B = b.toLowerCase().toCharArray();

        Arrays.sort(A);
        Arrays.sort(B);

        return Arrays.equals(A, B);
    }

