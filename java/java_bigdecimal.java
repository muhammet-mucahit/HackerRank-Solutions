        

        Arrays.sort(s, 0, s.length - 2, new Comparator<String>() {
            @Override
            public int compare(String o1, String o2) {
                BigDecimal b1 = new BigDecimal(o1);
                BigDecimal b2 = new BigDecimal(o2);
                return b2.compareTo(b1);
            }
        });

