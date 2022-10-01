var isValidSudoku = function(board) {
  var map = {};
  var tmp = 0;
  for (var i = 0; i < 9; i++) {
    for (var j = 0; j < 9; j++) {
      tmp = board[i][j];
      if (tmp === '.') continue;
      if (map['i' + i + tmp] || map['j' + j + tmp] || map['b' + Math.floor(i / 3) + Math.floor(j / 3) + tmp]) return false;
      map['i' + i + tmp] = 1;
      map['j' + j + tmp] = 1;
      map['b' + Math.floor(i / 3) + Math.floor(j / 3) + tmp] = 1;
    }
  }
  return true;
};
