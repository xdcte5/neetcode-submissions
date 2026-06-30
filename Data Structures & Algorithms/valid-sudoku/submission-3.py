class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        # Initialize 9 sets for rows, 9 for columns, and 9 for 3x3 boxes
        rows = [set() for _ in range(9)]
        cols = [set() for _ in range(9)]
        boxes = [set() for _ in range(9)]
        
        for r in range(9):
            for c in range(9):
                val = board[r][c]
                
                # Skip empty positions
                if val == '.':
                    continue
                
                # Determine which of the 9 sub-boxes we are currently in
                box_idx = (r // 3) * 3 + (c // 3)
                
                # If the value is already seen in this row, column, or box, it's invalid
                if val in rows[r] or val in cols[c] or val in boxes[box_idx]:
                    return False
                
                # Track the value
                rows[r].add(val)
                cols[c].add(val)
                boxes[box_idx].add(val)
                
        return True