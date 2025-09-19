class Spreadsheet {
public:
    vector<vector<int>> v; 
    Spreadsheet(int rows) {
        v.resize(rows, vector<int>(26, 0));
    }
    
    void setCell(string cell, int value) {
        int col = cell[0] - 'A';
        int row = atoi(cell.substr(1).c_str()) - 1;   // ✅ subtract 1 for 0-index
        v[row][col] = value;
    }
    
    void resetCell(string cell) {
        int col = cell[0] - 'A';
        int row = atoi(cell.substr(1).c_str()) - 1;   // ✅ same fix
        v[row][col] = 0;
    }
    
    int getValue(string formula) {
        int ans = 0;
        int val1 = 0;
        int val2 = 0;

        // ---- Left side of '+'
        if (isalpha(formula[1])) {   // ✅ check if it's a cell reference
            int col = formula[1] - 'A';
            int cV = 0;
            int i = 2;
            while (i < formula.size() && isdigit(formula[i])) {
                cV = cV * 10 + (formula[i] - '0');
                i++;
            }
            val1 = v[cV - 1][col];   // ✅ subtract 1 for row index
        } else {
            int i = 1;
            while (i < formula.size() && isdigit(formula[i])) {
                i++;
            }
            val1 = atoi(formula.substr(1, i - 1).c_str()); // ✅ correct length
        }

        // ---- Find '+'
        int j = 0;
        while (j < formula.size() && formula[j] != '+') {
            j++;
        }
        j++; // move past '+'

        // ---- Right side of '+'
        if (isalpha(formula[j])) {   // ✅ cell reference
            int col = formula[j] - 'A';
            int cV = 0;
            int i = j + 1;
            while (i < formula.size() && isdigit(formula[i])) {
                cV = cV * 10 + (formula[i] - '0');
                i++;
            }
            val2 = v[cV - 1][col];   // ✅ subtract 1
        } else {
            int i = j;
            while (i < formula.size() && isdigit(formula[i])) {
                i++;
            }
            val2 = atoi(formula.substr(j, i - j).c_str()); // ✅ correct substring
        }

        return val1 + val2;
    }
};
