class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        super=["1","2","3","4","5","6","7","8","9","0","."]
        final=True
        for row in board:
            filtered_row=[x for x in row if x!="."]
            if len(sorted(filtered_row))==len(set(sorted(filtered_row))) and set(sorted(filtered_row)).issubset(super):
                pass
            else:
                final=False

        for i in range(9):
            temp_column=[]
            for row in board:
                temp_column.append(row[i])
            filtered_temp_column=[x for x in temp_column if x!="."]
            if len(sorted(filtered_temp_column))==len(set(sorted(filtered_temp_column))) and set(sorted(filtered_temp_column)).issubset(super):
                pass
            else:
                final=False

        start_of_pull=0
        
        for i in range(3):
            temp_trip=[]
            for j in range(3):
                temp_trip.append(board[start_of_pull])
                start_of_pull+=1
            
            start_of_scan=0
            for k in range(3):
                temp_box=[]
                for m in range(3):
                    for triplet in temp_trip:
                        temp_box.append(triplet[start_of_scan])
                    start_of_scan+=1

                filtered_temp_box=[x for x in temp_box if x!="."]
                if len(sorted(filtered_temp_box))==len(set(sorted(filtered_temp_box))) and set(sorted(filtered_temp_box)).issubset(super):
                    pass

                else:
                    final=False

        return final

            

            
            

        